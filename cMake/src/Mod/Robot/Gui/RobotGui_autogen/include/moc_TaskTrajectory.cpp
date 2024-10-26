/****************************************************************************
** Meta object code from reading C++ file 'TaskTrajectory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Robot/Gui/TaskTrajectory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskTrajectory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobotGui__TaskTrajectory_t {
    QByteArrayData data[21];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobotGui__TaskTrajectory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobotGui__TaskTrajectory_t qt_meta_stringdata_RobotGui__TaskTrajectory = {
    {
QT_MOC_LITERAL(0, 0, 24), // "RobotGui::TaskTrajectory"
QT_MOC_LITERAL(1, 25, 11), // "axisChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 2), // "A1"
QT_MOC_LITERAL(4, 41, 2), // "A2"
QT_MOC_LITERAL(5, 44, 2), // "A3"
QT_MOC_LITERAL(6, 47, 2), // "A4"
QT_MOC_LITERAL(7, 50, 2), // "A5"
QT_MOC_LITERAL(8, 53, 2), // "A6"
QT_MOC_LITERAL(9, 56, 15), // "Base::Placement"
QT_MOC_LITERAL(10, 72, 3), // "Tcp"
QT_MOC_LITERAL(11, 76, 5), // "start"
QT_MOC_LITERAL(12, 82, 4), // "stop"
QT_MOC_LITERAL(13, 87, 3), // "run"
QT_MOC_LITERAL(14, 91, 4), // "back"
QT_MOC_LITERAL(15, 96, 7), // "forward"
QT_MOC_LITERAL(16, 104, 3), // "end"
QT_MOC_LITERAL(17, 108, 9), // "timerDone"
QT_MOC_LITERAL(18, 118, 12), // "valueChanged"
QT_MOC_LITERAL(19, 131, 5), // "value"
QT_MOC_LITERAL(20, 137, 1) // "d"

    },
    "RobotGui::TaskTrajectory\0axisChanged\0"
    "\0A1\0A2\0A3\0A4\0A5\0A6\0Base::Placement\0"
    "Tcp\0start\0stop\0run\0back\0forward\0end\0"
    "timerDone\0valueChanged\0value\0d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobotGui__TaskTrajectory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    7,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,
      16,    0,   84,    2, 0x08 /* Private */,
      17,    0,   85,    2, 0x08 /* Private */,
      18,    1,   86,    2, 0x08 /* Private */,
      18,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 9,    3,    4,    5,    6,    7,    8,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Double,   20,

       0        // eod
};

void RobotGui::TaskTrajectory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskTrajectory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->axisChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< const Base::Placement(*)>(_a[7]))); break;
        case 1: _t->start(); break;
        case 2: _t->stop(); break;
        case 3: _t->run(); break;
        case 4: _t->back(); break;
        case 5: _t->forward(); break;
        case 6: _t->end(); break;
        case 7: _t->timerDone(); break;
        case 8: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskTrajectory::*)(float , float , float , float , float , float , const Base::Placement & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskTrajectory::axisChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobotGui::TaskTrajectory::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_RobotGui__TaskTrajectory.data,
    qt_meta_data_RobotGui__TaskTrajectory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobotGui::TaskTrajectory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobotGui::TaskTrajectory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobotGui__TaskTrajectory.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int RobotGui::TaskTrajectory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void RobotGui::TaskTrajectory::axisChanged(float _t1, float _t2, float _t3, float _t4, float _t5, float _t6, const Base::Placement & _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
