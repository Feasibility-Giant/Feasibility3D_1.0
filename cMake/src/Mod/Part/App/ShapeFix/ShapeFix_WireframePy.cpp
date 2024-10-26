
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ShapeFix_WireframePyImp.cpp! It's not intended to be in a project!

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

/// Type structure of ShapeFix_WireframePy
PyTypeObject ShapeFix_WireframePy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.ShapeFix.Wireframe",     /*tp_name*/
    sizeof(ShapeFix_WireframePy),                       /*tp_basicsize*/
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
    "Provides methods for fixing wireframe of shape",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Part::ShapeFix_WireframePy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Part::ShapeFix_WireframePy::GetterSetter,                     /*tp_getset */
    &Part::ShapeFix_RootPy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Part::ShapeFix_WireframePy::PyMake,/*tp_new */
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

/// Methods structure of ShapeFix_WireframePy
PyMethodDef ShapeFix_WireframePy::Methods[] = {
    {"clearStatuses",
        reinterpret_cast<PyCFunction>( staticCallback_clearStatuses ),
        METH_VARARGS,
        "Clears all statuses"
    },
    {"load",
        reinterpret_cast<PyCFunction>( staticCallback_load ),
        METH_VARARGS,
        "Loads a shape, resets statuses"
    },
    {"fixWireGaps",
        reinterpret_cast<PyCFunction>( staticCallback_fixWireGaps ),
        METH_VARARGS,
        "Fixes gaps between ends of curves of adjacent edges"
    },
    {"fixSmallEdges",
        reinterpret_cast<PyCFunction>( staticCallback_fixSmallEdges ),
        METH_VARARGS,
        "Fixes small edges in shape by merging adjacent edges"
    },
    {"shape",
        reinterpret_cast<PyCFunction>( staticCallback_shape ),
        METH_VARARGS,
        ""
    },
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of ShapeFix_WireframePy
PyGetSetDef ShapeFix_WireframePy::GetterSetter[] = {
    {"ModeDropSmallEdges",
        (getter) staticCallback_getModeDropSmallEdges,
        (setter) staticCallback_setModeDropSmallEdges,
        "Returns mode managing removing small edges",
        nullptr
    },
    {"LimitAngle",
        (getter) staticCallback_getLimitAngle,
        (setter) staticCallback_setLimitAngle,
        "Limit angle for merging edges",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// clearStatuses() callback and implementer
// PyObject*  ShapeFix_WireframePy::clearStatuses(PyObject *args){};
// has to be implemented in ShapeFix_WireframePyImp.cpp
PyObject * ShapeFix_WireframePy::staticCallback_clearStatuses (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'clearStatuses' of 'Part.ShapeFix_Wireframe' object needs an argument");
        return nullptr;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return nullptr;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<ShapeFix_WireframePy*>(self)->clearStatuses(args);
        if (ret != nullptr)
            static_cast<ShapeFix_WireframePy*>(self)->startNotify();
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

// load() callback and implementer
// PyObject*  ShapeFix_WireframePy::load(PyObject *args){};
// has to be implemented in ShapeFix_WireframePyImp.cpp
PyObject * ShapeFix_WireframePy::staticCallback_load (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'load' of 'Part.ShapeFix_Wireframe' object needs an argument");
        return nullptr;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return nullptr;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<ShapeFix_WireframePy*>(self)->load(args);
        if (ret != nullptr)
            static_cast<ShapeFix_WireframePy*>(self)->startNotify();
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

// fixWireGaps() callback and implementer
// PyObject*  ShapeFix_WireframePy::fixWireGaps(PyObject *args){};
// has to be implemented in ShapeFix_WireframePyImp.cpp
PyObject * ShapeFix_WireframePy::staticCallback_fixWireGaps (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'fixWireGaps' of 'Part.ShapeFix_Wireframe' object needs an argument");
        return nullptr;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return nullptr;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<ShapeFix_WireframePy*>(self)->fixWireGaps(args);
        if (ret != nullptr)
            static_cast<ShapeFix_WireframePy*>(self)->startNotify();
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

// fixSmallEdges() callback and implementer
// PyObject*  ShapeFix_WireframePy::fixSmallEdges(PyObject *args){};
// has to be implemented in ShapeFix_WireframePyImp.cpp
PyObject * ShapeFix_WireframePy::staticCallback_fixSmallEdges (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'fixSmallEdges' of 'Part.ShapeFix_Wireframe' object needs an argument");
        return nullptr;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return nullptr;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<ShapeFix_WireframePy*>(self)->fixSmallEdges(args);
        if (ret != nullptr)
            static_cast<ShapeFix_WireframePy*>(self)->startNotify();
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

// shape() callback and implementer
// PyObject*  ShapeFix_WireframePy::shape(PyObject *args){};
// has to be implemented in ShapeFix_WireframePyImp.cpp
PyObject * ShapeFix_WireframePy::staticCallback_shape (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'shape' of 'Part.ShapeFix_Wireframe' object needs an argument");
        return nullptr;
    }

    // test if twin object isn't already deleted
    if (!static_cast<PyObjectBase*>(self)->isValid()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    // test if object is set Const
    if (static_cast<PyObjectBase*>(self)->isConst()) {
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a non const method");
        return nullptr;
    }

    try { // catches all exceptions coming up from c++ and generate a python exception
        PyObject* ret = static_cast<ShapeFix_WireframePy*>(self)->shape(args);
        if (ret != nullptr)
            static_cast<ShapeFix_WireframePy*>(self)->startNotify();
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

// ModeDropSmallEdges() callback and implementer
// PyObject*  ShapeFix_WireframePy::ModeDropSmallEdges(PyObject *args){};
// has to be implemented in ShapeFix_WireframePyImp.cpp
PyObject * ShapeFix_WireframePy::staticCallback_getModeDropSmallEdges (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ShapeFix_WireframePy*>(self)->getModeDropSmallEdges());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'ModeDropSmallEdges' of object 'ShapeFix_Wireframe'");
        return nullptr;
    }
}

int ShapeFix_WireframePy::staticCallback_setModeDropSmallEdges (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ShapeFix_WireframePy*>(self)->setModeDropSmallEdges(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'ModeDropSmallEdges' of object 'ShapeFix_Wireframe'");
        return -1;
    }
}

// LimitAngle() callback and implementer
// PyObject*  ShapeFix_WireframePy::LimitAngle(PyObject *args){};
// has to be implemented in ShapeFix_WireframePyImp.cpp
PyObject * ShapeFix_WireframePy::staticCallback_getLimitAngle (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ShapeFix_WireframePy*>(self)->getLimitAngle());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'LimitAngle' of object 'ShapeFix_Wireframe'");
        return nullptr;
    }
}

int ShapeFix_WireframePy::staticCallback_setLimitAngle (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ShapeFix_WireframePy*>(self)->setLimitAngle(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'LimitAngle' of object 'ShapeFix_Wireframe'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ShapeFix_WireframePy::ShapeFix_WireframePy(ShapeFix_Wireframe *pcObject, PyTypeObject *T)
    : ShapeFix_RootPy(static_cast<ShapeFix_RootPy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ShapeFix_WireframePy::~ShapeFix_WireframePy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ShapeFix_WireframePy representation
//--------------------------------------------------------------------------
PyObject *ShapeFix_WireframePy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ShapeFix_WireframePy Attributes
//--------------------------------------------------------------------------
PyObject *ShapeFix_WireframePy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return ShapeFix_RootPy::_getattr(attr);
}

int ShapeFix_WireframePy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return ShapeFix_RootPy::_setattr(attr, value);
}

ShapeFix_Wireframe *ShapeFix_WireframePy::getShapeFix_WireframePtr() const
{
    return static_cast<ShapeFix_Wireframe *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ShapeFix_WireframePyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *ShapeFix_WireframePy::PyMake(PyTypeObject* /*type*/, PyObject* /*args*/, PyObject* /*kwds*/)
{
    // create a new instance of ShapeFix_WireframePy and the Twin object
    return new ShapeFix_WireframePy(new ShapeFix_Wireframe);
}

// constructor method
int ShapeFix_WireframePy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string ShapeFix_WireframePy::representation() const
{
    return {"<ShapeFix_Wireframe object>"};
}

PyObject* ShapeFix_WireframePy::clearStatuses(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ShapeFix_WireframePy::load(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ShapeFix_WireframePy::fixWireGaps(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ShapeFix_WireframePy::fixSmallEdges(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}

PyObject* ShapeFix_WireframePy::shape(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}



Py::Boolean ShapeFix_WireframePy::getModeDropSmallEdges() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  ShapeFix_WireframePy::setModeDropSmallEdges(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float ShapeFix_WireframePy::getLimitAngle() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ShapeFix_WireframePy::setLimitAngle(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ShapeFix_WireframePy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int ShapeFix_WireframePy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif



