
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ViewProviderFemConstraintPyImp.cpp! It's not intended to be in a project!

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
using namespace FemGui;

/// Type structure of ViewProviderFemConstraintPy
PyTypeObject ViewProviderFemConstraintPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "FemGui.ViewProviderFemConstraint",     /*tp_name*/
    sizeof(ViewProviderFemConstraintPy),                       /*tp_basicsize*/
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
    "This is the ViewProviderFemConstraint class",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    FemGui::ViewProviderFemConstraintPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    FemGui::ViewProviderFemConstraintPy::GetterSetter,                     /*tp_getset */
    &Gui::ViewProviderGeometryObjectPy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    FemGui::ViewProviderFemConstraintPy::PyMake,/*tp_new */
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

/// Methods structure of ViewProviderFemConstraintPy
PyMethodDef ViewProviderFemConstraintPy::Methods[] = {
    {"loadSymbol",
        reinterpret_cast<PyCFunction>( staticCallback_loadSymbol ),
        METH_VARARGS,
        "loadSymbol(filename) -> None\n"
        "\n"
        "Load constraint symbol from Open Inventor file.\n"
        "The file structure should be as follows:\n"
        "A separator containing a separator with the symbol used in\n"
        "multiple copies at points on the surface and an optional\n"
        "separator with a symbol excluded from multiple copies.\n"
        "\n"
        "filename : str\n"
        "    Open Inventor file."
    },
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of ViewProviderFemConstraintPy
PyGetSetDef ViewProviderFemConstraintPy::GetterSetter[] = {
    {"SymbolNode",
        (getter) staticCallback_getSymbolNode,
        (setter) staticCallback_setSymbolNode,
        "A pivy SoSeparator with the nodes of the constraint symbols",
        nullptr
    },
    {"ExtraSymbolNode",
        (getter) staticCallback_getExtraSymbolNode,
        (setter) staticCallback_setExtraSymbolNode,
        "A pivy SoSeparator with the nodes of the constraint extra symbols",
        nullptr
    },
    {"RotateSymbol",
        (getter) staticCallback_getRotateSymbol,
        (setter) staticCallback_setRotateSymbol,
        "Apply rotation on copies of the constraint symbol",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// loadSymbol() callback and implementer
// PyObject*  ViewProviderFemConstraintPy::loadSymbol(PyObject *args){};
// has to be implemented in ViewProviderFemConstraintPyImp.cpp
PyObject * ViewProviderFemConstraintPy::staticCallback_loadSymbol (PyObject *self, PyObject *args)
{
    // make sure that not a null pointer is passed
    if (!self) {
        PyErr_SetString(PyExc_TypeError, "descriptor 'loadSymbol' of 'FemGui.ViewProviderFemConstraint' object needs an argument");
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
        PyObject* ret = static_cast<ViewProviderFemConstraintPy*>(self)->loadSymbol(args);
        if (ret != nullptr)
            static_cast<ViewProviderFemConstraintPy*>(self)->startNotify();
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

// SymbolNode() callback and implementer
// PyObject*  ViewProviderFemConstraintPy::SymbolNode(PyObject *args){};
// has to be implemented in ViewProviderFemConstraintPyImp.cpp
PyObject * ViewProviderFemConstraintPy::staticCallback_getSymbolNode (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ViewProviderFemConstraintPy*>(self)->getSymbolNode());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'SymbolNode' of object 'ViewProviderFemConstraint'");
        return nullptr;
    }
}

int ViewProviderFemConstraintPy::staticCallback_setSymbolNode (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'SymbolNode' of object 'ViewProviderFemConstraint' is read-only");
    return -1;
}

// ExtraSymbolNode() callback and implementer
// PyObject*  ViewProviderFemConstraintPy::ExtraSymbolNode(PyObject *args){};
// has to be implemented in ViewProviderFemConstraintPyImp.cpp
PyObject * ViewProviderFemConstraintPy::staticCallback_getExtraSymbolNode (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ViewProviderFemConstraintPy*>(self)->getExtraSymbolNode());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'ExtraSymbolNode' of object 'ViewProviderFemConstraint'");
        return nullptr;
    }
}

int ViewProviderFemConstraintPy::staticCallback_setExtraSymbolNode (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'ExtraSymbolNode' of object 'ViewProviderFemConstraint' is read-only");
    return -1;
}

// RotateSymbol() callback and implementer
// PyObject*  ViewProviderFemConstraintPy::RotateSymbol(PyObject *args){};
// has to be implemented in ViewProviderFemConstraintPyImp.cpp
PyObject * ViewProviderFemConstraintPy::staticCallback_getRotateSymbol (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ViewProviderFemConstraintPy*>(self)->getRotateSymbol());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'RotateSymbol' of object 'ViewProviderFemConstraint'");
        return nullptr;
    }
}

int ViewProviderFemConstraintPy::staticCallback_setRotateSymbol (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ViewProviderFemConstraintPy*>(self)->setRotateSymbol(Py::Boolean(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'RotateSymbol' of object 'ViewProviderFemConstraint'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ViewProviderFemConstraintPy::ViewProviderFemConstraintPy(ViewProviderFemConstraint *pcObject, PyTypeObject *T)
    : ViewProviderGeometryObjectPy(static_cast<ViewProviderGeometryObjectPy::PointerType>(pcObject), T)
{
}

PyObject *ViewProviderFemConstraintPy::PyMake(PyTypeObject* /*type*/, PyObject* /*args*/, PyObject* /*kwds*/)
{
    // never create such objects with the constructor
    PyErr_SetString(PyExc_RuntimeError, "You cannot create directly an instance of 'ViewProviderFemConstraintPy'.");

    return nullptr;
}

int ViewProviderFemConstraintPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}

//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ViewProviderFemConstraintPy::~ViewProviderFemConstraintPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ViewProviderFemConstraintPy representation
//--------------------------------------------------------------------------
PyObject *ViewProviderFemConstraintPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ViewProviderFemConstraintPy Attributes
//--------------------------------------------------------------------------
PyObject *ViewProviderFemConstraintPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return ViewProviderGeometryObjectPy::_getattr(attr);
}

int ViewProviderFemConstraintPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return ViewProviderGeometryObjectPy::_setattr(attr, value);
}

ViewProviderFemConstraint *ViewProviderFemConstraintPy::getViewProviderFemConstraintPtr() const
{
    return static_cast<ViewProviderFemConstraint *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ViewProviderFemConstraintPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */



// returns a string which represents the object e.g. when printed in python
std::string ViewProviderFemConstraintPy::representation() const
{
    return {"<ViewProviderFemConstraint object>"};
}

PyObject* ViewProviderFemConstraintPy::loadSymbol(PyObject *args)
{
    PyErr_SetString(PyExc_NotImplementedError, "Not yet implemented");
    return nullptr;
}



Py::Object ViewProviderFemConstraintPy::getSymbolNode() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ViewProviderFemConstraintPy::getExtraSymbolNode() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

Py::Boolean ViewProviderFemConstraintPy::getRotateSymbol() const
{
    //return Py::Boolean();
    throw Py::AttributeError("Not yet implemented");
}

void  ViewProviderFemConstraintPy::setRotateSymbol(Py::Boolean arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ViewProviderFemConstraintPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int ViewProviderFemConstraintPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif



