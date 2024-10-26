/****************************************************************************
** Meta object code from reading C++ file 'ProgressBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/ProgressBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__ProgressBar_t {
    QByteArrayData data[13];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__ProgressBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__ProgressBar_t qt_meta_stringdata_Gui__ProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Gui::ProgressBar"
QT_MOC_LITERAL(1, 17, 7), // "resetEx"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "setRangeEx"
QT_MOC_LITERAL(4, 37, 7), // "minimum"
QT_MOC_LITERAL(5, 45, 7), // "maximum"
QT_MOC_LITERAL(6, 53, 10), // "setValueEx"
QT_MOC_LITERAL(7, 64, 5), // "value"
QT_MOC_LITERAL(8, 70, 18), // "setMinimumDuration"
QT_MOC_LITERAL(9, 89, 2), // "ms"
QT_MOC_LITERAL(10, 92, 11), // "delayedShow"
QT_MOC_LITERAL(11, 104, 11), // "aboutToShow"
QT_MOC_LITERAL(12, 116, 11) // "aboutToHide"

    },
    "Gui::ProgressBar\0resetEx\0\0setRangeEx\0"
    "minimum\0maximum\0setValueEx\0value\0"
    "setMinimumDuration\0ms\0delayedShow\0"
    "aboutToShow\0aboutToHide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__ProgressBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    2,   50,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x0a /* Public */,
      10,    0,   61,    2, 0x09 /* Protected */,
      11,    0,   62,    2, 0x09 /* Protected */,
      12,    0,   63,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gui::ProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgressBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resetEx(); break;
        case 1: _t->setRangeEx((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setValueEx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setMinimumDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->delayedShow(); break;
        case 5: _t->aboutToShow(); break;
        case 6: _t->aboutToHide(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::ProgressBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QProgressBar::staticMetaObject>(),
    qt_meta_stringdata_Gui__ProgressBar.data,
    qt_meta_data_Gui__ProgressBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::ProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::ProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__ProgressBar.stringdata0))
        return static_cast<void*>(this);
    return QProgressBar::qt_metacast(_clname);
}

int Gui::ProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
