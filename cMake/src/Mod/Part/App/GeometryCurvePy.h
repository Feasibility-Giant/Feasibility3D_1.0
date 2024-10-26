
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PART_GEOMETRYCURVEPY_H
#define PART_GEOMETRYCURVEPY_H

#include <Mod/Part/App/GeometryPy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>


namespace Part
{

//===========================================================================
// GeometryCurvePy - Python wrapper
//===========================================================================

/** The python export class for GeomCurve
 */
class PartExport GeometryCurvePy : public Part::GeometryPy
{
protected:
    ~GeometryCurvePy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    GeometryCurvePy(GeomCurve *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = GeomCurve*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the toShape() method
    static PyObject * staticCallback_toShape (PyObject *self, PyObject *args);
    /// implementer for the toShape() method
    PyObject*  toShape(PyObject *args);
    /// callback for the discretize() method
    static PyObject * staticCallback_discretize (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the discretize() method
    PyObject*  discretize(PyObject *args, PyObject *kwd);
    /// callback for the getD0() method
    static PyObject * staticCallback_getD0 (PyObject *self, PyObject *args);
    /// implementer for the getD0() method
    PyObject*  getD0(PyObject *args);
    /// callback for the getD1() method
    static PyObject * staticCallback_getD1 (PyObject *self, PyObject *args);
    /// implementer for the getD1() method
    PyObject*  getD1(PyObject *args);
    /// callback for the getD2() method
    static PyObject * staticCallback_getD2 (PyObject *self, PyObject *args);
    /// implementer for the getD2() method
    PyObject*  getD2(PyObject *args);
    /// callback for the getD3() method
    static PyObject * staticCallback_getD3 (PyObject *self, PyObject *args);
    /// implementer for the getD3() method
    PyObject*  getD3(PyObject *args);
    /// callback for the getDN() method
    static PyObject * staticCallback_getDN (PyObject *self, PyObject *args);
    /// implementer for the getDN() method
    PyObject*  getDN(PyObject *args);
    /// callback for the length() method
    static PyObject * staticCallback_length (PyObject *self, PyObject *args);
    /// implementer for the length() method
    PyObject*  length(PyObject *args);
    /// callback for the parameterAtDistance() method
    static PyObject * staticCallback_parameterAtDistance (PyObject *self, PyObject *args);
    /// implementer for the parameterAtDistance() method
    PyObject*  parameterAtDistance(PyObject *args);
    /// callback for the value() method
    static PyObject * staticCallback_value (PyObject *self, PyObject *args);
    /// implementer for the value() method
    PyObject*  value(PyObject *args);
    /// callback for the tangent() method
    static PyObject * staticCallback_tangent (PyObject *self, PyObject *args);
    /// implementer for the tangent() method
    PyObject*  tangent(PyObject *args);
    /// callback for the makeRuledSurface() method
    static PyObject * staticCallback_makeRuledSurface (PyObject *self, PyObject *args);
    /// implementer for the makeRuledSurface() method
    PyObject*  makeRuledSurface(PyObject *args);
    /// callback for the intersect2d() method
    static PyObject * staticCallback_intersect2d (PyObject *self, PyObject *args);
    /// implementer for the intersect2d() method
    PyObject*  intersect2d(PyObject *args);
    /// callback for the continuityWith() method
    static PyObject * staticCallback_continuityWith (PyObject *self, PyObject *args);
    /// implementer for the continuityWith() method
    PyObject*  continuityWith(PyObject *args);
    /// callback for the parameter() method
    static PyObject * staticCallback_parameter (PyObject *self, PyObject *args);
    /// implementer for the parameter() method
    PyObject*  parameter(PyObject *args);
    /// callback for the normal() method
    static PyObject * staticCallback_normal (PyObject *self, PyObject *args);
    /// implementer for the normal() method
    PyObject*  normal(PyObject *args);
    /// callback for the projectPoint() method
    static PyObject * staticCallback_projectPoint (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the projectPoint() method
    PyObject*  projectPoint(PyObject *args, PyObject *kwd);
    /// callback for the curvature() method
    static PyObject * staticCallback_curvature (PyObject *self, PyObject *args);
    /// implementer for the curvature() method
    PyObject*  curvature(PyObject *args);
    /// callback for the centerOfCurvature() method
    static PyObject * staticCallback_centerOfCurvature (PyObject *self, PyObject *args);
    /// implementer for the centerOfCurvature() method
    PyObject*  centerOfCurvature(PyObject *args);
    /// callback for the intersect() method
    static PyObject * staticCallback_intersect (PyObject *self, PyObject *args);
    /// implementer for the intersect() method
    PyObject*  intersect(PyObject *args);
    /// callback for the intersectCS() method
    static PyObject * staticCallback_intersectCS (PyObject *self, PyObject *args);
    /// implementer for the intersectCS() method
    PyObject*  intersectCS(PyObject *args);
    /// callback for the intersectCC() method
    static PyObject * staticCallback_intersectCC (PyObject *self, PyObject *args);
    /// implementer for the intersectCC() method
    PyObject*  intersectCC(PyObject *args);
    /// callback for the toBSpline() method
    static PyObject * staticCallback_toBSpline (PyObject *self, PyObject *args);
    /// implementer for the toBSpline() method
    PyObject*  toBSpline(PyObject *args);
    /// callback for the toNurbs() method
    static PyObject * staticCallback_toNurbs (PyObject *self, PyObject *args);
    /// implementer for the toNurbs() method
    PyObject*  toNurbs(PyObject *args);
    /// callback for the trim() method
    static PyObject * staticCallback_trim (PyObject *self, PyObject *args);
    /// implementer for the trim() method
    PyObject*  trim(PyObject *args);
    /// callback for the approximateBSpline() method
    static PyObject * staticCallback_approximateBSpline (PyObject *self, PyObject *args);
    /// implementer for the approximateBSpline() method
    PyObject*  approximateBSpline(PyObject *args);
    /// callback for the reverse() method
    static PyObject * staticCallback_reverse (PyObject *self, PyObject *args);
    /// implementer for the reverse() method
    PyObject*  reverse(PyObject *args);
    /// callback for the reversedParameter() method
    static PyObject * staticCallback_reversedParameter (PyObject *self, PyObject *args);
    /// implementer for the reversedParameter() method
    PyObject*  reversedParameter(PyObject *args);
    /// callback for the isPeriodic() method
    static PyObject * staticCallback_isPeriodic (PyObject *self, PyObject *args);
    /// implementer for the isPeriodic() method
    PyObject*  isPeriodic(PyObject *args);
    /// callback for the period() method
    static PyObject * staticCallback_period (PyObject *self, PyObject *args);
    /// implementer for the period() method
    PyObject*  period(PyObject *args);
    /// callback for the isClosed() method
    static PyObject * staticCallback_isClosed (PyObject *self, PyObject *args);
    /// implementer for the isClosed() method
    PyObject*  isClosed(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Continuity attribute
    static PyObject * staticCallback_getContinuity (PyObject *self, void *closure);
    /// getter for the Continuity attribute
    Py::String getContinuity() const;
    /// setter callback for the Continuity attribute
    static int staticCallback_setContinuity (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Continuity is read only!
    ///getter callback for the FirstParameter attribute
    static PyObject * staticCallback_getFirstParameter (PyObject *self, void *closure);
    /// getter for the FirstParameter attribute
    Py::Float getFirstParameter() const;
    /// setter callback for the FirstParameter attribute
    static int staticCallback_setFirstParameter (PyObject *self, PyObject *value, void *closure);
    // no setter method,  FirstParameter is read only!
    ///getter callback for the LastParameter attribute
    static PyObject * staticCallback_getLastParameter (PyObject *self, void *closure);
    /// getter for the LastParameter attribute
    Py::Float getLastParameter() const;
    /// setter callback for the LastParameter attribute
    static int staticCallback_setLastParameter (PyObject *self, PyObject *value, void *closure);
    // no setter method,  LastParameter is read only!
    ///getter callback for the Rotation attribute
    static PyObject * staticCallback_getRotation (PyObject *self, void *closure);
    /// getter for the Rotation attribute
    Py::Object getRotation() const;
    /// setter callback for the Rotation attribute
    static int staticCallback_setRotation (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Rotation is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    GeomCurve *getGeomCurvePtr() const;

};

}  //namespace Part

#endif  // PART_GEOMETRYCURVEPY_H


