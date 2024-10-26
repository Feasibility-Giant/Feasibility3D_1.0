/****************************************************************************
** Meta object code from reading C++ file 'TaskAppearance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/TaskView/TaskAppearance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskAppearance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__TaskView__TaskAppearance_t {
    QByteArrayData data[8];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__TaskView__TaskAppearance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__TaskView__TaskAppearance_t qt_meta_stringdata_Gui__TaskView__TaskAppearance = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Gui::TaskView::TaskAppearance"
QT_MOC_LITERAL(1, 30, 16), // "setupConnections"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 21), // "onChangeModeActivated"
QT_MOC_LITERAL(4, 70, 21), // "onChangePlotActivated"
QT_MOC_LITERAL(5, 92, 26), // "onTransparencyValueChanged"
QT_MOC_LITERAL(6, 119, 23), // "onPointSizeValueChanged"
QT_MOC_LITERAL(7, 143, 23) // "onLineWidthValueChanged"

    },
    "Gui::TaskView::TaskAppearance\0"
    "setupConnections\0\0onChangeModeActivated\0"
    "onChangePlotActivated\0onTransparencyValueChanged\0"
    "onPointSizeValueChanged\0onLineWidthValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__TaskView__TaskAppearance[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       4,    1,   48,    2, 0x08 /* Private */,
       5,    1,   51,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       7,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Gui::TaskView::TaskAppearance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskAppearance *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setupConnections(); break;
        case 1: _t->onChangeModeActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onChangePlotActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onTransparencyValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onPointSizeValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onLineWidthValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::TaskView::TaskAppearance::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskBox::staticMetaObject>(),
    qt_meta_stringdata_Gui__TaskView__TaskAppearance.data,
    qt_meta_data_Gui__TaskView__TaskAppearance,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::TaskView::TaskAppearance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::TaskView::TaskAppearance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__TaskView__TaskAppearance.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionSingleton::ObserverType"))
        return static_cast< Gui::SelectionSingleton::ObserverType*>(this);
    return TaskBox::qt_metacast(_clname);
}

int Gui::TaskView::TaskAppearance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskBox::qt_metacall(_c, _id, _a);
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
