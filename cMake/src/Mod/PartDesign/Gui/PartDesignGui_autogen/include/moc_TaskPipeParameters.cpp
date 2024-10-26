/****************************************************************************
** Meta object code from reading C++ file 'TaskPipeParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskPipeParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskPipeParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskPipeParameters_t {
    QByteArrayData data[7];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskPipeParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskPipeParameters_t qt_meta_stringdata_PartDesignGui__TaskPipeParameters = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PartDesignGui::TaskPipeParame..."
QT_MOC_LITERAL(1, 34, 16), // "onTangentChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 7), // "checked"
QT_MOC_LITERAL(4, 60, 19), // "onTransitionChanged"
QT_MOC_LITERAL(5, 80, 15), // "onProfileButton"
QT_MOC_LITERAL(6, 96, 12) // "onDeleteEdge"

    },
    "PartDesignGui::TaskPipeParameters\0"
    "onTangentChanged\0\0checked\0onTransitionChanged\0"
    "onProfileButton\0onDeleteEdge"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskPipeParameters[] = {

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
       5,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void PartDesignGui::TaskPipeParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskPipeParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTangentChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onTransitionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onProfileButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onDeleteEdge(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskPipeParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskSketchBasedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskPipeParameters.data,
    qt_meta_data_PartDesignGui__TaskPipeParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskPipeParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskPipeParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskPipeParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskSketchBasedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskPipeParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskSketchBasedParameters::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PartDesignGui__TaskPipeOrientation_t {
    QByteArrayData data[10];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskPipeOrientation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskPipeOrientation_t qt_meta_stringdata_PartDesignGui__TaskPipeOrientation = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PartDesignGui::TaskPipeOrient..."
QT_MOC_LITERAL(1, 35, 20), // "onOrientationChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 8), // "updateUI"
QT_MOC_LITERAL(4, 66, 3), // "idx"
QT_MOC_LITERAL(5, 70, 13), // "onClearButton"
QT_MOC_LITERAL(6, 84, 20), // "onCurvelinearChanged"
QT_MOC_LITERAL(7, 105, 7), // "checked"
QT_MOC_LITERAL(8, 113, 17), // "onBinormalChanged"
QT_MOC_LITERAL(9, 131, 12) // "onDeleteItem"

    },
    "PartDesignGui::TaskPipeOrientation\0"
    "onOrientationChanged\0\0updateUI\0idx\0"
    "onClearButton\0onCurvelinearChanged\0"
    "checked\0onBinormalChanged\0onDeleteItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskPipeOrientation[] = {

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
       5,    0,   50,    2, 0x08 /* Private */,
       6,    1,   51,    2, 0x08 /* Private */,
       8,    1,   54,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,

       0        // eod
};

void PartDesignGui::TaskPipeOrientation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskPipeOrientation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onOrientationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateUI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onClearButton(); break;
        case 3: _t->onCurvelinearChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onBinormalChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->onDeleteItem(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskPipeOrientation::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskSketchBasedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskPipeOrientation.data,
    qt_meta_data_PartDesignGui__TaskPipeOrientation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskPipeOrientation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskPipeOrientation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskPipeOrientation.stringdata0))
        return static_cast<void*>(this);
    return TaskSketchBasedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskPipeOrientation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskSketchBasedParameters::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PartDesignGui__TaskPipeScaling_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskPipeScaling_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskPipeScaling_t qt_meta_stringdata_PartDesignGui__TaskPipeScaling = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PartDesignGui::TaskPipeScaling"
QT_MOC_LITERAL(1, 31, 16), // "onScalingChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 8), // "updateUI"
QT_MOC_LITERAL(4, 58, 3), // "idx"
QT_MOC_LITERAL(5, 62, 15), // "onDeleteSection"
QT_MOC_LITERAL(6, 78, 12) // "indexesMoved"

    },
    "PartDesignGui::TaskPipeScaling\0"
    "onScalingChanged\0\0updateUI\0idx\0"
    "onDeleteSection\0indexesMoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskPipeScaling[] = {

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
       3,    1,   37,    2, 0x08 /* Private */,
       5,    0,   40,    2, 0x08 /* Private */,
       6,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PartDesignGui::TaskPipeScaling::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskPipeScaling *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onScalingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateUI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onDeleteSection(); break;
        case 3: _t->indexesMoved(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskPipeScaling::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskSketchBasedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskPipeScaling.data,
    qt_meta_data_PartDesignGui__TaskPipeScaling,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskPipeScaling::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskPipeScaling::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskPipeScaling.stringdata0))
        return static_cast<void*>(this);
    return TaskSketchBasedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskPipeScaling::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskSketchBasedParameters::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PartDesignGui__TaskDlgPipeParameters_t {
    QByteArrayData data[6];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgPipeParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgPipeParameters_t qt_meta_stringdata_PartDesignGui__TaskDlgPipeParameters = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PartDesignGui::TaskDlgPipePar..."
QT_MOC_LITERAL(1, 37, 15), // "onButtonToggled"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 71, 6), // "button"
QT_MOC_LITERAL(5, 78, 7) // "checked"

    },
    "PartDesignGui::TaskDlgPipeParameters\0"
    "onButtonToggled\0\0QAbstractButton*\0"
    "button\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgPipeParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,

       0        // eod
};

void PartDesignGui::TaskDlgPipeParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskDlgPipeParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onButtonToggled((*reinterpret_cast< QAbstractButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgPipeParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgSketchBasedParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgPipeParameters.data,
    qt_meta_data_PartDesignGui__TaskDlgPipeParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgPipeParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgPipeParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgPipeParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgSketchBasedParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgPipeParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgSketchBasedParameters::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
