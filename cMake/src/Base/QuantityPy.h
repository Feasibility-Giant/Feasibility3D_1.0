
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef BASE_QUANTITYPY_H
#define BASE_QUANTITYPY_H

#include <Base/PyObjectBase.h>
#include <Base/Quantity.h>
#include <string>


namespace Base
{

//===========================================================================
// QuantityPy - Python wrapper
//===========================================================================

/** The python export class for Quantity
 */
class BaseExport QuantityPy : public Base::PyObjectBase
{
protected:
    ~QuantityPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyNumberMethods Number[];
    static PyObject * richCompare(PyObject *v, PyObject *w, int op);
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    QuantityPy(Quantity *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = Quantity*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the toStr() method
    static PyObject * staticCallback_toStr (PyObject *self, PyObject *args);
    /// implementer for the toStr() method
    PyObject*  toStr(PyObject *args);
    /// callback for the getUserPreferred() method
    static PyObject * staticCallback_getUserPreferred (PyObject *self, PyObject *args);
    /// implementer for the getUserPreferred() method
    PyObject*  getUserPreferred(PyObject *args);
    /// callback for the getValueAs() method
    static PyObject * staticCallback_getValueAs (PyObject *self, PyObject *args);
    /// implementer for the getValueAs() method
    PyObject*  getValueAs(PyObject *args);
    /// callback for the __round__() method
    static PyObject * staticCallback___round__ (PyObject *self, PyObject *args);
    /// implementer for the __round__() method
    PyObject*  __round__(PyObject *args);
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
    ///getter callback for the Value attribute
    static PyObject * staticCallback_getValue (PyObject *self, void *closure);
    /// getter for the Value attribute
    Py::Float getValue() const;
    /// setter callback for the Value attribute
    static int staticCallback_setValue (PyObject *self, PyObject *value, void *closure);
    /// setter for the Value attribute
    void setValue(Py::Float arg);
    ///getter callback for the Unit attribute
    static PyObject * staticCallback_getUnit (PyObject *self, void *closure);
    /// getter for the Unit attribute
    Py::Object getUnit() const;
    /// setter callback for the Unit attribute
    static int staticCallback_setUnit (PyObject *self, PyObject *value, void *closure);
    /// setter for the Unit attribute
    void setUnit(Py::Object arg);
    ///getter callback for the UserString attribute
    static PyObject * staticCallback_getUserString (PyObject *self, void *closure);
    /// getter for the UserString attribute
    Py::String getUserString() const;
    /// setter callback for the UserString attribute
    static int staticCallback_setUserString (PyObject *self, PyObject *value, void *closure);
    // no setter method,  UserString is read only!
    ///getter callback for the Format attribute
    static PyObject * staticCallback_getFormat (PyObject *self, void *closure);
    /// getter for the Format attribute
    Py::Dict getFormat() const;
    /// setter callback for the Format attribute
    static int staticCallback_setFormat (PyObject *self, PyObject *value, void *closure);
    /// setter for the Format attribute
    void setFormat(Py::Dict arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    Quantity *getQuantityPtr() const;

};

}  //namespace Base

#endif  // BASE_QUANTITYPY_H

