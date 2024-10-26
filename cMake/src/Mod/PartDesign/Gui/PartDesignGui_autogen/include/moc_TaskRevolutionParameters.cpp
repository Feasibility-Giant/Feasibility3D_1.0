/****************************************************************************
** Meta object code from reading C++ file 'TaskRevolutionParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskRevolutionParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskRevolutionParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskRevolutionParameters_t {
    QByteArrayData data[12];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskRevolutionParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskRevolutionParameters_t qt_meta_stringdata_PartDesignGui__TaskRevolutionParameters = {
    {
QT_MOC_LITERAL(0, 0, 39), // "PartDesignGui::TaskRevolution..."
QT_MOC_LITERAL(1, 40, 14), // "onAngleChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 15), // "onAngle2Changed"
QT_MOC_LITERAL(4, 72, 13), // "onAxisChanged"
QT_MOC_LITERAL(5, 86, 10), // "onMidplane"
QT_MOC_LITERAL(6, 97, 10), // "onReversed"
QT_MOC_LITERAL(7, 108, 13), // "onModeChanged"
QT_MOC_LITERAL(8, 122, 12), // "onButtonFace"
QT_MOC_LITERAL(9, 135, 7), // "pressed"
QT_MOC_LITERAL(10, 143, 10), // "onFaceName"
QT_MOC_LITERAL(11, 154, 4) // "text"

    },
    "PartDesignGui::TaskRevolutionParameters\0"
    "onAngleChanged\0\0onAngle2Changed\0"
    "onAxisChanged\0onMidplane\0onReversed\0"
    "onModeChanged\0onButtonFace\0pressed\0"
    "onFaceName\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskRevolutionParameters[] = {

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
       1,    1,   59,    2, 0x08 /* Private */,
       3,    1,   62,    2, 0x08 /* Private */,
       4,    1,   65,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       6,    1,   71,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x28 /* Private | MethodCloned */,
      10,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void PartDesignGui::TaskRevolutionParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskRevolutionParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAngleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onAngle2Changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->onAxisChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onMidplane((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onReversed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onButtonFace((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->onButtonFace(); break;
        case 8: _t->onFaceName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskRevolutionParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskSketchBasedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskRevolutionParameters.data,
    qt_meta_data_PartDesignGui__TaskRevolutionParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskRevolutionParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskRevolutionParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskRevolutionParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskSketchBasedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskRevolutionParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskSketchBasedParameters::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PartDesignGui__TaskDlgRevolutionParameters_t {
    QByteArrayData data[1];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgRevolutionParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgRevolutionParameters_t qt_meta_stringdata_PartDesignGui__TaskDlgRevolutionParameters = {
    {
QT_MOC_LITERAL(0, 0, 42) // "PartDesignGui::TaskDlgRevolut..."

    },
    "PartDesignGui::TaskDlgRevolutionParameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgRevolutionParameters[] = {

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

void PartDesignGui::TaskDlgRevolutionParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgRevolutionParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgSketchBasedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgRevolutionParameters.data,
    qt_meta_data_PartDesignGui__TaskDlgRevolutionParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgRevolutionParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgRevolutionParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgRevolutionParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgSketchBasedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgRevolutionParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgSketchBasedParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
