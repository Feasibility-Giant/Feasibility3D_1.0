
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef TECHDRAW_DRAWVIEWPY_H
#define TECHDRAW_DRAWVIEWPY_H

#include <App/DocumentObjectPy.h>
#include <Mod/TechDraw/App/DrawView.h>
#include <string>


namespace TechDraw
{

//===========================================================================
// DrawViewPy - Python wrapper
//===========================================================================

/** The python export class for DrawView
 */
class TechDrawExport DrawViewPy : public App::DocumentObjectPy
{
protected:
    ~DrawViewPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    DrawViewPy(DrawView *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = DrawView*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the translateLabel() method
    static PyObject * staticCallback_translateLabel (PyObject *self, PyObject *args);
    /// implementer for the translateLabel() method
    PyObject*  translateLabel(PyObject *args);
    /// callback for the getScale() method
    static PyObject * staticCallback_getScale (PyObject *self, PyObject *args);
    /// implementer for the getScale() method
    PyObject*  getScale(PyObject *args);
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
    DrawView *getDrawViewPtr() const;

};

}  //namespace TechDraw

#endif  // TECHDRAW_DRAWVIEWPY_H

