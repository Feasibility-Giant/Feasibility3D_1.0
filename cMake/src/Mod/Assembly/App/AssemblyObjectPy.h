
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef ASSEMBLY_ASSEMBLYOBJECTPY_H
#define ASSEMBLY_ASSEMBLYOBJECTPY_H

#include <App/PartPy.h>
#include <Mod/Assembly/App/AssemblyObject.h>
#include <string>


namespace Assembly
{

//===========================================================================
// AssemblyObjectPy - Python wrapper
//===========================================================================

/** The python export class for AssemblyObject
 */
class AssemblyExport AssemblyObjectPy : public App::PartPy
{
protected:
    ~AssemblyObjectPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    AssemblyObjectPy(AssemblyObject *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = AssemblyObject*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the solve() method
    static PyObject * staticCallback_solve (PyObject *self, PyObject *args);
    /// implementer for the solve() method
    PyObject*  solve(PyObject *args);
    /// callback for the undoSolve() method
    static PyObject * staticCallback_undoSolve (PyObject *self, PyObject *args);
    /// implementer for the undoSolve() method
    PyObject*  undoSolve(PyObject *args);
    /// callback for the clearUndo() method
    static PyObject * staticCallback_clearUndo (PyObject *self, PyObject *args);
    /// implementer for the clearUndo() method
    PyObject*  clearUndo(PyObject *args);
    /// callback for the isPartConnected() method
    static PyObject * staticCallback_isPartConnected (PyObject *self, PyObject *args);
    /// implementer for the isPartConnected() method
    PyObject*  isPartConnected(PyObject *args);
    /// callback for the isJointConnectingPartToGround() method
    static PyObject * staticCallback_isJointConnectingPartToGround (PyObject *self, PyObject *args);
    /// implementer for the isJointConnectingPartToGround() method
    PyObject*  isJointConnectingPartToGround(PyObject *args);
    /// callback for the isPartGrounded() method
    static PyObject * staticCallback_isPartGrounded (PyObject *self, PyObject *args);
    /// implementer for the isPartGrounded() method
    PyObject*  isPartGrounded(PyObject *args);
    /// callback for the exportAsASMT() method
    static PyObject * staticCallback_exportAsASMT (PyObject *self, PyObject *args);
    /// implementer for the exportAsASMT() method
    PyObject*  exportAsASMT(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(const char *attr) override;              // __getattr__ function
    int _setattr(const char *attr, PyObject *value) override;   // __setattr__ function

    /// getter for the object handled by this class
    AssemblyObject *getAssemblyObjectPtr() const;

};

}  //namespace Assembly

#endif  // ASSEMBLY_ASSEMBLYOBJECTPY_H

