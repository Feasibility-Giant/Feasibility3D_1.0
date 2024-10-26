
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef TECHDRAW_COSMETICVERTEXPY_H
#define TECHDRAW_COSMETICVERTEXPY_H

#include <Base/PyObjectBase.h>
#include <Mod/TechDraw/App/Cosmetic.h>
#include <string>


namespace TechDraw
{

//===========================================================================
// CosmeticVertexPy - Python wrapper
//===========================================================================

/** The python export class for CosmeticVertex
 */
class TechDrawExport CosmeticVertexPy : public Base::PyObjectBase
{
protected:
    ~CosmeticVertexPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    CosmeticVertexPy(CosmeticVertex *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = CosmeticVertex*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the clone() method
    static PyObject * staticCallback_clone (PyObject *self, PyObject *args);
    /// implementer for the clone() method
    PyObject*  clone(PyObject *args);
    /// callback for the copy() method
    static PyObject * staticCallback_copy (PyObject *self, PyObject *args);
    /// implementer for the copy() method
    PyObject*  copy(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Tag attribute
    static PyObject * staticCallback_getTag (PyObject *self, void *closure);
    /// getter for the Tag attribute
    Py::String getTag() const;
    /// setter callback for the Tag attribute
    static int staticCallback_setTag (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Tag is read only!
    ///getter callback for the Point attribute
    static PyObject * staticCallback_getPoint (PyObject *self, void *closure);
    /// getter for the Point attribute
    Py::Object getPoint() const;
    /// setter callback for the Point attribute
    static int staticCallback_setPoint (PyObject *self, PyObject *value, void *closure);
    /// setter for the Point attribute
    void setPoint(Py::Object arg);
    ///getter callback for the Show attribute
    static PyObject * staticCallback_getShow (PyObject *self, void *closure);
    /// getter for the Show attribute
    Py::Boolean getShow() const;
    /// setter callback for the Show attribute
    static int staticCallback_setShow (PyObject *self, PyObject *value, void *closure);
    /// setter for the Show attribute
    void setShow(Py::Boolean arg);
    ///getter callback for the Color attribute
    static PyObject * staticCallback_getColor (PyObject *self, void *closure);
    /// getter for the Color attribute
    Py::Object getColor() const;
    /// setter callback for the Color attribute
    static int staticCallback_setColor (PyObject *self, PyObject *value, void *closure);
    /// setter for the Color attribute
    void setColor(Py::Object arg);
    ///getter callback for the Size attribute
    static PyObject * staticCallback_getSize (PyObject *self, void *closure);
    /// getter for the Size attribute
    Py::Object getSize() const;
    /// setter callback for the Size attribute
    static int staticCallback_setSize (PyObject *self, PyObject *value, void *closure);
    /// setter for the Size attribute
    void setSize(Py::Object arg);
    ///getter callback for the Style attribute
    static PyObject * staticCallback_getStyle (PyObject *self, void *closure);
    /// getter for the Style attribute
    Py::Object getStyle() const;
    /// setter callback for the Style attribute
    static int staticCallback_setStyle (PyObject *self, PyObject *value, void *closure);
    /// setter for the Style attribute
    void setStyle(Py::Object arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    CosmeticVertex *getCosmeticVertexPtr() const;

};

}  //namespace TechDraw

#endif  // TECHDRAW_COSMETICVERTEXPY_H


