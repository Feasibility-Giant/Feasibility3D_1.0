
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PATH_AREAPY_H
#define PATH_AREAPY_H

#include <Base/BaseClassPy.h>
#include <Mod/CAM/App/Area.h>
#include <string>


namespace Path
{

//===========================================================================
// AreaPy - Python wrapper
//===========================================================================

/** The python export class for Area
 */
class PathExport AreaPy : public Base::BaseClassPy
{
protected:
    ~AreaPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    AreaPy(Area *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = Area*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the add() method
    static PyObject * staticCallback_add (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the add() method
    PyObject*  add(PyObject *args, PyObject *kwd);
    /// callback for the setPlane() method
    static PyObject * staticCallback_setPlane (PyObject *self, PyObject *args);
    /// implementer for the setPlane() method
    PyObject*  setPlane(PyObject *args);
    /// callback for the getShape() method
    static PyObject * staticCallback_getShape (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the getShape() method
    PyObject*  getShape(PyObject *args, PyObject *kwd);
    /// callback for the makeOffset() method
    static PyObject * staticCallback_makeOffset (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the makeOffset() method
    PyObject*  makeOffset(PyObject *args, PyObject *kwd);
    /// callback for the makePocket() method
    static PyObject * staticCallback_makePocket (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the makePocket() method
    PyObject*  makePocket(PyObject *args, PyObject *kwd);
    /// callback for the makeSections() method
    static PyObject * staticCallback_makeSections (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the makeSections() method
    PyObject*  makeSections(PyObject *args, PyObject *kwd);
    /// callback for the getClearedArea() method
    static PyObject * staticCallback_getClearedArea (PyObject *self, PyObject *args);
    /// implementer for the getClearedArea() method
    PyObject*  getClearedArea(PyObject *args);
    /// callback for the getRestArea() method
    static PyObject * staticCallback_getRestArea (PyObject *self, PyObject *args);
    /// implementer for the getRestArea() method
    PyObject*  getRestArea(PyObject *args);
    /// callback for the toTopoShape() method
    static PyObject * staticCallback_toTopoShape (PyObject *self, PyObject *args);
    /// implementer for the toTopoShape() method
    PyObject*  toTopoShape(PyObject *args);
    /// callback for the setParams() method
    static PyObject * staticCallback_setParams (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the setParams() method
    PyObject*  setParams(PyObject *args, PyObject *kwd);
    /// callback for the setDefaultParams() method
    static PyObject * staticCallback_setDefaultParams (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the setDefaultParams() method
    PyObject*  setDefaultParams(PyObject *args, PyObject *kwd);
    /// callback for the getDefaultParams() method
    static PyObject * staticCallback_getDefaultParams (PyObject *self, PyObject *args);
    /// implementer for the getDefaultParams() method
    PyObject*  getDefaultParams(PyObject *args);
    /// callback for the getParamsDesc() method
    static PyObject * staticCallback_getParamsDesc (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the getParamsDesc() method
    PyObject*  getParamsDesc(PyObject *args, PyObject *kwd);
    /// callback for the getParams() method
    static PyObject * staticCallback_getParams (PyObject *self, PyObject *args);
    /// implementer for the getParams() method
    PyObject*  getParams(PyObject *args);
    /// callback for the abort() method
    static PyObject * staticCallback_abort (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the abort() method
    PyObject*  abort(PyObject *args, PyObject *kwd);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Sections attribute
    static PyObject * staticCallback_getSections (PyObject *self, void *closure);
    /// getter for the Sections attribute
    Py::List getSections() const;
    /// setter callback for the Sections attribute
    static int staticCallback_setSections (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Sections is read only!
    ///getter callback for the Workplane attribute
    static PyObject * staticCallback_getWorkplane (PyObject *self, void *closure);
    /// getter for the Workplane attribute
    Py::Object getWorkplane() const;
    /// setter callback for the Workplane attribute
    static int staticCallback_setWorkplane (PyObject *self, PyObject *value, void *closure);
    /// setter for the Workplane attribute
    void setWorkplane(Py::Object arg);
    ///getter callback for the Shapes attribute
    static PyObject * staticCallback_getShapes (PyObject *self, void *closure);
    /// getter for the Shapes attribute
    Py::List getShapes() const;
    /// setter callback for the Shapes attribute
    static int staticCallback_setShapes (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Shapes is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    Area *getAreaPtr() const;

};

}  //namespace Path

#endif  // PATH_AREAPY_H


