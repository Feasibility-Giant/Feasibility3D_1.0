/****************************************************************************
** Meta object code from reading C++ file 'TaskMultiTransformParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskMultiTransformParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskMultiTransformParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskMultiTransformParameters_t {
    QByteArrayData data[15];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskMultiTransformParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskMultiTransformParameters_t qt_meta_stringdata_PartDesignGui__TaskMultiTransformParameters = {
    {
QT_MOC_LITERAL(0, 0, 43), // "PartDesignGui::TaskMultiTrans..."
QT_MOC_LITERAL(1, 44, 17), // "onSubTaskButtonOK"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 17), // "onTransformDelete"
QT_MOC_LITERAL(4, 81, 15), // "onTransformEdit"
QT_MOC_LITERAL(5, 97, 20), // "onTransformActivated"
QT_MOC_LITERAL(6, 118, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 130, 5), // "index"
QT_MOC_LITERAL(8, 136, 22), // "onTransformAddMirrored"
QT_MOC_LITERAL(9, 159, 27), // "onTransformAddLinearPattern"
QT_MOC_LITERAL(10, 187, 26), // "onTransformAddPolarPattern"
QT_MOC_LITERAL(11, 214, 20), // "onTransformAddScaled"
QT_MOC_LITERAL(12, 235, 8), // "onMoveUp"
QT_MOC_LITERAL(13, 244, 10), // "onMoveDown"
QT_MOC_LITERAL(14, 255, 12) // "onUpdateView"

    },
    "PartDesignGui::TaskMultiTransformParameters\0"
    "onSubTaskButtonOK\0\0onTransformDelete\0"
    "onTransformEdit\0onTransformActivated\0"
    "QModelIndex\0index\0onTransformAddMirrored\0"
    "onTransformAddLinearPattern\0"
    "onTransformAddPolarPattern\0"
    "onTransformAddScaled\0onMoveUp\0onMoveDown\0"
    "onUpdateView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskMultiTransformParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void PartDesignGui::TaskMultiTransformParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskMultiTransformParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSubTaskButtonOK(); break;
        case 1: _t->onTransformDelete(); break;
        case 2: _t->onTransformEdit(); break;
        case 3: _t->onTransformActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->onTransformAddMirrored(); break;
        case 5: _t->onTransformAddLinearPattern(); break;
        case 6: _t->onTransformAddPolarPattern(); break;
        case 7: _t->onTransformAddScaled(); break;
        case 8: _t->onMoveUp(); break;
        case 9: _t->onMoveDown(); break;
        case 10: _t->onUpdateView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskMultiTransformParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskTransformedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskMultiTransformParameters.data,
    qt_meta_data_PartDesignGui__TaskMultiTransformParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskMultiTransformParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskMultiTransformParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskMultiTransformParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskMultiTransformParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskTransformedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_PartDesignGui__TaskDlgMultiTransformParameters_t {
    QByteArrayData data[1];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgMultiTransformParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgMultiTransformParameters_t qt_meta_stringdata_PartDesignGui__TaskDlgMultiTransformParameters = {
    {
QT_MOC_LITERAL(0, 0, 46) // "PartDesignGui::TaskDlgMultiTr..."

    },
    "PartDesignGui::TaskDlgMultiTransformParameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgMultiTransformParameters[] = {

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

void PartDesignGui::TaskDlgMultiTransformParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgMultiTransformParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgTransformedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgMultiTransformParameters.data,
    qt_meta_data_PartDesignGui__TaskDlgMultiTransformParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgMultiTransformParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgMultiTransformParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgMultiTransformParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgTransformedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgMultiTransformParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgTransformedParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
