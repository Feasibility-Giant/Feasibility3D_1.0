
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef GUI_COMMANDPY_H
#define GUI_COMMANDPY_H

#include <Base/PyObjectBase.h>
#include <Gui/Command.h>
#include <string>


namespace Gui
{

//===========================================================================
// CommandPy - Python wrapper
//===========================================================================

/** The python export class for Command
 */
class GuiExport CommandPy : public Base::PyObjectBase
{
protected:
    ~CommandPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    CommandPy(Command *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = Command*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the get() method
    static PyObject * staticCallback_get (PyObject *self, PyObject *args);
    /// implementer for the get() method
    static PyObject*  get(PyObject *args);
    /// callback for the update() method
    static PyObject * staticCallback_update (PyObject *self, PyObject *args);
    /// implementer for the update() method
    static PyObject*  update(PyObject *args);
    /// callback for the listAll() method
    static PyObject * staticCallback_listAll (PyObject *self, PyObject *args);
    /// implementer for the listAll() method
    static PyObject*  listAll(PyObject *args);
    /// callback for the listByShortcut() method
    static PyObject * staticCallback_listByShortcut (PyObject *self, PyObject *args);
    /// implementer for the listByShortcut() method
    static PyObject*  listByShortcut(PyObject *args);
    /// callback for the run() method
    static PyObject * staticCallback_run (PyObject *self, PyObject *args);
    /// implementer for the run() method
    PyObject*  run(PyObject *args);
    /// callback for the isActive() method
    static PyObject * staticCallback_isActive (PyObject *self, PyObject *args);
    /// implementer for the isActive() method
    PyObject*  isActive(PyObject *args);
    /// callback for the getShortcut() method
    static PyObject * staticCallback_getShortcut (PyObject *self, PyObject *args);
    /// implementer for the getShortcut() method
    PyObject*  getShortcut(PyObject *args);
    /// callback for the setShortcut() method
    static PyObject * staticCallback_setShortcut (PyObject *self, PyObject *args);
    /// implementer for the setShortcut() method
    PyObject*  setShortcut(PyObject *args);
    /// callback for the resetShortcut() method
    static PyObject * staticCallback_resetShortcut (PyObject *self, PyObject *args);
    /// implementer for the resetShortcut() method
    PyObject*  resetShortcut(PyObject *args);
    /// callback for the getInfo() method
    static PyObject * staticCallback_getInfo (PyObject *self, PyObject *args);
    /// implementer for the getInfo() method
    PyObject*  getInfo(PyObject *args);
    /// callback for the getAction() method
    static PyObject * staticCallback_getAction (PyObject *self, PyObject *args);
    /// implementer for the getAction() method
    PyObject*  getAction(PyObject *args);
    /// callback for the createCustomCommand() method
    static PyObject * staticCallback_createCustomCommand (PyObject *self, PyObject *args, PyObject *kwd);
    /// implementer for the createCustomCommand() method
    static PyObject*  createCustomCommand(PyObject *args, PyObject *kwd);
    /// callback for the removeCustomCommand() method
    static PyObject * staticCallback_removeCustomCommand (PyObject *self, PyObject *args);
    /// implementer for the removeCustomCommand() method
    static PyObject*  removeCustomCommand(PyObject *args);
    /// callback for the findCustomCommand() method
    static PyObject * staticCallback_findCustomCommand (PyObject *self, PyObject *args);
    /// implementer for the findCustomCommand() method
    static PyObject*  findCustomCommand(PyObject *args);
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
    Command *getCommandPtr() const;

};

}  //namespace Gui

#endif  // GUI_COMMANDPY_H


