# freecad_openfoam/core/mesh_generator.py

import os
from typing import Dict, Any, List, Tuple
import FreeCAD as App
import Part
import subprocess
import numpy as np

class MeshGenerator:
    """OpenFOAM mesh generation from FreeCAD geometry"""
    
    def __init__(self, case_dir: str):
        self.case_dir = case_dir
        self.constant_dir = os.path.join(case_dir, "constant")
        self.system_dir = os.path.join(case_dir, "system")
        self.stl_dir = os.path.join(self.constant_dir, "triSurface")
        os.makedirs(self.stl_dir, exist_ok=True)

    def generate_mesh(self, shape: Part.Shape, parameters: Dict[str, Any]) -> bool:
        """Generate OpenFOAM mesh from FreeCAD shape"""
        try:
            print("Starting mesh generation process...")
            
            # First ensure all directories exist
            print("Preparing case structure...")
            if not self._prepare_case_structure():
                return False
            
            # Create controlDict
            print("Creating controlDict...")
            if not self._create_control_dict():
                return False
                
            # Create fvSchemes and fvSolution
            print("Creating FV dictionaries...")
            if not self._create_fv_schemes():
                return False
                
            if not self._create_fv_solution():
                return False
            
            # Export STL
            print("Exporting geometry to STL...")
            tri_surface_dir = os.path.join(self.case_dir, "constant", "triSurface")
            stl_path = os.path.join(tri_surface_dir, "geometry.stl")
            
            if not os.path.exists(tri_surface_dir):
                os.makedirs(tri_surface_dir)
                
            shape.exportStl(stl_path)
            
            if not self._verify_stl_export(stl_path):
                return False
            
            # Configure blockMesh
            print("Configuring blockMesh...")
            if not self._configure_block_mesh(shape, parameters):
                return False
            
            # Run blockMesh
            print("Running blockMesh...")
            if not self._run_block_mesh():
                return False
            
            # Configure snappyHexMesh
            print("Configuring snappyHexMesh...")
            if not self._configure_snappy_hex_mesh(stl_path, parameters):
                return False
            
            # Extract features
            print("Extracting features...")
            if not self._configure_feature_extract():
                return False
                
            if not self._run_feature_extract():
                return False
            
            # Run snappyHexMesh
            print("Running snappyHexMesh...")
            return self._run_snappy_hex_mesh()
            
        except Exception as e:
            print(f"Mesh generation failed: {e}")
            import traceback
            traceback.print_exc()
            return False

    def _export_to_stl(self, shape: Part.Shape) -> str:
        """Export FreeCAD shape to STL"""
        stl_path = os.path.join(self.stl_dir, "geometry.stl")
        shape.exportStl(stl_path)
        return stl_path
    
    def _verify_stl_export(self, stl_path: str) -> bool:
        """Verify STL file was exported correctly"""
        try:
            if not os.path.exists(stl_path):
                print(f"STL file not found at: {stl_path}")
                return False
                
            # Check file size
            if os.path.getsize(stl_path) == 0:
                print("STL file is empty")
                return False
                
            # Try to read first few bytes to verify it's a valid STL
            with open(stl_path, 'rb') as f:
                header = f.read(80)
                if len(header) < 80:
                    print("STL file appears corrupted")
                    return False
                    
            print(f"STL file verified successfully: {stl_path}")
            return True
            
        except Exception as e:
            print(f"STL verification failed: {e}")
            return False
    
    def _run_block_mesh(self) -> bool:
        """Run blockMesh mesh generator"""
        try:
            print("Running blockMesh...")
            result = subprocess.run(
                ['blockMesh', '-case', self.case_dir],
                capture_output=True,
                text=True
            )
            
            if result.returncode != 0:
                print("blockMesh failed with output:")
                print(result.stdout)
                print("Error output:")
                print(result.stderr)
                return False
                
            print("blockMesh completed successfully")
            return True
            
        except Exception as e:
            print(f"blockMesh execution failed: {e}")
            return False

    def _configure_feature_extract(self) -> bool:
        """Configure surfaceFeatureExtract dictionary"""
        try:
            extract_dict = """/*--------------------------------*- C++ -*----------------------------------*\\
    | =========                 |                                                 |
    | \\\\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox           |
    |  \\\\    /   O peration     | Version:  v2212                                 |
    |   \\\\  /    A nd           | Website:  www.openfoam.com                      |
    |    \\\\/     M anipulation  |                                                 |
    \\*---------------------------------------------------------------------------*/
    FoamFile
    {
        version     2.0;
        format      ascii;
        class       dictionary;
        object      surfaceFeatureExtractDict;
    }
    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    geometry.stl
    {
        extractionMethod    extractFromSurface;
        
        extractFromSurfaceCoeffs
        {
            includedAngle   150;
        }
        
        subsetFeatures
        {
            nonManifoldEdges       yes;
            openEdges              yes;
        }
        
        writeObj                yes;
    }

    // ************************************************************************* //"""

            # Write to system directory
            system_dir = os.path.join(self.case_dir, "system")
            if not os.path.exists(system_dir):
                os.makedirs(system_dir)
                
            extract_dict_path = os.path.join(system_dir, "surfaceFeatureExtractDict")
            with open(extract_dict_path, 'w') as f:
                f.write(extract_dict)
                
            print(f"Created surfaceFeatureExtractDict in: {extract_dict_path}")
            return True
            
        except Exception as e:
            print(f"Failed to configure feature extraction: {e}")
            return False
    
    def _create_fv_schemes(self) -> bool:
        """Create fvSchemes dictionary file"""
        try:
            fv_schemes = """/*--------------------------------*- C++ -*----------------------------------*\\
    | =========                 |                                                 |
    | \\\\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox           |
    |  \\\\    /   O peration     | Version:  v2212                                 |
    |   \\\\  /    A nd           | Website:  www.openfoam.com                      |
    |    \\\\/     M anipulation  |                                                 |
    \\*---------------------------------------------------------------------------*/
    FoamFile
    {
        version     2.0;
        format      ascii;
        class       dictionary;
        location    "system";
        object      fvSchemes;
    }
    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    ddtSchemes
    {
        default         steadyState;
    }

    gradSchemes
    {
        default         Gauss linear;
    }

    divSchemes
    {
        default         none;
        div(phi,U)      bounded Gauss linear;
        div(phi,k)      bounded Gauss linear;
        div(phi,epsilon) bounded Gauss linear;
        div(phi,R)      bounded Gauss linear;
        div(R)          Gauss linear;
        div((nuEff*dev2(T(grad(U))))) Gauss linear;
    }

    laplacianSchemes
    {
        default         Gauss linear corrected;
    }

    interpolationSchemes
    {
        default         linear;
    }

    snGradSchemes
    {
        default         corrected;
    }

    // ************************************************************************* //"""

            system_dir = os.path.join(self.case_dir, "system")
            if not os.path.exists(system_dir):
                os.makedirs(system_dir)
                
            with open(os.path.join(system_dir, "fvSchemes"), 'w') as f:
                f.write(fv_schemes)
                
            print("Created fvSchemes")
            return True
            
        except Exception as e:
            print(f"Failed to create fvSchemes: {e}")
            return False

    def _create_fv_solution(self) -> bool:
        """Create fvSolution dictionary file"""
        try:
            fv_solution = """/*--------------------------------*- C++ -*----------------------------------*\\
    | =========                 |                                                 |
    | \\\\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox           |
    |  \\\\    /   O peration     | Version:  v2212                                 |
    |   \\\\  /    A nd           | Website:  www.openfoam.com                      |
    |    \\\\/     M anipulation  |                                                 |
    \\*---------------------------------------------------------------------------*/
    FoamFile
    {
        version     2.0;
        format      ascii;
        class       dictionary;
        location    "system";
        object      fvSolution;
    }
    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    solvers
    {
        p
        {
            solver          GAMG;
            tolerance       1e-06;
            relTol          0.1;
            smoother        GaussSeidel;
        }

        "(U|k|epsilon|omega)"
        {
            solver          smoothSolver;
            smoother        GaussSeidel;
            tolerance       1e-05;
            relTol          0.1;
        }
    }

    SIMPLE
    {
        nNonOrthogonalCorrectors 0;
        pRefCell        0;
        pRefValue       0;
    }

    relaxationFactors
    {
        fields
        {
            p               0.3;
        }
        equations
        {
            U               0.7;
            k               0.7;
            epsilon         0.7;
            omega          0.7;
        }
    }

    // ************************************************************************* //"""

            system_dir = os.path.join(self.case_dir, "system")
            if not os.path.exists(system_dir):
                os.makedirs(system_dir)
                
            with open(os.path.join(system_dir, "fvSolution"), 'w') as f:
                f.write(fv_solution)
                
            print("Created fvSolution")
            return True
            
        except Exception as e:
            print(f"Failed to create fvSolution: {e}")
            return False

    def _run_feature_extract(self) -> bool:
        """Run surfaceFeatureExtract"""
        try:
            print("Running surfaceFeatureExtract...")
            result = subprocess.run(
                ['surfaceFeatureExtract', '-case', self.case_dir],
                capture_output=True,
                text=True
            )
            
            if result.returncode != 0:
                print("surfaceFeatureExtract failed with output:")
                print(result.stdout)
                print("Error output:")
                print(result.stderr)
                return False
                
            print("Feature extraction completed successfully")
            return True
            
        except Exception as e:
            print(f"Feature extraction failed: {e}")
            return False

    def _calculate_bounds(self, parameters: Dict[str, Any]) -> Tuple[List[float], List[float]]:
        """Calculate mesh bounds with padding"""
        bbox = parameters.get("bbox", None)
        if bbox is None:
            raise ValueError("Bounding box not provided in parameters")
            
        padding = parameters.get("padding", 0.1)  # 10% padding by default
        
        min_point = [
            bbox.XMin - (bbox.XMax - bbox.XMin) * padding,
            bbox.YMin - (bbox.YMax - bbox.YMin) * padding,
            bbox.ZMin - (bbox.ZMax - bbox.ZMin) * padding
        ]
        
        max_point = [
            bbox.XMax + (bbox.XMax - bbox.XMin) * padding,
            bbox.YMax + (bbox.YMax - bbox.YMin) * padding,
            bbox.ZMax + (bbox.ZMax - bbox.ZMin) * padding
        ]
        
        return min_point, max_point
    
    def _prepare_case_structure(self):
        """Prepare OpenFOAM case directory structure"""
        try:
            # Create main case directory if it doesn't exist
            if not os.path.exists(self.case_dir):
                os.makedirs(self.case_dir)
            
            # Create standard OpenFOAM directories
            directories = [
                os.path.join(self.case_dir, "system"),
                os.path.join(self.case_dir, "constant"),
                os.path.join(self.case_dir, "constant", "triSurface"),
                os.path.join(self.case_dir, "constant", "polyMesh"),
                os.path.join(self.case_dir, "0")
            ]
            
            for directory in directories:
                if not os.path.exists(directory):
                    os.makedirs(directory)
                    
            print(f"Created case structure in: {self.case_dir}")
            return True
            
        except Exception as e:
            print(f"Failed to prepare case structure: {e}")
            return False

    def _generate_vertices(self, bounds: Tuple[List[float], List[float]]) -> List[str]:
        """Generate vertices for blockMesh"""
        min_point, max_point = bounds
        vertices = []
        
        # Generate 8 vertices of the block
        for k in [0, 1]:
            for j in [0, 1]:
                for i in [0, 1]:
                    vertex = [
                        min_point[0] if i == 0 else max_point[0],
                        min_point[1] if j == 0 else max_point[1],
                        min_point[2] if k == 0 else max_point[2]
                    ]
                    vertices.append(f"({' '.join(map(str, vertex))})")
        
        return vertices

    def _generate_blocks(self, bounds: Tuple[List[float], List[float]], 
                        parameters: Dict[str, Any]) -> List[str]:
        """Generate blocks definition for blockMesh"""
        cells = parameters.get("base_cells", [20, 20, 20])
        grading = parameters.get("grading", [1, 1, 1])
        
        # Standard hex block definition
        block = (
            f"hex (0 1 2 3 4 5 6 7) "
            f"({' '.join(map(str, cells))}) "
            f"simpleGrading ({' '.join(map(str, grading))})"
        )
        
        return [block]
    
    def _configure_block_mesh(self, shape, params):
        """Configure blockMesh settings based on shape and parameters"""
        try:
            # Get bounding box of shape
            bbox = shape.BoundBox  # Changed from BoundingBox to BoundBox
            
            # Add padding
            padding = params.get('padding', 0.1)  # 10% padding by default
            padding_x = (bbox.XLength * padding)
            padding_y = (bbox.YLength * padding)
            padding_z = (bbox.ZLength * padding)
            
            # Calculate domain extents with padding
            x_min = bbox.XMin - padding_x
            x_max = bbox.XMax + padding_x
            y_min = bbox.YMin - padding_y
            y_max = bbox.YMax + padding_y
            z_min = bbox.ZMin - padding_z
            z_max = bbox.ZMax + padding_z
            
            # Get cell counts
            cells = params.get('base_cells', [20, 20, 20])
            
            # Create blockMeshDict content
            block_mesh_content = f"""/*--------------------------------*- C++ -*----------------------------------*\\
    | =========                 |                                                 |
    | \\\\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox           |
    |  \\\\    /   O peration     | Version:  v2212                                 |
    |   \\\\  /    A nd           | Website:  www.openfoam.com                      |
    |    \\\\/     M anipulation  |                                                 |
    \\*---------------------------------------------------------------------------*/
    FoamFile
    {{
        version     2.0;
        format      ascii;
        class       dictionary;
        object      blockMeshDict;
    }}
    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    convertToMeters 1;

    vertices
    (
        ({x_min} {y_min} {z_min})  // 0
        ({x_max} {y_min} {z_min})  // 1
        ({x_max} {y_max} {z_min})  // 2
        ({x_min} {y_max} {z_min})  // 3
        ({x_min} {y_min} {z_max})  // 4
        ({x_max} {y_min} {z_max})  // 5
        ({x_max} {y_max} {z_max})  // 6
        ({x_min} {y_max} {z_max})  // 7
    );

    blocks
    (
        hex (0 1 2 3 4 5 6 7) ({cells[0]} {cells[1]} {cells[2]}) simpleGrading (1 1 1)
    );

    boundary
    (
        minX
        {{
            type patch;
            faces
            (
                (0 3 7 4)
            );
        }}
        maxX
        {{
            type patch;
            faces
            (
                (1 5 6 2)
            );
        }}
        minY
        {{
            type patch;
            faces
            (
                (0 1 5 4)
            );
        }}
        maxY
        {{
            type patch;
            faces
            (
                (3 2 6 7)
            );
        }}
        minZ
        {{
            type patch;
            faces
            (
                (0 1 2 3)
            );
        }}
        maxZ
        {{
            type patch;
            faces
            (
                (4 5 6 7)
            );
        }}
    );

    // ************************************************************************* //"""

            # Write blockMeshDict
            system_dir = os.path.join(self.case_dir, "system")
            if not os.path.exists(system_dir):
                os.makedirs(system_dir)
                
            with open(os.path.join(system_dir, "blockMeshDict"), 'w') as f:
                f.write(block_mesh_content)
                
            return True
            
        except Exception as e:
            print(f"Error configuring blockMesh: {str(e)}")
            return False
    def _create_control_dict(self):
        """Create OpenFOAM controlDict file"""
        try:
            control_dict = """/*--------------------------------*- C++ -*----------------------------------*\\
        | =========                 |                                                 |
        | \\\\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox           |
        |  \\\\    /   O peration     | Version:  v2212                                 |
        |   \\\\  /    A nd           | Website:  www.openfoam.com                      |
        |    \\\\/     M anipulation  |                                                 |
        \\*---------------------------------------------------------------------------*/
        FoamFile
        {
            version     2.0;
            format      ascii;
            class       dictionary;
            location    "system";
            object      controlDict;
        }
        // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

        application     simpleFoam;

        startFrom       latestTime;

        startTime       0;

        stopAt          endTime;

        endTime         1000;

        deltaT          1;

        writeControl    timeStep;

        writeInterval   100;

        purgeWrite      0;

        writeFormat     ascii;

        writePrecision  6;

        writeCompression off;

        timeFormat      general;

        timePrecision   6;

        runTimeModifiable true;

        // ************************************************************************* //"""

            system_dir = os.path.join(self.case_dir, "system")
            if not os.path.exists(system_dir):
                os.makedirs(system_dir)
                
            control_dict_path = os.path.join(system_dir, "controlDict")
            with open(control_dict_path, 'w') as f:
                f.write(control_dict)
                
            print(f"Created controlDict in: {control_dict_path}")
            return True
            
        except Exception as e:
            print(f"Failed to create controlDict: {e}")
            return False

    def _generate_boundary(self, parameters: Dict[str, Any]) -> Dict[str, Any]:
        """Generate boundary definitions for blockMesh"""
        return {
            "front": {
                "type": "patch",
                "faces": ["(0 1 5 4)"]
            },
            "back": {
                "type": "patch",
                "faces": ["(2 3 7 6)"]
            },
            "left": {
                "type": "patch",
                "faces": ["(0 2 6 4)"]
            },
            "right": {
                "type": "patch",
                "faces": ["(1 3 7 5)"]
            },
            "bottom": {
                "type": "patch",
                "faces": ["(0 1 3 2)"]
            },
            "top": {
                "type": "patch",
                "faces": ["(4 5 7 6)"]
            }
        }

    def _write_foam_dict(self, file, data: Dict, indent: int = 0) -> None:
        """Write OpenFOAM dictionary format"""
        indent_str = "    " * indent
        for key, value in data.items():
            if isinstance(value, dict):
                file.write(f"{indent_str}{key}\n{indent_str}{{\n")
                self._write_foam_dict(file, value, indent + 1)
                file.write(f"{indent_str}}}\n")
            elif isinstance(value, list):
                if all(isinstance(x, str) and x.startswith("(") for x in value):
                    # Handle vertex and face definitions
                    file.write(f"{indent_str}{key}\n{indent_str}(\n")
                    for item in value:
                        file.write(f"{indent_str}    {item}\n")
                    file.write(f"{indent_str});\n")
                else:
                    file.write(f"{indent_str}{key} ({' '.join(map(str, value))});\n")
            else:
                file.write(f"{indent_str}{key} {value};\n")
    
    def _configure_snappy_hex_mesh(self, stl_path, parameters):
        """Configure snappyHexMesh settings"""
        try:
            # Extract parameters
            feature_angle = parameters.get('feature_angle', 30)
            max_refinement = parameters.get('max_refinement_level', 2)
            n_layers = parameters.get('n_surface_layers', 3)
            expansion_ratio = parameters.get('expansion_ratio', 1.2)
            max_non_ortho = parameters.get('max_non_ortho', 65)
            max_skewness = parameters.get('max_skewness', 0.4)
            
            # Create snappyHexMeshDict content
            snappy_content = f"""/*--------------------------------*- C++ -*----------------------------------*\\
    | =========                 |                                                 |
    | \\\\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox           |
    |  \\\\    /   O peration     | Version:  v2212                                 |
    |   \\\\  /    A nd           | Website:  www.openfoam.com                      |
    |    \\\\/     M anipulation  |                                                 |
    \\*---------------------------------------------------------------------------*/
    FoamFile
    {{
        version     2.0;
        format      ascii;
        class       dictionary;
        object      snappyHexMeshDict;
    }}
    // * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

    castellatedMesh true;
    snap            true;
    addLayers       true;

    geometry
    {{
        geometry.stl
        {{
            type triSurfaceMesh;
            file "{os.path.basename(stl_path)}";
        }}
    }}

    castellatedMeshControls
    {{
        maxLocalCells 100000;
        maxGlobalCells 2000000;
        minRefinementCells 10;
        maxLoadUnbalance 0.10;
        nCellsBetweenLevels 3;
        features
        (
            {{
                file "geometry.eMesh";
                level {max_refinement};
            }}
        );
        refinementSurfaces
        {{
            geometry
            {{
                level ({max_refinement-1} {max_refinement});
            }}
        }}
        resolveFeatureAngle {feature_angle};
        refinementRegions
        {{
        }}
        locationInMesh (0 0 0);
        allowFreeStandingZoneFaces true;
    }}

    snapControls
    {{
        nSmoothPatch 3;
        tolerance 2.0;
        nSolveIter 30;
        nRelaxIter 5;
        nFeatureSnapIter 10;
        implicitFeatureSnap false;
        explicitFeatureSnap true;
        multiRegionFeatureSnap false;
    }}

    addLayersControls
    {{
        relativeSizes true;
        layers
        {{
            geometry
            {{
                nSurfaceLayers {n_layers};
            }}
        }}
        expansionRatio {expansion_ratio};
        finalLayerThickness 0.3;
        minThickness 0.1;
        nGrow 0;
        featureAngle 60;
        nRelaxIter 5;
        nSmoothSurfaceNormals 1;
        nSmoothNormals 3;
        nSmoothThickness 10;
        maxFaceThicknessRatio 0.5;
        maxThicknessToMedialRatio 0.3;
        minMedianAxisAngle 90;
        nBufferCellsNoExtrude 0;
        nLayerIter 50;
        nRelaxedIter 20;
    }}

    meshQualityControls
    {{
        maxNonOrtho {max_non_ortho};
        maxBoundarySkewness {max_skewness};
        maxInternalSkewness {max_skewness};
        maxConcave 80;
        minFlatness 0.5;
        minVol 1e-13;
        minTetQuality 1e-15;
        minArea -1;
        minTwist 0.05;
        minDeterminant 0.001;
        minFaceWeight 0.05;
        minVolRatio 0.01;
        minTriangleTwist -1;
        nSmoothScale 4;
        errorReduction 0.75;
        relaxed
        {{
            maxNonOrtho 75;
        }}
    }}

    debug 0;
    mergeTolerance 1E-6;
    """

            # Write snappyHexMeshDict
            system_dir = os.path.join(self.case_dir, "system")
            if not os.path.exists(system_dir):
                os.makedirs(system_dir)
                
            with open(os.path.join(system_dir, "snappyHexMeshDict"), 'w') as f:
                f.write(snappy_content)
                
            return True
            
        except Exception as e:
            print(f"Error configuring snappyHexMesh: {str(e)}")
            return False

    def _run_mesh_generation(self) -> bool:
        """Execute OpenFOAM mesh generation commands"""
        try:
            # Run blockMesh
            subprocess.run(
                ["blockMesh", "-case", self.case_dir],
                check=True,
                capture_output=True,
                text=True
            )
            
            # Run snappyHexMesh
            subprocess.run(
                ["snappyHexMesh", "-overwrite", "-case", self.case_dir],
                check=True,
                capture_output=True,
                text=True
            )
            
            # Check mesh quality
            result = subprocess.run(
                ["checkMesh", "-case", self.case_dir],
                capture_output=True,
                text=True
            )
            
            if "Failed" in result.stdout or "failed" in result.stdout:
                print("Mesh quality check failed:")
                print(result.stdout)
                return False
                
            return True
            
        except subprocess.CalledProcessError as e:
            print(f"Mesh generation command failed: {e}")
            print(f"Output: {e.output}")
            return False
        except Exception as e:
            print(f"Unexpected error during mesh generation: {e}")
            return False

    def check_mesh_quality(self) -> Dict[str, Any]:
        """Check mesh quality metrics"""
        try:
            result = subprocess.run(
                ["checkMesh", "-case", self.case_dir],
                capture_output=True,
                text=True
            )
            
            # Parse checkMesh output
            metrics = {
                "non_orthogonality": None,
                "skewness": None,
                "cell_count": None,
                "face_count": None,
                "point_count": None,
                "max_aspect_ratio": None
            }
            
            for line in result.stdout.split('\n'):
                if "cells:" in line:
                    metrics["cell_count"] = int(line.split()[-1])
                elif "faces:" in line:
                    metrics["face_count"] = int(line.split()[-1])
                elif "points:" in line:
                    metrics["point_count"] = int(line.split()[-1])
                elif "Maximum non-orthogonality" in line:
                    metrics["non_orthogonality"] = float(line.split()[-1])
                elif "Maximum skewness" in line:
                    metrics["skewness"] = float(line.split()[-1])
                elif "Maximum aspect ratio" in line:
                    metrics["max_aspect_ratio"] = float(line.split()[-1])
            
            return metrics
            
        except Exception as e:
            print(f"Failed to check mesh quality: {e}")
            return {}

    def extract_features(self, angle_tolerance: float = 30) -> bool:
        """Extract mesh features for snapping"""
        try:
            subprocess.run(
                [
                    "surfaceFeatureExtract",
                    "-case", self.case_dir,
                    "-includedAngle", str(angle_tolerance)
                ],
                check=True,
                capture_output=True,
                text=True
            )
            return True
        except subprocess.CalledProcessError as e:
            print(f"Feature extraction failed: {e}")
            return False
    
    def _verify_openfoam_files(self):
        """Verify all required OpenFOAM files and directories exist"""
        try:
            # List of required directories
            required_dirs = [
                os.path.join(self.case_dir, "system"),
                os.path.join(self.case_dir, "constant"),
                os.path.join(self.case_dir, "constant", "triSurface"),
                os.path.join(self.case_dir, "constant", "polyMesh"),
                os.path.join(self.case_dir, "0")
            ]
            
            # List of required files
            required_files = [
                os.path.join(self.case_dir, "system", "controlDict"),
                os.path.join(self.case_dir, "system", "blockMeshDict"),
                os.path.join(self.case_dir, "system", "snappyHexMeshDict"),
                os.path.join(self.case_dir, "constant", "triSurface", "geometry.stl")
            ]
            
            # Check directories
            for directory in required_dirs:
                if not os.path.exists(directory):
                    print(f"Missing required directory: {directory}")
                    return False
                    
            # Check files
            for file_path in required_files:
                if not os.path.exists(file_path):
                    print(f"Missing required file: {file_path}")
                    return False
                    
                # Check if files are empty
                if os.path.getsize(file_path) == 0:
                    print(f"File is empty: {file_path}")
                    return False
                    
            return True
            
        except Exception as e:
            print(f"File verification failed: {e}")
            return False

    def _run_snappy_hex_mesh(self) -> bool:
        """Run snappyHexMesh with detailed error checking"""
        try:
            # Verify files before running
            if not self._verify_openfoam_files():
                return False
                
            print("Running snappyHexMesh...")
            
            # Run with detailed output capture
            result = subprocess.run(
                ['snappyHexMesh', '-overwrite', '-case', self.case_dir],
                capture_output=True,
                text=True,
                env=os.environ.copy()  # Ensure OpenFOAM environment is passed
            )
            
            # Print detailed output for debugging
            print("\nCommand Output:")
            print(result.stdout)
            
            if result.stderr:
                print("\nError Output:")
                print(result.stderr)
                
            if result.returncode != 0:
                # Try to read log file for more details
                log_file = os.path.join(self.case_dir, "log.snappyHexMesh")
                if os.path.exists(log_file):
                    with open(log_file, 'r') as f:
                        print("\nsnappyHexMesh Log:")
                        print(f.read())
                return False
                
            return True
            
        except Exception as e:
            print(f"snappyHexMesh execution failed: {e}")
            print(f"Working directory: {os.getcwd()}")
            print(f"Case directory: {self.case_dir}")
            return False