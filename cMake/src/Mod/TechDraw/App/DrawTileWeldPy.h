
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef TECHDRAW_DRAWTILEWELDPY_H
#define TECHDRAW_DRAWTILEWELDPY_H

#include <Mod/TechDraw/App/DrawTilePy.h>
#include <Mod/TechDraw/App/DrawTileWeld.h>
#include <string>


namespace TechDraw
{

//===========================================================================
// DrawTileWeldPy - Python wrapper
//===========================================================================

/** The python export class for DrawTileWeld
 */
class TechDrawExport DrawTileWeldPy : public TechDraw::DrawTilePy
{
protected:
    ~DrawTileWeldPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    DrawTileWeldPy(DrawTileWeld *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = DrawTileWeld*;

    PyObject *_repr() override;        // the representation
    std::string representation() const;

    /** @name callbacks and implementers for the python object methods */
    //@{
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
    DrawTileWeld *getDrawTileWeldPtr() const;

};

}  //namespace TechDraw

#endif  // TECHDRAW_DRAWTILEWELDPY_H


