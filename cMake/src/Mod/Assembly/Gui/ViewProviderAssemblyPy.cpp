
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ViewProviderAssemblyPyImp.cpp! It's not intended to be in a project!

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
using namespace AssemblyGui;

/// Type structure of ViewProviderAssemblyPy
PyTypeObject ViewProviderAssemblyPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "AssemblyGui.ViewProviderAssembly",     /*tp_name*/
    sizeof(ViewProviderAssemblyPy),                       /*tp_basicsize*/
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
    "This is the ViewProviderAssembly class",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    AssemblyGui::ViewProviderAssemblyPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    AssemblyGui::ViewProviderAssemblyPy::GetterSetter,                     /*tp_getset */
    &Gui::ViewProviderPy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    AssemblyGui::ViewProviderAssemblyPy::PyMake,/*tp_new */
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

/// Methods structure of ViewProviderAssemblyPy
PyMethodDef ViewProviderAssemblyPy::Methods[] = {
    {"getDragger",
        reinterpret_cast<PyCFunction>( staticCallback_getDragger ),
        METH_VARARGS,
        "Return the assembly dragger coin object.\n"
        "\n"
        "              getDragger() -> SoFCCSysDragger\n"
        "\n"
        "              Returns: dragger coin object of the assembly"
    },
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of ViewProviderAssemblyPy
PyGetSetDef ViewProviderAssemblyPy::GetterSetter[] = {
    {"EnableMovement",
        (getter) staticCallback_getEnableMovement,
        (setter) staticCallback_setEnableMovement,
        "Enable moving the parts by clicking and dragging.",
        nullptr
    },
    {"MoveOnlyPreselected",
        (getter) staticCallback_getMoveOnlyPreselected,
        (setter) staticCallback_setMoveOnlyPreselected,
        "If enabled, only the preselected object will move.",
        nullptr
    },
    {"MoveInCommand",
        (getter) staticCallback_getMoveInCommand,
        (setter) staticCallback_setMoveInCommand,
        "If enabled, each move will be wrapped in a command.",
        nullptr
    },
    {"DraggerVisibility",
        (getter) staticCallback_getDraggerVisibility,
        (setter) staticCallback_setDraggerVisibility,
        "Show or hide the assembly dragger.",
        nullptr
    },
    {"DraggerPlacement",
        (getter) staticCallback_getDraggerPlacement,
        (setter) staticCallback_setDraggerPlacement,
        "Placement of the assembly dragger object.",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// getDragger() callback and implementer
// PyObject*  ViewProviderAssemblyPy::getDragger(PyObject *args){};
// has to be implemented in ViewProviderAssemblyPyImp.cpp
PyObject * ViewProviderAssemblyPy::staticCallback_getDragger (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'getDragger' of 'AssemblyGui.ViewProviderAssembly' object needs an argument");
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
        PyObject* ret = static_cast<ViewProviderAssemblyPy*>(self)->getDragger(args);
        if (ret != nullptr)
            static_cast<ViewProviderAssemblyPy*>(self)->startNotify();
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

// EnableMovement() callback and implementer
// PyObject*  ViewProviderAssemblyPy::EnableMovement(PyObject *args){};
// has to be implemented in ViewProviderAssemblyPyImp.cpp
PyObject * ViewProviderAssemblyPy::staticCallback_getEnableMovement (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ViewProviderAssemblyPy*>(self)->getEnableMovement());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'EnableMovement' of object 'ViewProviderAssembly'");
        return nullptr;
    }
}

int ViewProviderAssemblyPy::staticCallback_setEnableMovement (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ViewProviderAssemblyPy*>(self)->setEnableMovement(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'EnableMovement' of object 'ViewProviderAssembly'");
        return -1;
    }
}

// MoveOnlyPreselected() callback and implementer
// PyObject*  ViewProviderAssemblyPy::MoveOnlyPreselected(PyObject *args){};
// has to be implemented in ViewProviderAssemblyPyImp.cpp
PyObject * ViewProviderAssemblyPy::staticCallback_getMoveOnlyPreselected (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ViewProviderAssemblyPy*>(self)->getMoveOnlyPreselected());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'MoveOnlyPreselected' of object 'ViewProviderAssembly'");
        return nullptr;
    }
}

int ViewProviderAssemblyPy::staticCallback_setMoveOnlyPreselected (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ViewProviderAssemblyPy*>(self)->setMoveOnlyPreselected(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'MoveOnlyPreselected' of object 'ViewProviderAssembly'");
        return -1;
    }
}

// MoveInCommand() callback and implementer
// PyObject*  ViewProviderAssemblyPy::MoveInCommand(PyObject *args){};
// has to be implemented in ViewProviderAssemblyPyImp.cpp
PyObject * ViewProviderAssemblyPy::staticCallback_getMoveInCommand (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ViewProviderAssemblyPy*>(self)->getMoveInCommand());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'MoveInCommand' of object 'ViewProviderAssembly'");
        return nullptr;
    }
}

int ViewProviderAssemblyPy::staticCallback_setMoveInCommand (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ViewProviderAssemblyPy*>(self)->setMoveInCommand(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'MoveInCommand' of object 'ViewProviderAssembly'");
        return -1;
    }
}

// DraggerVisibility() callback and implementer
// PyObject*  ViewProviderAssemblyPy::DraggerVisibility(PyObject *args){};
// has to be implemented in ViewProviderAssemblyPyImp.cpp
PyObject * ViewProviderAssemblyPy::staticCallback_getDraggerVisibility (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ViewProviderAssemblyPy*>(self)->getDraggerVisibility());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'DraggerVisibility' of object 'ViewProviderAssembly'");
        return nullptr;
    }
}

int ViewProviderAssemblyPy::staticCallback_setDraggerVisibility (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ViewProviderAssemblyPy*>(self)->setDraggerVisibility(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'DraggerVisibility' of object 'ViewProviderAssembly'");
        return -1;
    }
}

// DraggerPlacement() callback and implementer
// PyObject*  ViewProviderAssemblyPy::DraggerPlacement(PyObject *args){};
// has to be implemented in ViewProviderAssemblyPyImp.cpp
PyObject * ViewProviderAssemblyPy::staticCallback_getDraggerPlacement (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ViewProviderAssemblyPy*>(self)->getDraggerPlacement());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'DraggerPlacement' of object 'ViewProviderAssembly'");
        return nullptr;
    }
}

int ViewProviderAssemblyPy::staticCallback_setDraggerPlacement (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ViewProviderAssemblyPy*>(self)->setDraggerPlacement(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'DraggerPlacement' of object 'ViewProviderAssembly'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ViewProviderAssemblyPy::ViewProviderAssemblyPy(ViewProviderAssembly *pcObject, PyTypeObject *T)
    : ViewProviderPy(static_cast<ViewProviderPy::PointerType>(pcObject), T)
{
}

PyObject *ViewProviderAssemblyPy::PyMake(PyTypeObject* /*type*/, PyObject* /*args*/, PyObject* /*kwds*/)
{
    // never create such objects with the constructor
    PyErr_SetString(PyExc_RuntimeError, "You cannot create directly an instance of 'ViewProviderAssemblyPy'.");

    return nullptr;
}

int ViewProviderAssemblyPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}

//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ViewProviderAssemblyPy::~ViewProviderAssemblyPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ViewProviderAssemblyPy representation
//--------------------------------------------------------------------------
PyObject *ViewProviderAssemblyPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ViewProviderAssemblyPy Attributes
//--------------------------------------------------------------------------
PyObject *ViewProviderAssemblyPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return ViewProviderPy::_getattr(attr);
}

int ViewProviderAssemblyPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return ViewProviderPy::_setattr(attr, value);
}

ViewProviderAssembly *ViewProviderAssemblyPy::getViewProviderAssemblyPtr() const
{
    return static_cast<ViewProviderAssembly *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ViewProviderAssemblyPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */



// returns a string which represents the object e.g. when printed in python
std::string ViewProviderAssemblyPy::representation() const
{
    return {"<ViewProviderAssembly object>"};
}

PyObject* ViewProviderAssemblyPy::getDragger(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}



Py::Boolean ViewProviderAssemblyPy::getEnableMovement() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  ViewProviderAssemblyPy::setEnableMovement(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean ViewProviderAssemblyPy::getMoveOnlyPreselected() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  ViewProviderAssemblyPy::setMoveOnlyPreselected(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean ViewProviderAssemblyPy::getMoveInCommand() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  ViewProviderAssemblyPy::setMoveInCommand(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean ViewProviderAssemblyPy::getDraggerVisibility() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  ViewProviderAssemblyPy::setDraggerVisibility(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ViewProviderAssemblyPy::getDraggerPlacement() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  ViewProviderAssemblyPy::setDraggerPlacement(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ViewProviderAssemblyPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int ViewProviderAssemblyPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif



