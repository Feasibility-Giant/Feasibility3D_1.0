# freecad_openfoam/visualization/animation_controller.py

from typing import Dict, List, Optional, Callable, Any
import time
import numpy as np
from dataclasses import dataclass
from enum import Enum, auto
import logging
from PySide2.QtCore import QTimer
import json

logger = logging.getLogger(__name__)

class PlaybackState(Enum):
    """Represents the current state of animation playback."""
    PLAYING = auto()
    PAUSED = auto()
    STOPPED = auto()

@dataclass
class TimeStep:
    """Represents a single timestep in the animation."""
    time: float
    data: Dict[str, Any]
    metadata: Optional[Dict] = None

class AnimationTrack:
    """Manages a sequence of timesteps for a specific animation property."""
    
    def __init__(self, name: str):
        self.name = name
        self.timesteps: List[TimeStep] = []
        self.current_index = 0
        self.interpolation_enabled = True
        
    def add_timestep(self, time: float, data: Dict[str, Any], 
                    metadata: Optional[Dict] = None) -> None:
        """Add a new timestep to the track."""
        timestep = TimeStep(time, data, metadata)
        
        # Insert maintaining time order
        insert_idx = 0
        for i, existing_step in enumerate(self.timesteps):
            if existing_step.time > time:
                break
            insert_idx = i + 1
        
        self.timesteps.insert(insert_idx, timestep)
        
    def get_data_at_time(self, time: float) -> Dict[str, Any]:
        """Get interpolated data at a specific time."""
        if not self.timesteps:
            return {}
            
        # Find surrounding timesteps
        next_idx = 0
        for i, step in enumerate(self.timesteps):
            if step.time > time:
                next_idx = i
                break
        
        prev_idx = max(0, next_idx - 1)
        
        # Handle boundary cases
        if next_idx == 0:
            return self.timesteps[0].data
        if next_idx >= len(self.timesteps):
            return self.timesteps[-1].data
            
        # Interpolate between timesteps
        if self.interpolation_enabled:
            prev_step = self.timesteps[prev_idx]
            next_step = self.timesteps[next_idx]
            
            alpha = (time - prev_step.time) / (next_step.time - prev_step.time)
            return self._interpolate_data(prev_step.data, next_step.data, alpha)
        else:
            # Return nearest timestep
            if (time - self.timesteps[prev_idx].time) < (self.timesteps[next_idx].time - time):
                return self.timesteps[prev_idx].data
            return self.timesteps[next_idx].data
    
    def _interpolate_data(self, data1: Dict[str, Any], data2: Dict[str, Any], 
                         alpha: float) -> Dict[str, Any]:
        """Interpolate between two data points."""
        result = {}
        
        for key in data1.keys():
            if key not in data2:
                continue
                
            if isinstance(data1[key], (int, float)):
                result[key] = data1[key] * (1 - alpha) + data2[key] * alpha
            elif isinstance(data1[key], np.ndarray):
                result[key] = data1[key] * (1 - alpha) + data2[key] * alpha
            else:
                # Non-interpolatable data types
                result[key] = data2[key] if alpha > 0.5 else data1[key]
                
        return result

class AnimationController:
    """Controls animation playback and manages animation tracks."""
    
    def __init__(self, scene_manager):
        self.scene_manager = scene_manager
        self.tracks: Dict[str, AnimationTrack] = {}
        self.state = PlaybackState.STOPPED
        
        # Playback properties
        self.current_time = 0.0
        self.start_time = 0.0
        self.end_time = 0.0
        self.playback_speed = 1.0
        self.loop_enabled = True
        
        # Frame timing
        self.target_fps = 60
        self.frame_time = 1.0 / self.target_fps
        self.last_frame_time = 0.0
        
        # Qt timer for animation updates
        self.timer = QTimer()
        self.timer.timeout.connect(self._update_animation)
        
        # Callbacks
        self.on_frame_callbacks: List[Callable] = []
        self.on_state_change_callbacks: List[Callable] = []
        
    def create_track(self, name: str) -> AnimationTrack:
        """Create a new animation track."""
        track = AnimationTrack(name)
        self.tracks[name] = track
        return track
    
    def remove_track(self, name: str) -> None:
        """Remove an animation track."""
        if name in self.tracks:
            del self.tracks[name]
    
    def play(self) -> None:
        """Start or resume animation playback."""
        if self.state != PlaybackState.PLAYING:
            self.state = PlaybackState.PLAYING
            self.last_frame_time = time.time()
            self.timer.start(int(self.frame_time * 1000))
            self._notify_state_change()
    
    def pause(self) -> None:
        """Pause animation playback."""
        if self.state == PlaybackState.PLAYING:
            self.state = PlaybackState.PAUSED
            self.timer.stop()
            self._notify_state_change()
    
    def stop(self) -> None:
        """Stop animation playback and reset to start."""
        self.state = PlaybackState.STOPPED
        self.timer.stop()
        self.current_time = self.start_time
        self._update_scene()
        self._notify_state_change()
    
    def seek(self, time: float) -> None:
        """Seek to a specific time in the animation."""
        self.current_time = max(self.start_time, min(time, self.end_time))
        self._update_scene()
    
    def set_playback_speed(self, speed: float) -> None:
        """Set the playback speed multiplier."""
        self.playback_speed = max(0.1, min(speed, 10.0))
    
    def set_loop_enabled(self, enabled: bool) -> None:
        """Enable or disable animation looping."""
        self.loop_enabled = enabled
    
    def add_frame_callback(self, callback: Callable) -> None:
        """Add a callback to be called on each frame update."""
        self.on_frame_callbacks.append(callback)
    
    def add_state_change_callback(self, callback: Callable) -> None:
        """Add a callback to be called when playback state changes."""
        self.on_state_change_callbacks.append(callback)
    
    def _update_animation(self) -> None:
        """Update animation state for the current frame."""
        current_time = time.time()
        delta_time = (current_time - self.last_frame_time) * self.playback_speed
        self.last_frame_time = current_time
        
        self.current_time += delta_time
        
        # Handle animation end
        if self.current_time >= self.end_time:
            if self.loop_enabled:
                self.current_time = self.start_time
            else:
                self.stop()
                return
        
        self._update_scene()
    
    def _update_scene(self) -> None:
        """Update the scene with current animation state."""
        for track_name, track in self.tracks.items():
            data = track.get_data_at_time(self.current_time)
            if node_id := data.get('node_id'):
                if node := self.scene_manager.get_node(node_id):
                    self._apply_animation_data(node, data)
        
        # Notify frame callbacks
        for callback in self.on_frame_callbacks:
            callback(self.current_time)
    
    def _apply_animation_data(self, node, data: Dict[str, Any]) -> None:
        """Apply animation data to a scene node."""
        # Update transform if present
        if 'transform' in data:
            self.scene_manager.update_transform(node.id, data['transform'])
        
        # Update node-specific data
        if 'node_data' in data:
            self.scene_manager.update_node_data(node.id, data['node_data'])
    
    def _notify_state_change(self) -> None:
        """Notify state change callbacks."""
        for callback in self.on_state_change_callbacks:
            callback(self.state)
    
    def get_animation_state(self) -> Dict[str, Any]:
        """Get current animation state for serialization."""
        return {
            'current_time': self.current_time,
            'start_time': self.start_time,
            'end_time': self.end_time,
            'playback_speed': self.playback_speed,
            'loop_enabled': self.loop_enabled,
            'state': self.state.name
        }
    
    def save_animation_data(self, filepath: str) -> None:
        """Save animation data to file."""
        data = {
            'tracks': {
                name: [(step.time, step.data, step.metadata) 
                      for step in track.timesteps]
                for name, track in self.tracks.items()
            },
            'state': self.get_animation_state()
        }
        
        with open(filepath, 'w') as f:
            json.dump(data, f)
    
    def load_animation_data(self, filepath: str) -> None:
        """Load animation data from file."""
        with open(filepath, 'r') as f:
            data = json.load(f)
        
        # Clear existing tracks
        self.tracks.clear()
        
        # Load tracks
        for track_name, track_data in data['tracks'].items():
            track = self.create_track(track_name)
            for time, step_data, metadata in track_data:
                track.add_timestep(time, step_data, metadata)
        
        # Load state
        state = data['state']
        self.current_time = state['current_time']
        self.start_time = state['start_time']
        self.end_time = state['end_time']
        self.playback_speed = state['playback_speed']
        self.loop_enabled = state['loop_enabled']
        self.state = PlaybackState[state['state']]
        
        # Update scene
        self._update_scene()