
// This file is generated by src/Tools/generateTemplates/templateClassPyExport.py out of the XML file
// Every change you make here gets lost in the next full rebuild!
#ifndef SPREADSHEET_PROPERTYCOLUMNWIDTHSPY_H
#define SPREADSHEET_PROPERTYCOLUMNWIDTHSPY_H

#include <Base/PersistencePy.h>
#include <Mod/Spreadsheet/App/PropertyColumnWidths.h>
#include <string>


namespace Spreadsheet
{

//===========================================================================
// PropertyColumnWidthsPy - Python wrapper
//===========================================================================

/** The python export class for PropertyColumnWidths
 */
class SpreadsheetExport PropertyColumnWidthsPy : public Base::PersistencePy
{
protected:
    ~PropertyColumnWidthsPy() override;

public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    PyTypeObject *GetType() override {return &Type;}

public:
    PropertyColumnWidthsPy(PropertyColumnWidths *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(PyTypeObject *, PyObject *, PyObject *);
    int PyInit(PyObject* args, PyObject*k) override;


    using PointerType = PropertyColumnWidths*;

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
    PropertyColumnWidths *getPropertyColumnWidthsPtr() const;

};

}  //namespace Spreadsheet

#endif  // SPREADSHEET_PROPERTYCOLUMNWIDTHSPY_H

