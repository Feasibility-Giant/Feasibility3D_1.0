
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_BEZIERCURVEPY_H
#define PART_BEZIERCURVEPY_H

#include <Mod/Part/App/BoundedCurvePy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>


namespace Part
{

//===========================================================================
// BezierCurvePy - Python wrapper
//===========================================================================

/** The python export class for GeomBezierCurve
 */
class PartExport BezierCurvePy : public Part::BoundedCurvePy
{
protected:
    ~BezierCurvePy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    BezierCurvePy(GeomBezierCurve *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = GeomBezierCurve*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the isRational() method
    static PyObject * staticCallback_isRational (PyObject *self, PyObject *args);
    /// implementer for the isRational() method
    PyObject*  isRational(PyObject *args);
    /// callback for the isPeriodic() method
    static PyObject * staticCallback_isPeriodic (PyObject *self, PyObject *args);
    /// implementer for the isPeriodic() method
    PyObject*  isPeriodic(PyObject *args);
    /// callback for the isClosed() method
    static PyObject * staticCallback_isClosed (PyObject *self, PyObject *args);
    /// implementer for the isClosed() method
    PyObject*  isClosed(PyObject *args);
    /// callback for the increase() method
    static PyObject * staticCallback_increase (PyObject *self, PyObject *args);
    /// implementer for the increase() method
    PyObject*  increase(PyObject *args);
    /// callback for the insertPoleAfter() method
    static PyObject * staticCallback_insertPoleAfter (PyObject *self, PyObject *args);
    /// implementer for the insertPoleAfter() method
    PyObject*  insertPoleAfter(PyObject *args);
    /// callback for the insertPoleBefore() method
    static PyObject * staticCallback_insertPoleBefore (PyObject *self, PyObject *args);
    /// implementer for the insertPoleBefore() method
    PyObject*  insertPoleBefore(PyObject *args);
    /// callback for the removePole() method
    static PyObject * staticCallback_removePole (PyObject *self, PyObject *args);
    /// implementer for the removePole() method
    PyObject*  removePole(PyObject *args);
    /// callback for the segment() method
    static PyObject * staticCallback_segment (PyObject *self, PyObject *args);
    /// implementer for the segment() method
    PyObject*  segment(PyObject *args);
    /// callback for the setPole() method
    static PyObject * staticCallback_setPole (PyObject *self, PyObject *args);
    /// implementer for the setPole() method
    PyObject*  setPole(PyObject *args);
    /// callback for the getPole() method
    static PyObject * staticCallback_getPole (PyObject *self, PyObject *args);
    /// implementer for the getPole() method
    PyObject*  getPole(PyObject *args);
    /// callback for the getPoles() method
    static PyObject * staticCallback_getPoles (PyObject *self, PyObject *args);
    /// implementer for the getPoles() method
    PyObject*  getPoles(PyObject *args);
    /// callback for the setPoles() method
    static PyObject * staticCallback_setPoles (PyObject *self, PyObject *args);
    /// implementer for the setPoles() method
    PyObject*  setPoles(PyObject *args);
    /// callback for the setWeight() method
    static PyObject * staticCallback_setWeight (PyObject *self, PyObject *args);
    /// implementer for the setWeight() method
    PyObject*  setWeight(PyObject *args);
    /// callback for the getWeight() method
    static PyObject * staticCallback_getWeight (PyObject *self, PyObject *args);
    /// implementer for the getWeight() method
    PyObject*  getWeight(PyObject *args);
    /// callback for the getWeights() method
    static PyObject * staticCallback_getWeights (PyObject *self, PyObject *args);
    /// implementer for the getWeights() method
    PyObject*  getWeights(PyObject *args);
    /// callback for the getResolution() method
    static PyObject * staticCallback_getResolution (PyObject *self, PyObject *args);
    /// implementer for the getResolution() method
    PyObject*  getResolution(PyObject *args);
    /// callback for the interpolate() method
    static PyObject * staticCallback_interpolate (PyObject *self, PyObject *args);
    /// implementer for the interpolate() method
    PyObject*  interpolate(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Degree attribute
    static PyObject * staticCallback_getDegree (PyObject *self, void *closure);
    /// getter for the Degree attribute
    Py::Long getDegree() const;
    /// setter callback for the Degree attribute
    static int staticCallback_setDegree (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Degree is read only!
    ///getter callback for the MaxDegree attribute
    static PyObject * staticCallback_getMaxDegree (PyObject *self, void *closure);
    /// getter for the MaxDegree attribute
    Py::Long getMaxDegree() const;
    /// setter callback for the MaxDegree attribute
    static int staticCallback_setMaxDegree (PyObject *self, PyObject *value, void *closure);
    // no setter method,  MaxDegree is read only!
    ///getter callback for the NbPoles attribute
    static PyObject * staticCallback_getNbPoles (PyObject *self, void *closure);
    /// getter for the NbPoles attribute
    Py::Long getNbPoles() const;
    /// setter callback for the NbPoles attribute
    static int staticCallback_setNbPoles (PyObject *self, PyObject *value, void *closure);
    // no setter method,  NbPoles is read only!
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
    GeomBezierCurve *getGeomBezierCurvePtr() const;

};

}  //namespace Part

#endif  // PART_BEZIERCURVEPY_H

