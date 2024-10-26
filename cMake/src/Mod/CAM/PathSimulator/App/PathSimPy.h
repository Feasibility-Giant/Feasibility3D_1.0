
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef PATHSIMULATOR_PATHSIMPY_H
#define PATHSIMULATOR_PATHSIMPY_H

#include <Base/BaseClassPy.h>
#include <Mod/CAM/PathSimulator/App/PathSim.h>
#include <string>


namespace PathSimulator
{

//===========================================================================
// PathSimPy - Python wrapper
//===========================================================================

/** The python export class for PathSim
 */
class PathSimulatorExport PathSimPy : public Base::BaseClassPy
{
protected:
    ~PathSimPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    PathSimPy(PathSim *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = PathSim*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the BeginSimulation() method
    static PyObject * staticCallback_BeginSimulation (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the BeginSimulation() method
    PyObject*  BeginSimulation(PyObject *args, PyObject *kwd);
    /// callback for the SetToolShape() method
    static PyObject * staticCallback_SetToolShape (PyObject *self, PyObject *args);
    /// implementer for the SetToolShape() method
    PyObject*  SetToolShape(PyObject *args);
    /// callback for the GetResultMesh() method
    static PyObject * staticCallback_GetResultMesh (PyObject *self, PyObject *args);
    /// implementer for the GetResultMesh() method
    PyObject*  GetResultMesh(PyObject *args);
    /// callback for the ApplyCommand() method
    static PyObject * staticCallback_ApplyCommand (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the ApplyCommand() method
    PyObject*  ApplyCommand(PyObject *args, PyObject *kwd);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Tool attribute
    static PyObject * staticCallback_getTool (PyObject *self, void *closure);
    /// getter for the Tool attribute
    Py::Object getTool() const;
    /// setter callback for the Tool attribute
    static int staticCallback_setTool (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Tool is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    PathSim *getPathSimPtr() const;

};

}  //namespace PathSimulator

#endif  // PATHSIMULATOR_PATHSIMPY_H


