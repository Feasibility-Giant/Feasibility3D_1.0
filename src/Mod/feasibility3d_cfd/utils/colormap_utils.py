import numpy as np

def get_colormap(name='rainbow'):
    """Get colormap array for VTK lookup table"""
    if name == 'rainbow':
        colors = np.array([
            [0, 0, 1],    # Blue
            [0, 1, 1],    # Cyan
            [0, 1, 0],    # Green
            [1, 1, 0],    # Yellow
            [1, 0, 0]     # Red
        ])
    elif name == 'coolwarm':
        colors = np.array([
            [0, 0, 1],    # Blue
            [1, 1, 1],    # White
            [1, 0, 0]     # Red
        ])
    else:
        colors = np.array([
            [0, 0, 0],    # Black
            [1, 1, 1]     # White
        ])
        
    return colors