
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef BASE_ROTATIONPY_H
#define BASE_ROTATIONPY_H

#include <Base/PyObjectBase.h>
#include <Base/Rotation.h>
#include <string>


namespace Base
{

//===========================================================================
// RotationPy - Python wrapper
//===========================================================================

/** The python export class for Rotation
 */
class BaseExport RotationPy : public Base::PyObjectBase
{
protected:
    ~RotationPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyNumberMethods Number[];
    static PyObject * richCompare(PyObject *v, PyObject *w, int op);
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    RotationPy(Rotation *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = Rotation*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the invert() method
    static PyObject * staticCallback_invert (PyObject *self, PyObject *args);
    /// implementer for the invert() method
    PyObject*  invert(PyObject *args);
    /// callback for the inverted() method
    static PyObject * staticCallback_inverted (PyObject *self, PyObject *args);
    /// implementer for the inverted() method
    PyObject*  inverted(PyObject *args);
    /// callback for the isSame() method
    static PyObject * staticCallback_isSame (PyObject *self, PyObject *args);
    /// implementer for the isSame() method
    PyObject*  isSame(PyObject *args);
    /// callback for the multiply() method
    static PyObject * staticCallback_multiply (PyObject *self, PyObject *args);
    /// implementer for the multiply() method
    PyObject*  multiply(PyObject *args);
    /// callback for the multVec() method
    static PyObject * staticCallback_multVec (PyObject *self, PyObject *args);
    /// implementer for the multVec() method
    PyObject*  multVec(PyObject *args);
    /// callback for the slerp() method
    static PyObject * staticCallback_slerp (PyObject *self, PyObject *args);
    /// implementer for the slerp() method
    PyObject*  slerp(PyObject *args);
    /// callback for the setYawPitchRoll() method
    static PyObject * staticCallback_setYawPitchRoll (PyObject *self, PyObject *args);
    /// implementer for the setYawPitchRoll() method
    PyObject*  setYawPitchRoll(PyObject *args);
    /// callback for the getYawPitchRoll() method
    static PyObject * staticCallback_getYawPitchRoll (PyObject *self, PyObject *args);
    /// implementer for the getYawPitchRoll() method
    PyObject*  getYawPitchRoll(PyObject *args);
    /// callback for the setEulerAngles() method
    static PyObject * staticCallback_setEulerAngles (PyObject *self, PyObject *args);
    /// implementer for the setEulerAngles() method
    PyObject*  setEulerAngles(PyObject *args);
    /// callback for the toEulerAngles() method
    static PyObject * staticCallback_toEulerAngles (PyObject *self, PyObject *args);
    /// implementer for the toEulerAngles() method
    PyObject*  toEulerAngles(PyObject *args);
    /// callback for the toMatrix() method
    static PyObject * staticCallback_toMatrix (PyObject *self, PyObject *args);
    /// implementer for the toMatrix() method
    PyObject*  toMatrix(PyObject *args);
    /// callback for the isNull() method
    static PyObject * staticCallback_isNull (PyObject *self, PyObject *args);
    /// implementer for the isNull() method
    PyObject*  isNull(PyObject *args);
    /// callback for the isIdentity() method
    static PyObject * staticCallback_isIdentity (PyObject *self, PyObject *args);
    /// implementer for the isIdentity() method
    PyObject*  isIdentity(PyObject *args);
    //@}

    /** @name callbacks and implementers for the python object number protocol */
    //@{
    /// callback for the number_add_handler
    static PyObject * number_add_handler (PyObject *self, PyObject *other);
    /// callback for the number_subtract_handler
    static PyObject * number_subtract_handler (PyObject *self, PyObject *other);
    /// callback for the number_multiply_handler
    static PyObject * number_multiply_handler (PyObject *self, PyObject *other);
    /// callback for the number_divide_handler
    static PyObject * number_divide_handler (PyObject *self, PyObject *other);
    /// callback for the number_remainder_handler
    static PyObject * number_remainder_handler (PyObject *self, PyObject *other);
    /// callback for the number_divmod_handler
    static PyObject * number_divmod_handler (PyObject *self, PyObject *other);
    /// callback for the number_power_handler
    static PyObject * number_power_handler (PyObject *self, PyObject *other, PyObject *modulo);
    /// callback for the number_negative_handler
    static PyObject * number_negative_handler (PyObject *self);
    /// callback for the number_positive_handler
    static PyObject * number_positive_handler (PyObject *self);
    /// callback for the number_absolute_handler
    static PyObject * number_absolute_handler (PyObject *self);
    /// callback for the number_nonzero_handler
    static int number_nonzero_handler (PyObject *self);
    /// callback for the number_invert_handler
    static PyObject * number_invert_handler (PyObject *self);
    /// callback for the number_lshift_handler
    static PyObject * number_lshift_handler (PyObject *self, PyObject *other);
    /// callback for the number_rshift_handler
    static PyObject * number_rshift_handler (PyObject *self, PyObject *other);
    /// callback for the number_and_handler
    static PyObject * number_and_handler (PyObject *self, PyObject *other);
    /// callback for the number_xor_handler
    static PyObject * number_xor_handler (PyObject *self, PyObject *other);
    /// callback for the number_or_handler
    static PyObject * number_or_handler (PyObject *self, PyObject *other);
    /// callback for the number_int_handler
    static PyObject * number_int_handler (PyObject *self);
    /// callback for the number_float_handler
    static PyObject * number_float_handler (PyObject *self);
    //@}

    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Q attribute
    static PyObject * staticCallback_getQ (PyObject *self, void *closure);
    /// getter for the Q attribute
    Py::Tuple getQ() const;
    /// setter callback for the Q attribute
    static int staticCallback_setQ (PyObject *self, PyObject *value, void *closure);
    /// setter for the Q attribute
    void setQ(Py::Tuple arg);
    ///getter callback for the Axis attribute
    static PyObject * staticCallback_getAxis (PyObject *self, void *closure);
    /// getter for the Axis attribute
    Py::Object getAxis() const;
    /// setter callback for the Axis attribute
    static int staticCallback_setAxis (PyObject *self, PyObject *value, void *closure);
    /// setter for the Axis attribute
    void setAxis(Py::Object arg);
    ///getter callback for the RawAxis attribute
    static PyObject * staticCallback_getRawAxis (PyObject *self, void *closure);
    /// getter for the RawAxis attribute
    Py::Object getRawAxis() const;
    /// setter callback for the RawAxis attribute
    static int staticCallback_setRawAxis (PyObject *self, PyObject *value, void *closure);
    // no setter method,  RawAxis is read only!
    ///getter callback for the Angle attribute
    static PyObject * staticCallback_getAngle (PyObject *self, void *closure);
    /// getter for the Angle attribute
    Py::Float getAngle() const;
    /// setter callback for the Angle attribute
    static int staticCallback_setAngle (PyObject *self, PyObject *value, void *closure);
    /// setter for the Angle attribute
    void setAngle(Py::Float arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    Rotation *getRotationPtr() const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

            public:
            RotationPy(const Rotation & mat, PyTypeObject *T = &Type)
            :PyObjectBase(new Rotation(mat),T){}
            Rotation value() const
            { return *(getRotationPtr()); }
        
    //@}
};

}  //namespace Base

#endif  // BASE_ROTATIONPY_H


