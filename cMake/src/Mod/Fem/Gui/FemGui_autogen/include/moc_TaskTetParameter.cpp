/****************************************************************************
** Meta object code from reading C++ file 'TaskTetParameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskTetParameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskTetParameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__TaskTetParameter_t {
    QByteArrayData data[13];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskTetParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskTetParameter_t qt_meta_stringdata_FemGui__TaskTetParameter = {
    {
QT_MOC_LITERAL(0, 0, 24), // "FemGui::TaskTetParameter"
QT_MOC_LITERAL(1, 25, 12), // "SwitchMethod"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "Value"
QT_MOC_LITERAL(4, 45, 19), // "maxSizeValueChanged"
QT_MOC_LITERAL(5, 65, 19), // "minSizeValueChanged"
QT_MOC_LITERAL(6, 85, 10), // "setQuadric"
QT_MOC_LITERAL(7, 96, 1), // "s"
QT_MOC_LITERAL(8, 98, 13), // "setGrowthRate"
QT_MOC_LITERAL(9, 112, 1), // "v"
QT_MOC_LITERAL(10, 114, 14), // "setSegsPerEdge"
QT_MOC_LITERAL(11, 129, 16), // "setSegsPerRadius"
QT_MOC_LITERAL(12, 146, 11) // "setOptimize"

    },
    "FemGui::TaskTetParameter\0SwitchMethod\0"
    "\0Value\0maxSizeValueChanged\0"
    "minSizeValueChanged\0setQuadric\0s\0"
    "setGrowthRate\0v\0setSegsPerEdge\0"
    "setSegsPerRadius\0setOptimize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskTetParameter[] = {

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
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,
      11,    1,   72,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void FemGui::TaskTetParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskTetParameter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SwitchMethod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->maxSizeValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->minSizeValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setQuadric((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setGrowthRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setSegsPerEdge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setSegsPerRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setOptimize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskTetParameter::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskTetParameter.data,
    qt_meta_data_FemGui__TaskTetParameter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskTetParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskTetParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskTetParameter.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int FemGui::TaskTetParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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