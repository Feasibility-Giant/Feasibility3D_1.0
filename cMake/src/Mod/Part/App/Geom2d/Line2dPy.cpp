
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the .XML file
// Every change you make here gets lost in the next full rebuild!
// This File is normally built as an include in Line2dPyImp.cpp! It's not intended to be in a project!

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

/// Type structure of Line2dPy
PyTypeObject Line2dPy::Type = {
    PyVarObject_HEAD_INIT(&PyType_Type,0)
    "Part.Geom2d.Line2d",     /*tp_name*/
    sizeof(Line2dPy),                       /*tp_basicsize*/
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
    "Describes an infinite line in 2D space\n"
    "To create a line there are several ways:\n"
    "Part.Geom2d.Line2d()\n"
    "    Creates a default line\n"
    "\n"
    "Part.Geom2d.Line2d(Line)\n"
    "    Creates a copy of the given line\n"
    "\n"
    "Part.Geom2d.Line2d(Point,Dir)\n"
    "    Creates a line that goes through two given points",           /*tp_doc */
    nullptr,                                          /*tp_traverse */
    nullptr,                                          /*tp_clear */
    nullptr,                                          /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    nullptr,                                          /*tp_iter */
    nullptr,                                          /*tp_iternext */
    Part::Line2dPy::Methods,                     /*tp_methods */
    nullptr,                                          /*tp_members */
    Part::Line2dPy::GetterSetter,                     /*tp_getset */
    &Part::Curve2dPy::Type,                        /*tp_base */
    nullptr,                                          /*tp_dict */
    nullptr,                                          /*tp_descr_get */
    nullptr,                                          /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    nullptr,                                          /*tp_alloc */
    Part::Line2dPy::PyMake,/*tp_new */
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

/// Methods structure of Line2dPy
PyMethodDef Line2dPy::Methods[] = {
    {nullptr, nullptr, 0, nullptr}		/* Sentinel */
};



/// Attribute structure of Line2dPy
PyGetSetDef Line2dPy::GetterSetter[] = {
    {"Location",
        (getter) staticCallback_getLocation,
        (setter) staticCallback_setLocation,
        "Returns the location of this line.",
        nullptr
    },
    {"Direction",
        (getter) staticCallback_getDirection,
        (setter) staticCallback_setDirection,
        "Returns the direction of this line.",
        nullptr
    },
    {nullptr, nullptr, nullptr, nullptr, nullptr}		/* Sentinel */
};

// Location() callback and implementer
// PyObject*  Line2dPy::Location(PyObject *args){};
// has to be implemented in Line2dPyImp.cpp
PyObject * Line2dPy::staticCallback_getLocation (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<Line2dPy*>(self)->getLocation());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Location' of object 'Geom2dLine'");
        return nullptr;
    }
}

int Line2dPy::staticCallback_setLocation (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<Line2dPy*>(self)->setLocation(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Location' of object 'Geom2dLine'");
        return -1;
    }
}

// Direction() callback and implementer
// PyObject*  Line2dPy::Direction(PyObject *args){};
// has to be implemented in Line2dPyImp.cpp
PyObject * Line2dPy::staticCallback_getDirection (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return nullptr;
    }

    try {
        return Py::new_reference_to(static_cast<Line2dPy*>(self)->getDirection());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return nullptr;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while reading attribute 'Direction' of object 'Geom2dLine'");
        return nullptr;
    }
}

int Line2dPy::staticCallback_setDirection (PyObject *self, PyObject *value, void * /*closure*/)
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
        static_cast<Line2dPy*>(self)->setDirection(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::PyExc_FC_GeneralError, "Unknown exception while writing attribute 'Direction' of object 'Geom2dLine'");
        return -1;
    }
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
Line2dPy::Line2dPy(Geom2dLine *pcObject, PyTypeObject *T)
    : Curve2dPy(static_cast<Curve2dPy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
Line2dPy::~Line2dPy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// Line2dPy representation
//--------------------------------------------------------------------------
PyObject *Line2dPy::_repr()
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// Line2dPy Attributes
//--------------------------------------------------------------------------
PyObject *Line2dPy::_getattr(const char *attr)			// __getattr__ function: note only need to handle new state
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
    return Curve2dPy::_getattr(attr);
}

int Line2dPy::_setattr(const char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
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

    return Curve2dPy::_setattr(attr, value);
}

Geom2dLine *Line2dPy::getGeom2dLinePtr() const
{
    return static_cast<Geom2dLine *>(_pcTwinPointer);
}

#if defined(__clang__)
# pragma clang diagnostic pop
#endif

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in Line2dPyImp.cpp! This prototypes
 * are just for convenience when you add a new method.
 */

PyObject *Line2dPy::PyMake(PyTypeObject* /*type*/, PyObject* /*args*/, PyObject* /*kwds*/)
{
    // create a new instance of Line2dPy and the Twin object
    return new Line2dPy(new Geom2dLine);
}

// constructor method
int Line2dPy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}


// returns a string which represents the object e.g. when printed in python
std::string Line2dPy::representation() const
{
    return {"<Geom2dLine object>"};
}



Py::Object Line2dPy::getLocation() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  Line2dPy::setLocation(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object Line2dPy::getDirection() const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  Line2dPy::setDirection(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

PyObject *Line2dPy::getCustomAttributes(const char* /*attr*/) const
{
    return nullptr;
}

int Line2dPy::setCustomAttributes(const char* /*attr*/, PyObject* /*obj*/)
{
    return 0;
}


#endif


