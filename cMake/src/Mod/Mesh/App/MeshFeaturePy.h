
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef MESH_MESHFEATUREPY_H
#define MESH_MESHFEATUREPY_H

#include <App/GeoFeaturePy.h>
#include <Mod/Mesh/App/MeshFeature.h>
#include <string>


namespace Mesh
{

//===========================================================================
// MeshFeaturePy - Python wrapper
//===========================================================================

/** The python export class for Feature
 */
class MeshExport MeshFeaturePy : public App::GeoFeaturePy
{
protected:
    ~MeshFeaturePy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    MeshFeaturePy(Feature *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = Feature*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the countPoints() method
    static PyObject * staticCallback_countPoints (PyObject *self, PyObject *args);
    /// implementer for the countPoints() method
    PyObject*  countPoints(PyObject *args);
    /// callback for the countFacets() method
    static PyObject * staticCallback_countFacets (PyObject *self, PyObject *args);
    /// implementer for the countFacets() method
    PyObject*  countFacets(PyObject *args);
    /// callback for the harmonizeNormals() method
    static PyObject * staticCallback_harmonizeNormals (PyObject *self, PyObject *args);
    /// implementer for the harmonizeNormals() method
    PyObject*  harmonizeNormals(PyObject *args);
    /// callback for the smooth() method
    static PyObject * staticCallback_smooth (PyObject *self, PyObject *args);
    /// implementer for the smooth() method
    PyObject*  smooth(PyObject *args);
    /// callback for the decimate() method
    static PyObject * staticCallback_decimate (PyObject *self, PyObject *args);
    /// implementer for the decimate() method
    PyObject*  decimate(PyObject *args);
    /// callback for the removeNonManifolds() method
    static PyObject * staticCallback_removeNonManifolds (PyObject *self, PyObject *args);
    /// implementer for the removeNonManifolds() method
    PyObject*  removeNonManifolds(PyObject *args);
    /// callback for the removeNonManifoldPoints() method
    static PyObject * staticCallback_removeNonManifoldPoints (PyObject *self, PyObject *args);
    /// implementer for the removeNonManifoldPoints() method
    PyObject*  removeNonManifoldPoints(PyObject *args);
    /// callback for the fixIndices() method
    static PyObject * staticCallback_fixIndices (PyObject *self, PyObject *args);
    /// implementer for the fixIndices() method
    PyObject*  fixIndices(PyObject *args);
    /// callback for the fixDegenerations() method
    static PyObject * staticCallback_fixDegenerations (PyObject *self, PyObject *args);
    /// implementer for the fixDegenerations() method
    PyObject*  fixDegenerations(PyObject *args);
    /// callback for the removeDuplicatedFacets() method
    static PyObject * staticCallback_removeDuplicatedFacets (PyObject *self, PyObject *args);
    /// implementer for the removeDuplicatedFacets() method
    PyObject*  removeDuplicatedFacets(PyObject *args);
    /// callback for the removeDuplicatedPoints() method
    static PyObject * staticCallback_removeDuplicatedPoints (PyObject *self, PyObject *args);
    /// implementer for the removeDuplicatedPoints() method
    PyObject*  removeDuplicatedPoints(PyObject *args);
    /// callback for the fixSelfIntersections() method
    static PyObject * staticCallback_fixSelfIntersections (PyObject *self, PyObject *args);
    /// implementer for the fixSelfIntersections() method
    PyObject*  fixSelfIntersections(PyObject *args);
    /// callback for the removeFoldsOnSurface() method
    static PyObject * staticCallback_removeFoldsOnSurface (PyObject *self, PyObject *args);
    /// implementer for the removeFoldsOnSurface() method
    PyObject*  removeFoldsOnSurface(PyObject *args);
    /// callback for the removeInvalidPoints() method
    static PyObject * staticCallback_removeInvalidPoints (PyObject *self, PyObject *args);
    /// implementer for the removeInvalidPoints() method
    PyObject*  removeInvalidPoints(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    Feature *getFeaturePtr() const;

};

}  //namespace Mesh

#endif  // MESH_MESHFEATUREPY_H


