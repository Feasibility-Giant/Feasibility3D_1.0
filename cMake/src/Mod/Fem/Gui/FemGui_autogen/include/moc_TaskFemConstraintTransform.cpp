/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraintTransform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskFemConstraintTransform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraintTransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__TaskFemConstraintTransform_t {
    QByteArrayData data[15];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskFemConstraintTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskFemConstraintTransform_t qt_meta_stringdata_FemGui__TaskFemConstraintTransform = {
    {
QT_MOC_LITERAL(0, 0, 34), // "FemGui::TaskFemConstraintTran..."
QT_MOC_LITERAL(1, 35, 18), // "onReferenceDeleted"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 4), // "Rect"
QT_MOC_LITERAL(4, 60, 3), // "Cyl"
QT_MOC_LITERAL(5, 64, 14), // "addToSelection"
QT_MOC_LITERAL(6, 79, 19), // "removeFromSelection"
QT_MOC_LITERAL(7, 99, 12), // "xAxisChanged"
QT_MOC_LITERAL(8, 112, 1), // "x"
QT_MOC_LITERAL(9, 114, 12), // "yAxisChanged"
QT_MOC_LITERAL(10, 127, 1), // "y"
QT_MOC_LITERAL(11, 129, 12), // "zAxisChanged"
QT_MOC_LITERAL(12, 142, 1), // "z"
QT_MOC_LITERAL(13, 144, 12), // "angleChanged"
QT_MOC_LITERAL(14, 157, 1) // "a"

    },
    "FemGui::TaskFemConstraintTransform\0"
    "onReferenceDeleted\0\0Rect\0Cyl\0"
    "addToSelection\0removeFromSelection\0"
    "xAxisChanged\0x\0yAxisChanged\0y\0"
    "zAxisChanged\0z\0angleChanged\0a"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskFemConstraintTransform[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      11,    1,   70,    2, 0x08 /* Private */,
      13,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   14,

       0        // eod
};

void FemGui::TaskFemConstraintTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraintTransform *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeleted(); break;
        case 1: _t->Rect(); break;
        case 2: _t->Cyl(); break;
        case 3: _t->addToSelection(); break;
        case 4: _t->removeFromSelection(); break;
        case 5: _t->xAxisChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->yAxisChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->zAxisChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->angleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskFemConstraintTransform::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskFemConstraintTransform.data,
    qt_meta_data_FemGui__TaskFemConstraintTransform,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskFemConstraintTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraintTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskFemConstraintTransform.stringdata0))
        return static_cast<void*>(this);
    return TaskFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskFemConstraintTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskFemConstraint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskDlgFemConstraintTransform_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskDlgFemConstraintTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskDlgFemConstraintTransform_t qt_meta_stringdata_FemGui__TaskDlgFemConstraintTransform = {
    {
QT_MOC_LITERAL(0, 0, 37) // "FemGui::TaskDlgFemConstraintT..."

    },
    "FemGui::TaskDlgFemConstraintTransform"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskDlgFemConstraintTransform[] = {

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

void FemGui::TaskDlgFemConstraintTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskDlgFemConstraintTransform::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFemConstraint::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskDlgFemConstraintTransform.data,
    qt_meta_data_FemGui__TaskDlgFemConstraintTransform,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskDlgFemConstraintTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraintTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskDlgFemConstraintTransform.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFemConstraint::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraintTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFemConstraint::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
