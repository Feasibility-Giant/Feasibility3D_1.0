#ifndef LIBRARY_VERSIONS_H
#define LIBRARY_VERSIONS_H

/* LibraryVersions.h.  Generated from LibraryVersions.h.cmake by cmake.  */

#define HAVE_OCC_VERSION

#if defined(HAVE_OCC_VERSION)
#  include </usr/include/opencascade/Standard_Version.hxx>
#endif

#define BUILD_SMESH

#if defined(BUILD_SMESH)
#  include <SMESH_Version.h>
#endif


/* No need for Boost (version info is always included in the source) */
/* No need for Python (version info is always included in the source) */
/* No need for Qt (version info is always included in the source) */
/* No need for SMESH (version info is always included in the source) */
/* No need for zlib (version info is always included in the source) */

// No CMake version info for libarea, Zipios, or KDL

// Coin3D
constexpr const char * fcCoin3dVersion = "4.0.2";

// Eigen3
constexpr const char * fcEigen3Version = "3.4.0";

// FreeType
constexpr const char * fcFreetypeVersion = "2.13.2";

// pcl
constexpr const char * fcPclVersion = "";

// PyCXX
constexpr const char * fcPycxxVersion = "7.1.9";

// PySide
constexpr const char * fcPysideVersion = "5.15.13";

// PyBind
constexpr const char * fcPybind11Version = "";

// Shiboken
constexpr const char * fcShibokenVersion = "5.15.13";

// vtk
constexpr const char * fcVtkVersion = "9.1.0";

// Xerces-C
constexpr const char * fcXercescVersion = "3.2.4";

// Pivy
constexpr const char * fcPivyVersion = "0.6.9";


#endif // LIBRARY_VERSIONS_H
