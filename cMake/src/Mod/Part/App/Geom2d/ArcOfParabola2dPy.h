
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_ARCOFPARABOLA2DPY_H
#define PART_ARCOFPARABOLA2DPY_H

#include <Mod/Part/App/Geom2d/ArcOfConic2dPy.h>
#include <Mod/Part/App/Geometry2d.h>
#include <string>


namespace Part
{

//===========================================================================
// ArcOfParabola2dPy - Python wrapper
//===========================================================================

/** The python export class for Geom2dArcOfParabola
 */
class PartExport ArcOfParabola2dPy : public Part::ArcOfConic2dPy
{
protected:
    ~ArcOfParabola2dPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    ArcOfParabola2dPy(Geom2dArcOfParabola *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = Geom2dArcOfParabola*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Focal attribute
    static PyObject * staticCallback_getFocal (PyObject *self, void *closure);
    /// getter for the Focal attribute
    Py::Float getFocal() const;
    /// setter callback for the Focal attribute
    static int staticCallback_setFocal (PyObject *self, PyObject *value, void *closure);
    /// setter for the Focal attribute
    void setFocal(Py::Float arg);
    ///getter callback for the Parabola attribute
    static PyObject * staticCallback_getParabola (PyObject *self, void *closure);
    /// getter for the Parabola attribute
    Py::Object getParabola() const;
    /// setter callback for the Parabola attribute
    static int staticCallback_setParabola (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Parabola is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    Geom2dArcOfParabola *getGeom2dArcOfParabolaPtr() const;

};

}  //namespace Part

#endif  // PART_ARCOFPARABOLA2DPY_H


