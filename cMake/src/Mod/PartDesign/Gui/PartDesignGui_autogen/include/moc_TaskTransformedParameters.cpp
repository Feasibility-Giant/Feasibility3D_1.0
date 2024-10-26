/****************************************************************************
** Meta object code from reading C++ file 'TaskTransformedParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskTransformedParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskTransformedParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskTransformedParameters_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskTransformedParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskTransformedParameters_t qt_meta_stringdata_PartDesignGui__TaskTransformedParameters = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PartDesignGui::TaskTransforme..."
QT_MOC_LITERAL(1, 41, 12), // "onUpdateView"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 18), // "onButtonAddFeature"
QT_MOC_LITERAL(4, 74, 7), // "checked"
QT_MOC_LITERAL(5, 82, 21), // "onButtonRemoveFeature"
QT_MOC_LITERAL(6, 104, 16), // "onFeatureDeleted"
QT_MOC_LITERAL(7, 121, 12), // "indexesMoved"
QT_MOC_LITERAL(8, 134, 13), // "onModeChanged"
QT_MOC_LITERAL(9, 148, 7) // "mode_id"

    },
    "PartDesignGui::TaskTransformedParameters\0"
    "onUpdateView\0\0onButtonAddFeature\0"
    "checked\0onButtonRemoveFeature\0"
    "onFeatureDeleted\0indexesMoved\0"
    "onModeChanged\0mode_id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskTransformedParameters[] = {

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
       3,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void PartDesignGui::TaskTransformedParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskTransformedParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUpdateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onButtonAddFeature((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onButtonRemoveFeature((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onFeatureDeleted(); break;
        case 4: _t->indexesMoved(); break;
        case 5: _t->onModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskTransformedParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskTransformedParameters.data,
    qt_meta_data_PartDesignGui__TaskTransformedParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskTransformedParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskTransformedParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskTransformedParameters.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    if (!strcmp(_clname, "Gui::DocumentObserver"))
        return static_cast< Gui::DocumentObserver*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int PartDesignGui::TaskTransformedParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PartDesignGui__TaskDlgTransformedParameters_t {
    QByteArrayData data[1];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgTransformedParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgTransformedParameters_t qt_meta_stringdata_PartDesignGui__TaskDlgTransformedParameters = {
    {
QT_MOC_LITERAL(0, 0, 43) // "PartDesignGui::TaskDlgTransfo..."

    },
    "PartDesignGui::TaskDlgTransformedParameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgTransformedParameters[] = {

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

void PartDesignGui::TaskDlgTransformedParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgTransformedParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<PartDesignGui::TaskDlgFeatureParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgTransformedParameters.data,
    qt_meta_data_PartDesignGui__TaskDlgTransformedParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgTransformedParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgTransformedParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgTransformedParameters.stringdata0))
        return static_cast<void*>(this);
    return PartDesignGui::TaskDlgFeatureParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgTransformedParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PartDesignGui::TaskDlgFeatureParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
