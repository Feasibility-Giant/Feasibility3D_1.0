/****************************************************************************
** Meta object code from reading C++ file 'TaskBooleanParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskBooleanParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskBooleanParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskBooleanParameters_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskBooleanParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskBooleanParameters_t qt_meta_stringdata_PartDesignGui__TaskBooleanParameters = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PartDesignGui::TaskBooleanPar..."
QT_MOC_LITERAL(1, 37, 15), // "onButtonBodyAdd"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 7), // "checked"
QT_MOC_LITERAL(4, 62, 18), // "onButtonBodyRemove"
QT_MOC_LITERAL(5, 81, 13), // "onBodyDeleted"
QT_MOC_LITERAL(6, 95, 13), // "onTypeChanged"
QT_MOC_LITERAL(7, 109, 5) // "index"

    },
    "PartDesignGui::TaskBooleanParameters\0"
    "onButtonBodyAdd\0\0checked\0onButtonBodyRemove\0"
    "onBodyDeleted\0onTypeChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskBooleanParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    0,   40,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void PartDesignGui::TaskBooleanParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskBooleanParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onButtonBodyAdd((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->onButtonBodyRemove((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->onBodyDeleted(); break;
        case 3: _t->onTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskBooleanParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskBooleanParameters.data,
    qt_meta_data_PartDesignGui__TaskBooleanParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskBooleanParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskBooleanParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskBooleanParameters.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int PartDesignGui::TaskBooleanParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_PartDesignGui__TaskDlgBooleanParameters_t {
    QByteArrayData data[1];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgBooleanParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgBooleanParameters_t qt_meta_stringdata_PartDesignGui__TaskDlgBooleanParameters = {
    {
QT_MOC_LITERAL(0, 0, 39) // "PartDesignGui::TaskDlgBoolean..."

    },
    "PartDesignGui::TaskDlgBooleanParameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgBooleanParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PartDesignGui::TaskDlgBooleanParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgBooleanParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgBooleanParameters.data,
    qt_meta_data_PartDesignGui__TaskDlgBooleanParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgBooleanParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgBooleanParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgBooleanParameters.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgBooleanParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
