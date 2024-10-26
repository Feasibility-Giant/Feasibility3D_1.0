
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_SHAPEFIX_FIXSMALLSOLIDPY_H
#define PART_SHAPEFIX_FIXSMALLSOLIDPY_H

#include <Mod/Part/App/ShapeFix/ShapeFix_RootPy.h>
#include <ShapeFix_FixSmallSolid.hxx>
#include <string>


namespace Part
{

//===========================================================================
// ShapeFix_FixSmallSolidPy - Python wrapper
//===========================================================================

/** The python export class for ShapeFix_FixSmallSolid
 */
class PartExport ShapeFix_FixSmallSolidPy : public Part::ShapeFix_RootPy
{
protected:
    ~ShapeFix_FixSmallSolidPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    ShapeFix_FixSmallSolidPy(ShapeFix_FixSmallSolid *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = ShapeFix_FixSmallSolid*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the setFixMode() method
    static PyObject * staticCallback_setFixMode (PyObject *self, PyObject *args);
    /// implementer for the setFixMode() method
    PyObject*  setFixMode(PyObject *args);
    /// callback for the setVolumeThreshold() method
    static PyObject * staticCallback_setVolumeThreshold (PyObject *self, PyObject *args);
    /// implementer for the setVolumeThreshold() method
    PyObject*  setVolumeThreshold(PyObject *args);
    /// callback for the setWidthFactorThreshold() method
    static PyObject * staticCallback_setWidthFactorThreshold (PyObject *self, PyObject *args);
    /// implementer for the setWidthFactorThreshold() method
    PyObject*  setWidthFactorThreshold(PyObject *args);
    /// callback for the remove() method
    static PyObject * staticCallback_remove (PyObject *self, PyObject *args);
    /// implementer for the remove() method
    PyObject*  remove(PyObject *args);
    /// callback for the merge() method
    static PyObject * staticCallback_merge (PyObject *self, PyObject *args);
    /// implementer for the merge() method
    PyObject*  merge(PyObject *args);
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
    ShapeFix_FixSmallSolid *getShapeFix_FixSmallSolidPtr() const;

};

}  //namespace Part

#endif  // PART_SHAPEFIX_FIXSMALLSOLIDPY_H


