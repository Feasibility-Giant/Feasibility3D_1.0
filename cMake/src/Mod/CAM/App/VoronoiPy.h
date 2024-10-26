
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PATH_VORONOIPY_H
#define PATH_VORONOIPY_H

#include <Base/BaseClassPy.h>
#include <Mod/CAM/App/Voronoi.h>
#include <string>


namespace Path
{

//===========================================================================
// VoronoiPy - Python wrapper
//===========================================================================

/** The python export class for Voronoi
 */
class PathExport VoronoiPy : public Base::BaseClassPy
{
protected:
    ~VoronoiPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    VoronoiPy(Voronoi *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = Voronoi*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the numCells() method
    static PyObject * staticCallback_numCells (PyObject *self, PyObject *args);
    /// implementer for the numCells() method
    PyObject*  numCells(PyObject *args);
    /// callback for the numEdges() method
    static PyObject * staticCallback_numEdges (PyObject *self, PyObject *args);
    /// implementer for the numEdges() method
    PyObject*  numEdges(PyObject *args);
    /// callback for the numVertices() method
    static PyObject * staticCallback_numVertices (PyObject *self, PyObject *args);
    /// implementer for the numVertices() method
    PyObject*  numVertices(PyObject *args);
    /// callback for the addPoint() method
    static PyObject * staticCallback_addPoint (PyObject *self, PyObject *args);
    /// implementer for the addPoint() method
    PyObject*  addPoint(PyObject *args);
    /// callback for the addSegment() method
    static PyObject * staticCallback_addSegment (PyObject *self, PyObject *args);
    /// implementer for the addSegment() method
    PyObject*  addSegment(PyObject *args);
    /// callback for the construct() method
    static PyObject * staticCallback_construct (PyObject *self, PyObject *args);
    /// implementer for the construct() method
    PyObject*  construct(PyObject *args);
    /// callback for the colorExterior() method
    static PyObject * staticCallback_colorExterior (PyObject *self, PyObject *args);
    /// implementer for the colorExterior() method
    PyObject*  colorExterior(PyObject *args);
    /// callback for the colorTwins() method
    static PyObject * staticCallback_colorTwins (PyObject *self, PyObject *args);
    /// implementer for the colorTwins() method
    PyObject*  colorTwins(PyObject *args);
    /// callback for the colorColinear() method
    static PyObject * staticCallback_colorColinear (PyObject *self, PyObject *args);
    /// implementer for the colorColinear() method
    PyObject*  colorColinear(PyObject *args);
    /// callback for the resetColor() method
    static PyObject * staticCallback_resetColor (PyObject *self, PyObject *args);
    /// implementer for the resetColor() method
    PyObject*  resetColor(PyObject *args);
    /// callback for the getPoints() method
    static PyObject * staticCallback_getPoints (PyObject *self, PyObject *args);
    /// implementer for the getPoints() method
    PyObject*  getPoints(PyObject *args);
    /// callback for the numPoints() method
    static PyObject * staticCallback_numPoints (PyObject *self, PyObject *args);
    /// implementer for the numPoints() method
    PyObject*  numPoints(PyObject *args);
    /// callback for the getSegments() method
    static PyObject * staticCallback_getSegments (PyObject *self, PyObject *args);
    /// implementer for the getSegments() method
    PyObject*  getSegments(PyObject *args);
    /// callback for the numSegments() method
    static PyObject * staticCallback_numSegments (PyObject *self, PyObject *args);
    /// implementer for the numSegments() method
    PyObject*  numSegments(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Cells attribute
    static PyObject * staticCallback_getCells (PyObject *self, void *closure);
    /// getter for the Cells attribute
    Py::List getCells() const;
    /// setter callback for the Cells attribute
    static int staticCallback_setCells (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Cells is read only!
    ///getter callback for the Edges attribute
    static PyObject * staticCallback_getEdges (PyObject *self, void *closure);
    /// getter for the Edges attribute
    Py::List getEdges() const;
    /// setter callback for the Edges attribute
    static int staticCallback_setEdges (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Edges is read only!
    ///getter callback for the Vertices attribute
    static PyObject * staticCallback_getVertices (PyObject *self, void *closure);
    /// getter for the Vertices attribute
    Py::List getVertices() const;
    /// setter callback for the Vertices attribute
    static int staticCallback_setVertices (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Vertices is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    Voronoi *getVoronoiPtr() const;

};

}  //namespace Path

#endif  // PATH_VORONOIPY_H


