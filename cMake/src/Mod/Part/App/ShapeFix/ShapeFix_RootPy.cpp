
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ShapeFix_RootPyImp.cpp! It's not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

#if defined(__clang__)
# pragma clang diagnostic push
# pragma clang diagnostic ignored "-Wdeprecated-declarations"
#endif

using Base::streq;
using namespace Part;

/// Type structure of ShapeFix_RootPy
PyTypeObject ShapeFix_RootPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.ShapeFix.Root",     /*tp_name*/
    sizeof(ShapeFix_RootPy),                       /*tp_basicsize*/
    0,                                                /*tp_itemsize*/
    /* methods */
    PyDestructor,                                     /*tp_dealloc*/
#if PY_VERSION_HEX >= 0x03080000
    0,                                                /*tp_vectorcall_offset*/
#else
    nullptr,                                          /*tp_print*/
#endif
    nullptr,                                          /*tp_getattr*/
    nullptr,                                          /*tp_setattr*/
    nullptr,                                          /*tp_compare*/
    __repr,                                           /*tp_repr*/
    nullptr,                                          /*tp_as_number*/
    nullptr,                                          /*tp_as_sequence*/
    nullptr,                                          /*tp_as_mapping*/
    nullptr,                                          /*tp_hash*/
    nullptr,                                          /*tp_call */
    nullptr,                                          /*tp_str  */
    __getattro,                                       /*tp_getattro*/
    __setattro,                                       /*tp_setattro*/
    /* --- Functions to access object as input/output buffer ---------*/
    nullptr,                                          /* tp_as_buffer */
    /* --- Flags to define presence of optional/expanded features */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT,        /*tp_flags */
    "Root class for fixing operations",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Part::ShapeFix_RootPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Part::ShapeFix_RootPy::GetterSetter,                     /*tp_getset */
    &Base::PyObjectBase::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Part::ShapeFix_RootPy::PyMake,/*tp_new */
    nullptr,                                          /*tp_free   Low-level free-memory routine */
    nullptr,                                          /*tp_is_gc  For PyObject_IS_GC */
    nullptr,                                          /*tp_bases */
    nullptr,                                          /*tp_mro    method resolution order */
    nullptr,                                          /*tp_cache */
    nullptr,                                          /*tp_subclasses */
    nullptr,                                          /*tp_weaklist */
    nullptr,                                          /*tp_del */
    0,                                                /*tp_version_tag */
    nullptr                                           /*tp_finalize */
#if PY_VERSION_HEX >= 0x03090000
    ,nullptr                                          /*tp_vectorcall */
#if PY_VERSION_HEX >= 0x030c0000
    ,0                                                /*tp_watched */
#endif
#elif PY_VERSION_HEX >= 0x03080000
    ,nullptr                                          /*tp_vectorcall */
    /* bpo-37250: kept for backwards compatibility in CPython 3.8 only */
    ,nullptr                                          /*tp_print */
#endif
};

/// Methods structure of ShapeFix_RootPy
PyMethodDef ShapeFix_RootPy::Methods[] = {
    {"limitTolerance",
        reinterpret_cast<PyCFunction>( staticCallback_limitTolerance ),
        METH_VARARGS,
        "Returns tolerance limited by [MinTolerance,MaxTolerance]"
    },
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of ShapeFix_RootPy
PyGetSetDef ShapeFix_RootPy::GetterSetter[] = {
    {"Precision",
        (getter) staticCallback_getPrecision,
        (setter) staticCallback_setPrecision,
        "Basic precision value",
        nullptr
    },
    {"MinTolerance",
        (getter) staticCallback_getMinTolerance,
        (setter) staticCallback_setMinTolerance,
        "Minimal allowed tolerance",
        nullptr
    },
    {"MaxTolerance",
        (getter) staticCallback_getMaxTolerance,
        (setter) staticCallback_setMaxTolerance,
        "Maximal allowed tolerance",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// limitTolerance() callback and implementer
// PyObject*  ShapeFix_RootPy::limitTolerance(PyObject *args){};
// has to be implemented in ShapeFix_RootPyImp.cpp
PyObject * ShapeFix_RootPy::staticCallback_limitTolerance (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'limitTolerance' of 'Part.ShapeFix_Root' object needs an argument");
        return nullptr;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }


    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<ShapeFix_RootPy*>(self)->limitTolerance(args);
        return ret;
    } // Please sync the following catch implementation with PY_CATCH
    catch(Base::Exception &e)
    {
        auto pye = e.getPyExceptionType();
        if(!pye)
            pye = Base::PyExc_FC_GeneralError;
        PyErr_SetObject(pye, e.getPyObject());
        return nullptr;
    }
    catch(const std::exception &e)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, e.what());
        return nullptr;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return nullptr;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS
    catch(...)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown C++ exception");
        return nullptr;
    }
#endif
}

// Precision() callback and implementer
// PyObject*  ShapeFix_RootPy::Precision(PyObject *args){};
// has to be implemented in ShapeFix_RootPyImp.cpp
PyObject * ShapeFix_RootPy::staticCallback_getPrecision (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ShapeFix_RootPy*>(self)->getPrecision());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Precision' of object 'ShapeFix_Root'");
        return nullptr;
    }
}

int ShapeFix_RootPy::staticCallback_setPrecision (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ShapeFix_RootPy*>(self)->setPrecision(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Precision' of object 'ShapeFix_Root'");
        return -1;
    }
}

// MinTolerance() callback and implementer
// PyObject*  ShapeFix_RootPy::MinTolerance(PyObject *args){};
// has to be implemented in ShapeFix_RootPyImp.cpp
PyObject * ShapeFix_RootPy::staticCallback_getMinTolerance (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ShapeFix_RootPy*>(self)->getMinTolerance());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'MinTolerance' of object 'ShapeFix_Root'");
        return nullptr;
    }
}

int ShapeFix_RootPy::staticCallback_setMinTolerance (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ShapeFix_RootPy*>(self)->setMinTolerance(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'MinTolerance' of object 'ShapeFix_Root'");
        return -1;
    }
}

// MaxTolerance() callback and implementer
// PyObject*  ShapeFix_RootPy::MaxTolerance(PyObject *args){};
// has to be implemented in ShapeFix_RootPyImp.cpp
PyObject * ShapeFix_RootPy::staticCallback_getMaxTolerance (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ShapeFix_RootPy*>(self)->getMaxTolerance());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'MaxTolerance' of object 'ShapeFix_Root'");
        return nullptr;
    }
}

int ShapeFix_RootPy::staticCallback_setMaxTolerance (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ShapeFix_RootPy*>(self)->setMaxTolerance(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'MaxTolerance' of object 'ShapeFix_Root'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ShapeFix_RootPy::ShapeFix_RootPy(ShapeFix_Root *pcObject, PyTypeObject *T)
    : PyObjectBase(static_cast<PyObjectBase::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ShapeFix_RootPy::~ShapeFix_RootPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ShapeFix_RootPy representation
//--------------------------------------------------------------------------
PyObject *ShapeFix_RootPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ShapeFix_RootPy Attributes
//--------------------------------------------------------------------------
PyObject *ShapeFix_RootPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
{
    try {
        // getter method for special Attributes (e.g. dynamic ones)
        PyObject *r = getCustomAttributes(attr);
        if(r) return r;
    } // Please sync the following catch implementation with PY_CATCH
    catch(Base::Exception &e)
    {
        auto pye = e.getPyExceptionType();
        if(!pye)
            pye = Base::PyExc_FC_GeneralError;
        PyErr_SetObject(pye, e.getPyObject());
        return nullptr;
    }
    catch(const std::exception &e)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, e.what());
        return nullptr;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return nullptr;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS
    catch(...)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError,"Unknown C++ exception");
        return nullptr;
    }
#endif

    PyMethodDef *ml = Methods;
    for (; ml->ml_name != nullptr; ml++) {
        if (attr[0] == ml->ml_name[0] &&
            strcmp(attr+1, ml->ml_name+1) == 0)
            return PyCFunction_New(ml, this);
    }

    PyErr_Clear();
    return PyObjectBase::_getattr(attr);
}

int ShapeFix_RootPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
{
    try {
        // setter for special Attributes (e.g. dynamic ones)
        int r = setCustomAttributes(attr, value);
        // r = 1: handled
        // r = -1: error
        // r = 0: ignore
        if (r == 1)
            return 0;
        else if (r == -1)
            return -1;
    } // Please sync the following catch implementation with PY_CATCH
    catch(Base::Exception &e)
    {
        auto pye = e.getPyExceptionType();
        if(!pye)
            pye = Base::PyExc_FC_GeneralError;
        PyErr_SetObject(pye, e.getPyObject());
        return -1;
    }
    catch(const std::exception &e)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, e.what());
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS
    catch(...)
    {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown C++ exception");
        return -1;
    }
#endif

    return PyObjectBase::_setattr(attr, value);
}

ShapeFix_Root *ShapeFix_RootPy::getShapeFix_RootPtr() const
{
    return static_cast<ShapeFix_Root *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ShapeFix_RootPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *ShapeFix_RootPy::PyMake(PyTypeObject* /*type*/, PyObject* /*args*/, PyObject* /*kwds*/)
{
    // create a new instance of ShapeFix_RootPy and the Twin object
    return new ShapeFix_RootPy(new ShapeFix_Root);
}

// constructor method
int ShapeFix_RootPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string ShapeFix_RootPy::representation() const
{
    return {"<ShapeFix_Root object>"};
}

PyObject* ShapeFix_RootPy::limitTolerance(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}



Py::Float ShapeFix_RootPy::getPrecision() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ShapeFix_RootPy::setPrecision(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float ShapeFix_RootPy::getMinTolerance() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ShapeFix_RootPy::setMinTolerance(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float ShapeFix_RootPy::getMaxTolerance() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ShapeFix_RootPy::setMaxTolerance(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ShapeFix_RootPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int ShapeFix_RootPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif



