
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef MESH_FACETPY_H
#define MESH_FACETPY_H

#include <Base/PyObjectBase.h>
#include <Mod/Mesh/App/Facet.h>
#include <string>


namespace Mesh
{

//===========================================================================
// FacetPy - Python wrapper
//===========================================================================

/** The python export class for Facet
 */
class MeshExport FacetPy : public Base::PyObjectBase
{
protected:
    ~FacetPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    FacetPy(Facet *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = Facet*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the unbound() method
    static PyObject * staticCallback_unbound (PyObject *self, PyObject *args);
    /// implementer for the unbound() method
    PyObject*  unbound(PyObject *args);
    /// callback for the intersect() method
    static PyObject * staticCallback_intersect (PyObject *self, PyObject *args);
    /// implementer for the intersect() method
    PyObject*  intersect(PyObject *args);
    /// callback for the isDegenerated() method
    static PyObject * staticCallback_isDegenerated (PyObject *self, PyObject *args);
    /// implementer for the isDegenerated() method
    PyObject*  isDegenerated(PyObject *args);
    /// callback for the isDeformed() method
    static PyObject * staticCallback_isDeformed (PyObject *self, PyObject *args);
    /// implementer for the isDeformed() method
    PyObject*  isDeformed(PyObject *args);
    /// callback for the getEdge() method
    static PyObject * staticCallback_getEdge (PyObject *self, PyObject *args);
    /// implementer for the getEdge() method
    PyObject*  getEdge(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Index attribute
    static PyObject * staticCallback_getIndex (PyObject *self, void *closure);
    /// getter for the Index attribute
    Py::Long getIndex() const;
    /// setter callback for the Index attribute
    static int staticCallback_setIndex (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Index is read only!
    ///getter callback for the Bound attribute
    static PyObject * staticCallback_getBound (PyObject *self, void *closure);
    /// getter for the Bound attribute
    Py::Boolean getBound() const;
    /// setter callback for the Bound attribute
    static int staticCallback_setBound (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Bound is read only!
    ///getter callback for the Normal attribute
    static PyObject * staticCallback_getNormal (PyObject *self, void *closure);
    /// getter for the Normal attribute
    Py::Object getNormal() const;
    /// setter callback for the Normal attribute
    static int staticCallback_setNormal (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Normal is read only!
    ///getter callback for the Points attribute
    static PyObject * staticCallback_getPoints (PyObject *self, void *closure);
    /// getter for the Points attribute
    Py::List getPoints() const;
    /// setter callback for the Points attribute
    static int staticCallback_setPoints (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Points is read only!
    ///getter callback for the PointIndices attribute
    static PyObject * staticCallback_getPointIndices (PyObject *self, void *closure);
    /// getter for the PointIndices attribute
    Py::Tuple getPointIndices() const;
    /// setter callback for the PointIndices attribute
    static int staticCallback_setPointIndices (PyObject *self, PyObject *value, void *closure);
    // no setter method,  PointIndices is read only!
    ///getter callback for the NeighbourIndices attribute
    static PyObject * staticCallback_getNeighbourIndices (PyObject *self, void *closure);
    /// getter for the NeighbourIndices attribute
    Py::Tuple getNeighbourIndices() const;
    /// setter callback for the NeighbourIndices attribute
    static int staticCallback_setNeighbourIndices (PyObject *self, PyObject *value, void *closure);
    // no setter method,  NeighbourIndices is read only!
    ///getter callback for the Area attribute
    static PyObject * staticCallback_getArea (PyObject *self, void *closure);
    /// getter for the Area attribute
    Py::Float getArea() const;
    /// setter callback for the Area attribute
    static int staticCallback_setArea (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Area is read only!
    ///getter callback for the AspectRatio attribute
    static PyObject * staticCallback_getAspectRatio (PyObject *self, void *closure);
    /// getter for the AspectRatio attribute
    Py::Float getAspectRatio() const;
    /// setter callback for the AspectRatio attribute
    static int staticCallback_setAspectRatio (PyObject *self, PyObject *value, void *closure);
    // no setter method,  AspectRatio is read only!
    ///getter callback for the AspectRatio2 attribute
    static PyObject * staticCallback_getAspectRatio2 (PyObject *self, void *closure);
    /// getter for the AspectRatio2 attribute
    Py::Float getAspectRatio2() const;
    /// setter callback for the AspectRatio2 attribute
    static int staticCallback_setAspectRatio2 (PyObject *self, PyObject *value, void *closure);
    // no setter method,  AspectRatio2 is read only!
    ///getter callback for the Roundness attribute
    static PyObject * staticCallback_getRoundness (PyObject *self, void *closure);
    /// getter for the Roundness attribute
    Py::Float getRoundness() const;
    /// setter callback for the Roundness attribute
    static int staticCallback_setRoundness (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Roundness is read only!
    ///getter callback for the CircumCircle attribute
    static PyObject * staticCallback_getCircumCircle (PyObject *self, void *closure);
    /// getter for the CircumCircle attribute
    Py::Tuple getCircumCircle() const;
    /// setter callback for the CircumCircle attribute
    static int staticCallback_setCircumCircle (PyObject *self, PyObject *value, void *closure);
    // no setter method,  CircumCircle is read only!
    ///getter callback for the InCircle attribute
    static PyObject * staticCallback_getInCircle (PyObject *self, void *closure);
    /// getter for the InCircle attribute
    Py::Tuple getInCircle() const;
    /// setter callback for the InCircle attribute
    static int staticCallback_setInCircle (PyObject *self, PyObject *value, void *closure);
    // no setter method,  InCircle is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    Facet *getFacetPtr() const;

};

}  //namespace Mesh

#endif  // MESH_FACETPY_H


