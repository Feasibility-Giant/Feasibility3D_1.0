/****************************************************************************
** Meta object code from reading C++ file 'QGILeaderLine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../src/Mod/TechDraw/Gui/QGILeaderLine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGILeaderLine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__QGILeaderLine_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__QGILeaderLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__QGILeaderLine_t qt_meta_stringdata_TechDrawGui__QGILeaderLine = {
    {
QT_MOC_LITERAL(0, 0, 26), // "TechDrawGui::QGILeaderLine"
QT_MOC_LITERAL(1, 27, 12), // "editComplete"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 18), // "onLineEditFinished"
QT_MOC_LITERAL(4, 60, 11), // "tipDisplace"
QT_MOC_LITERAL(5, 72, 20), // "std::vector<QPointF>"
QT_MOC_LITERAL(6, 93, 6) // "points"

    },
    "TechDrawGui::QGILeaderLine\0editComplete\0"
    "\0onLineEditFinished\0tipDisplace\0"
    "std::vector<QPointF>\0points"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__QGILeaderLine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF, 0x80000000 | 5,    4,    6,

       0        // eod
};

void TechDrawGui::QGILeaderLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGILeaderLine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->editComplete(); break;
        case 1: _t->onLineEditFinished((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< std::vector<QPointF>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGILeaderLine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGILeaderLine::editComplete)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::QGILeaderLine::staticMetaObject = { {
    QMetaObject::SuperData::link<QGIView::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__QGILeaderLine.data,
    qt_meta_data_TechDrawGui__QGILeaderLine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::QGILeaderLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::QGILeaderLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__QGILeaderLine.stringdata0))
        return static_cast<void*>(this);
    return QGIView::qt_metacast(_clname);
}

int TechDrawGui::QGILeaderLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGIView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TechDrawGui::QGILeaderLine::editComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
