
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_BOUNDEDCURVEPY_H
#define PART_BOUNDEDCURVEPY_H

#include <Mod/Part/App/GeometryCurvePy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>


namespace Part
{

//===========================================================================
// BoundedCurvePy - Python wrapper
//===========================================================================

/** The python export class for GeomBoundedCurve
 */
class PartExport BoundedCurvePy : public Part::GeometryCurvePy
{
protected:
    ~BoundedCurvePy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    BoundedCurvePy(GeomBoundedCurve *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = GeomBoundedCurve*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the StartPoint attribute
    static PyObject * staticCallback_getStartPoint (PyObject *self, void *closure);
    /// getter for the StartPoint attribute
    Py::Object getStartPoint() const;
    /// setter callback for the StartPoint attribute
    static int staticCallback_setStartPoint (PyObject *self, PyObject *value, void *closure);
    // no setter method,  StartPoint is read only!
    ///getter callback for the EndPoint attribute
    static PyObject * staticCallback_getEndPoint (PyObject *self, void *closure);
    /// getter for the EndPoint attribute
    Py::Object getEndPoint() const;
    /// setter callback for the EndPoint attribute
    static int staticCallback_setEndPoint (PyObject *self, PyObject *value, void *closure);
    // no setter method,  EndPoint is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    GeomBoundedCurve *getGeomBoundedCurvePtr() const;

};

}  //namespace Part

#endif  // PART_BOUNDEDCURVEPY_H

