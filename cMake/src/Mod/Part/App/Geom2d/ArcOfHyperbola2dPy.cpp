
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in ArcOfHyperbola2dPyImp.cpp! It's not intended to be in a project!

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

/// Type structure of ArcOfHyperbola2dPy
PyTypeObject ArcOfHyperbola2dPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.Geom2d.ArcOfHyperbola2d",     /*tp_name*/
    sizeof(ArcOfHyperbola2dPy),                       /*tp_basicsize*/
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
    "Describes a portion of an hyperbola",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Part::ArcOfHyperbola2dPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Part::ArcOfHyperbola2dPy::GetterSetter,                     /*tp_getset */
    &Part::ArcOfConic2dPy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Part::ArcOfHyperbola2dPy::PyMake,/*tp_new */
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

/// Methods structure of ArcOfHyperbola2dPy
PyMethodDef ArcOfHyperbola2dPy::Methods[] = {
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of ArcOfHyperbola2dPy
PyGetSetDef ArcOfHyperbola2dPy::GetterSetter[] = {
    {"MajorRadius",
        (getter) staticCallback_getMajorRadius,
        (setter) staticCallback_setMajorRadius,
        "The major radius of the hyperbola.",
        nullptr
    },
    {"MinorRadius",
        (getter) staticCallback_getMinorRadius,
        (setter) staticCallback_setMinorRadius,
        "The minor radius of the hyperbola.",
        nullptr
    },
    {"Hyperbola",
        (getter) staticCallback_getHyperbola,
        (setter) staticCallback_setHyperbola,
        "The internal hyperbola representation",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// MajorRadius() callback and implementer
// PyObject*  ArcOfHyperbola2dPy::MajorRadius(PyObject *args){};
// has to be implemented in ArcOfHyperbola2dPyImp.cpp
PyObject * ArcOfHyperbola2dPy::staticCallback_getMajorRadius (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ArcOfHyperbola2dPy*>(self)->getMajorRadius());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'MajorRadius' of object 'Geom2dArcOfHyperbola'");
        return nullptr;
    }
}

int ArcOfHyperbola2dPy::staticCallback_setMajorRadius (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ArcOfHyperbola2dPy*>(self)->setMajorRadius(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'MajorRadius' of object 'Geom2dArcOfHyperbola'");
        return -1;
    }
}

// MinorRadius() callback and implementer
// PyObject*  ArcOfHyperbola2dPy::MinorRadius(PyObject *args){};
// has to be implemented in ArcOfHyperbola2dPyImp.cpp
PyObject * ArcOfHyperbola2dPy::staticCallback_getMinorRadius (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ArcOfHyperbola2dPy*>(self)->getMinorRadius());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'MinorRadius' of object 'Geom2dArcOfHyperbola'");
        return nullptr;
    }
}

int ArcOfHyperbola2dPy::staticCallback_setMinorRadius (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<ArcOfHyperbola2dPy*>(self)->setMinorRadius(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'MinorRadius' of object 'Geom2dArcOfHyperbola'");
        return -1;
    }
}

// Hyperbola() callback and implementer
// PyObject*  ArcOfHyperbola2dPy::Hyperbola(PyObject *args){};
// has to be implemented in ArcOfHyperbola2dPyImp.cpp
PyObject * ArcOfHyperbola2dPy::staticCallback_getHyperbola (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<ArcOfHyperbola2dPy*>(self)->getHyperbola());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Hyperbola' of object 'Geom2dArcOfHyperbola'");
        return nullptr;
    }
}

int ArcOfHyperbola2dPy::staticCallback_setHyperbola (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Hyperbola' of object 'Geom2dArcOfHyperbola' is read-only");
    return -1;
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ArcOfHyperbola2dPy::ArcOfHyperbola2dPy(Geom2dArcOfHyperbola *pcObject, PyTypeObject *T)
    : ArcOfConic2dPy(static_cast<ArcOfConic2dPy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ArcOfHyperbola2dPy::~ArcOfHyperbola2dPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ArcOfHyperbola2dPy representation
//--------------------------------------------------------------------------
PyObject *ArcOfHyperbola2dPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ArcOfHyperbola2dPy Attributes
//--------------------------------------------------------------------------
PyObject *ArcOfHyperbola2dPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return ArcOfConic2dPy::_getattr(attr);
}

int ArcOfHyperbola2dPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return ArcOfConic2dPy::_setattr(attr, value);
}

Geom2dArcOfHyperbola *ArcOfHyperbola2dPy::getGeom2dArcOfHyperbolaPtr() const
{
    return static_cast<Geom2dArcOfHyperbola *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ArcOfHyperbola2dPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *ArcOfHyperbola2dPy::PyMake(PyTypeObject* /*type*/, PyObject* /*args*/, PyObject* /*kwds*/)
{
    // create a new instance of ArcOfHyperbola2dPy and the Twin object
    return new ArcOfHyperbola2dPy(new Geom2dArcOfHyperbola);
}

// constructor method
int ArcOfHyperbola2dPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string ArcOfHyperbola2dPy::representation() const
{
    return {"<Geom2dArcOfHyperbola object>"};
}



Py::Float ArcOfHyperbola2dPy::getMajorRadius() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ArcOfHyperbola2dPy::setMajorRadius(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Float ArcOfHyperbola2dPy::getMinorRadius() const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ArcOfHyperbola2dPy::setMinorRadius(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ArcOfHyperbola2dPy::getHyperbola() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ArcOfHyperbola2dPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int ArcOfHyperbola2dPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif


