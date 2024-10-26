/****************************************************************************
** Meta object code from reading C++ file 'TaskRobot6Axis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Robot/Gui/TaskRobot6Axis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskRobot6Axis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobotGui__TaskRobot6Axis_t {
    QByteArrayData data[19];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobotGui__TaskRobot6Axis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobotGui__TaskRobot6Axis_t qt_meta_stringdata_RobotGui__TaskRobot6Axis = {
    {
QT_MOC_LITERAL(0, 0, 24), // "RobotGui::TaskRobot6Axis"
QT_MOC_LITERAL(1, 25, 7), // "setAxis"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 2), // "A1"
QT_MOC_LITERAL(4, 37, 2), // "A2"
QT_MOC_LITERAL(5, 40, 2), // "A3"
QT_MOC_LITERAL(6, 43, 2), // "A4"
QT_MOC_LITERAL(7, 46, 2), // "A5"
QT_MOC_LITERAL(8, 49, 2), // "A6"
QT_MOC_LITERAL(9, 52, 15), // "Base::Placement"
QT_MOC_LITERAL(10, 68, 3), // "Tcp"
QT_MOC_LITERAL(11, 72, 14), // "changeSliderA1"
QT_MOC_LITERAL(12, 87, 5), // "value"
QT_MOC_LITERAL(13, 93, 14), // "changeSliderA2"
QT_MOC_LITERAL(14, 108, 14), // "changeSliderA3"
QT_MOC_LITERAL(15, 123, 14), // "changeSliderA4"
QT_MOC_LITERAL(16, 138, 14), // "changeSliderA5"
QT_MOC_LITERAL(17, 153, 14), // "changeSliderA6"
QT_MOC_LITERAL(18, 168, 18) // "createPlacementDlg"

    },
    "RobotGui::TaskRobot6Axis\0setAxis\0\0A1\0"
    "A2\0A3\0A4\0A5\0A6\0Base::Placement\0Tcp\0"
    "changeSliderA1\0value\0changeSliderA2\0"
    "changeSliderA3\0changeSliderA4\0"
    "changeSliderA5\0changeSliderA6\0"
    "createPlacementDlg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobotGui__TaskRobot6Axis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    7,   54,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      14,    1,   75,    2, 0x0a /* Public */,
      15,    1,   78,    2, 0x0a /* Public */,
      16,    1,   81,    2, 0x0a /* Public */,
      17,    1,   84,    2, 0x0a /* Public */,
      18,    0,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 9,    3,    4,    5,    6,    7,    8,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

       0        // eod
};

void RobotGui::TaskRobot6Axis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskRobot6Axis *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setAxis((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< const Base::Placement(*)>(_a[7]))); break;
        case 1: _t->changeSliderA1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->changeSliderA2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->changeSliderA3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changeSliderA4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->changeSliderA5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->changeSliderA6((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->createPlacementDlg(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobotGui::TaskRobot6Axis::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_RobotGui__TaskRobot6Axis.data,
    qt_meta_data_RobotGui__TaskRobot6Axis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobotGui::TaskRobot6Axis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobotGui::TaskRobot6Axis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobotGui__TaskRobot6Axis.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int RobotGui::TaskRobot6Axis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
