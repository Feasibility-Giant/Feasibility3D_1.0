
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_CONICPY_H
#define PART_CONICPY_H

#include <Mod/Part/App/GeometryCurvePy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>


namespace Part
{

//===========================================================================
// ConicPy - Python wrapper
//===========================================================================

/** The python export class for GeomConic
 */
class PartExport ConicPy : public Part::GeometryCurvePy
{
protected:
    ~ConicPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    ConicPy(GeomConic *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = GeomConic*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Location attribute
    static PyObject * staticCallback_getLocation (PyObject *self, void *closure);
    /// getter for the Location attribute
    Py::Object getLocation() const;
    /// setter callback for the Location attribute
    static int staticCallback_setLocation (PyObject *self, PyObject *value, void *closure);
    /// setter for the Location attribute
    void setLocation(Py::Object arg);
    ///getter callback for the Center attribute
    static PyObject * staticCallback_getCenter (PyObject *self, void *closure);
    /// getter for the Center attribute
    Py::Object getCenter() const;
    /// setter callback for the Center attribute
    static int staticCallback_setCenter (PyObject *self, PyObject *value, void *closure);
    /// setter for the Center attribute
    void setCenter(Py::Object arg);
    ///getter callback for the Eccentricity attribute
    static PyObject * staticCallback_getEccentricity (PyObject *self, void *closure);
    /// getter for the Eccentricity attribute
    Py::Float getEccentricity() const;
    /// setter callback for the Eccentricity attribute
    static int staticCallback_setEccentricity (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Eccentricity is read only!
    ///getter callback for the AngleXU attribute
    static PyObject * staticCallback_getAngleXU (PyObject *self, void *closure);
    /// getter for the AngleXU attribute
    Py::Float getAngleXU() const;
    /// setter callback for the AngleXU attribute
    static int staticCallback_setAngleXU (PyObject *self, PyObject *value, void *closure);
    /// setter for the AngleXU attribute
    void setAngleXU(Py::Float arg);
    ///getter callback for the Axis attribute
    static PyObject * staticCallback_getAxis (PyObject *self, void *closure);
    /// getter for the Axis attribute
    Py::Object getAxis() const;
    /// setter callback for the Axis attribute
    static int staticCallback_setAxis (PyObject *self, PyObject *value, void *closure);
    /// setter for the Axis attribute
    void setAxis(Py::Object arg);
    ///getter callback for the XAxis attribute
    static PyObject * staticCallback_getXAxis (PyObject *self, void *closure);
    /// getter for the XAxis attribute
    Py::Object getXAxis() const;
    /// setter callback for the XAxis attribute
    static int staticCallback_setXAxis (PyObject *self, PyObject *value, void *closure);
    /// setter for the XAxis attribute
    void setXAxis(Py::Object arg);
    ///getter callback for the YAxis attribute
    static PyObject * staticCallback_getYAxis (PyObject *self, void *closure);
    /// getter for the YAxis attribute
    Py::Object getYAxis() const;
    /// setter callback for the YAxis attribute
    static int staticCallback_setYAxis (PyObject *self, PyObject *value, void *closure);
    /// setter for the YAxis attribute
    void setYAxis(Py::Object arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    GeomConic *getGeomConicPtr() const;

};

}  //namespace Part

#endif  // PART_CONICPY_H

