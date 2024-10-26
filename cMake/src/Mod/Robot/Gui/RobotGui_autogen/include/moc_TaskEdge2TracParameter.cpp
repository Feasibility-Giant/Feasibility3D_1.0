/****************************************************************************
** Meta object code from reading C++ file 'TaskEdge2TracParameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Robot/Gui/TaskEdge2TracParameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskEdge2TracParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobotGui__TaskEdge2TracParameter_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobotGui__TaskEdge2TracParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobotGui__TaskEdge2TracParameter_t qt_meta_stringdata_RobotGui__TaskEdge2TracParameter = {
    {
QT_MOC_LITERAL(0, 0, 32), // "RobotGui::TaskEdge2TracParameter"
QT_MOC_LITERAL(1, 33, 8), // "hideShow"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 18), // "sizingValueChanged"
QT_MOC_LITERAL(4, 62, 5), // "Value"
QT_MOC_LITERAL(5, 68, 18) // "orientationToggled"

    },
    "RobotGui::TaskEdge2TracParameter\0"
    "hideShow\0\0sizingValueChanged\0Value\0"
    "orientationToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobotGui__TaskEdge2TracParameter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void RobotGui::TaskEdge2TracParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskEdge2TracParameter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hideShow(); break;
        case 1: _t->sizingValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->orientationToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobotGui::TaskEdge2TracParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_RobotGui__TaskEdge2TracParameter.data,
    qt_meta_data_RobotGui__TaskEdge2TracParameter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobotGui::TaskEdge2TracParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobotGui::TaskEdge2TracParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobotGui__TaskEdge2TracParameter.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int RobotGui::TaskEdge2TracParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
