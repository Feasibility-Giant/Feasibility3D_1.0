/****************************************************************************
** Meta object code from reading C++ file 'PropertiesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Spreadsheet/Gui/PropertiesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertiesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpreadsheetGui__PropertiesDialog_t {
    QByteArrayData data[10];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpreadsheetGui__PropertiesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpreadsheetGui__PropertiesDialog_t qt_meta_stringdata_SpreadsheetGui__PropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 32), // "SpreadsheetGui::PropertiesDialog"
QT_MOC_LITERAL(1, 33, 22), // "foregroundColorChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 5), // "color"
QT_MOC_LITERAL(4, 63, 22), // "backgroundColorChanged"
QT_MOC_LITERAL(5, 86, 16), // "alignmentChanged"
QT_MOC_LITERAL(6, 103, 12), // "styleChanged"
QT_MOC_LITERAL(7, 116, 18), // "displayUnitChanged"
QT_MOC_LITERAL(8, 135, 4), // "text"
QT_MOC_LITERAL(9, 140, 12) // "aliasChanged"

    },
    "SpreadsheetGui::PropertiesDialog\0"
    "foregroundColorChanged\0\0color\0"
    "backgroundColorChanged\0alignmentChanged\0"
    "styleChanged\0displayUnitChanged\0text\0"
    "aliasChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpreadsheetGui__PropertiesDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    0,   50,    2, 0x08 /* Private */,
       6,    0,   51,    2, 0x08 /* Private */,
       7,    1,   52,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void SpreadsheetGui::PropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertiesDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->foregroundColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->backgroundColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->alignmentChanged(); break;
        case 3: _t->styleChanged(); break;
        case 4: _t->displayUnitChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->aliasChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SpreadsheetGui::PropertiesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SpreadsheetGui__PropertiesDialog.data,
    qt_meta_data_SpreadsheetGui__PropertiesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpreadsheetGui::PropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpreadsheetGui::PropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadsheetGui__PropertiesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SpreadsheetGui::PropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
