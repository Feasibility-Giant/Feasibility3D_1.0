
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_ARCOFCIRCLE2DPY_H
#define PART_ARCOFCIRCLE2DPY_H

#include <Mod/Part/App/Geom2d/ArcOfConic2dPy.h>
#include <Mod/Part/App/Geometry2d.h>
#include <string>


namespace Part
{

//===========================================================================
// ArcOfCircle2dPy - Python wrapper
//===========================================================================

/** The python export class for Geom2dArcOfCircle
 */
class PartExport ArcOfCircle2dPy : public Part::ArcOfConic2dPy
{
protected:
    ~ArcOfCircle2dPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    ArcOfCircle2dPy(Geom2dArcOfCircle *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = Geom2dArcOfCircle*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Radius attribute
    static PyObject * staticCallback_getRadius (PyObject *self, void *closure);
    /// getter for the Radius attribute
    Py::Float getRadius() const;
    /// setter callback for the Radius attribute
    static int staticCallback_setRadius (PyObject *self, PyObject *value, void *closure);
    /// setter for the Radius attribute
    void setRadius(Py::Float arg);
    ///getter callback for the Circle attribute
    static PyObject * staticCallback_getCircle (PyObject *self, void *closure);
    /// getter for the Circle attribute
    Py::Object getCircle() const;
    /// setter callback for the Circle attribute
    static int staticCallback_setCircle (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Circle is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    Geom2dArcOfCircle *getGeom2dArcOfCirclePtr() const;

};

}  //namespace Part

#endif  // PART_ARCOFCIRCLE2DPY_H


