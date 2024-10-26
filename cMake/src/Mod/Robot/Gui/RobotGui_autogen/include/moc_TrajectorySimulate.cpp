/****************************************************************************
** Meta object code from reading C++ file 'TrajectorySimulate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Robot/Gui/TrajectorySimulate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrajectorySimulate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobotGui__TrajectorySimulate_t {
    QByteArrayData data[12];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobotGui__TrajectorySimulate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobotGui__TrajectorySimulate_t qt_meta_stringdata_RobotGui__TrajectorySimulate = {
    {
QT_MOC_LITERAL(0, 0, 28), // "RobotGui::TrajectorySimulate"
QT_MOC_LITERAL(1, 29, 5), // "start"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "stop"
QT_MOC_LITERAL(4, 41, 3), // "run"
QT_MOC_LITERAL(5, 45, 4), // "back"
QT_MOC_LITERAL(6, 50, 7), // "forward"
QT_MOC_LITERAL(7, 58, 3), // "end"
QT_MOC_LITERAL(8, 62, 9), // "timerDone"
QT_MOC_LITERAL(9, 72, 12), // "valueChanged"
QT_MOC_LITERAL(10, 85, 5), // "value"
QT_MOC_LITERAL(11, 91, 1) // "d"

    },
    "RobotGui::TrajectorySimulate\0start\0\0"
    "stop\0run\0back\0forward\0end\0timerDone\0"
    "valueChanged\0value\0d"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobotGui__TrajectorySimulate[] = {

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
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
       9,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Double,   11,

       0        // eod
};

void RobotGui::TrajectorySimulate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrajectorySimulate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->stop(); break;
        case 2: _t->run(); break;
        case 3: _t->back(); break;
        case 4: _t->forward(); break;
        case 5: _t->end(); break;
        case 6: _t->timerDone(); break;
        case 7: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobotGui::TrajectorySimulate::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_RobotGui__TrajectorySimulate.data,
    qt_meta_data_RobotGui__TrajectorySimulate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobotGui::TrajectorySimulate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobotGui::TrajectorySimulate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobotGui__TrajectorySimulate.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RobotGui::TrajectorySimulate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
