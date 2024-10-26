/****************************************************************************
** Meta object code from reading C++ file 'VectorEditWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/TechDraw/Gui/Widgets/VectorEditWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VectorEditWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__VectorEditWidget_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__VectorEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__VectorEditWidget_t qt_meta_stringdata_TechDrawGui__VectorEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "TechDrawGui::VectorEditWidget"
QT_MOC_LITERAL(1, 30, 12), // "valueChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 14), // "Base::Vector3d"
QT_MOC_LITERAL(4, 59, 8), // "newValue"
QT_MOC_LITERAL(5, 68, 8), // "setValue"
QT_MOC_LITERAL(6, 77, 16), // "setValueNoNotify"
QT_MOC_LITERAL(7, 94, 23), // "slotExpandButtonToggled"
QT_MOC_LITERAL(8, 118, 7), // "checked"
QT_MOC_LITERAL(9, 126, 17), // "slotXValueChanged"
QT_MOC_LITERAL(10, 144, 17), // "slotYValueChanged"
QT_MOC_LITERAL(11, 162, 17), // "slotZValueChanged"
QT_MOC_LITERAL(12, 180, 13) // "updateDisplay"

    },
    "TechDrawGui::VectorEditWidget\0"
    "valueChanged\0\0Base::Vector3d\0newValue\0"
    "setValue\0setValueNoNotify\0"
    "slotExpandButtonToggled\0checked\0"
    "slotXValueChanged\0slotYValueChanged\0"
    "slotZValueChanged\0updateDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__VectorEditWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x09 /* Protected */,
       9,    1,   66,    2, 0x09 /* Protected */,
      10,    1,   69,    2, 0x09 /* Protected */,
      11,    1,   72,    2, 0x09 /* Protected */,
      12,    0,   75,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,

       0        // eod
};

void TechDrawGui::VectorEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VectorEditWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< Base::Vector3d(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< Base::Vector3d(*)>(_a[1]))); break;
        case 2: _t->setValueNoNotify((*reinterpret_cast< Base::Vector3d(*)>(_a[1]))); break;
        case 3: _t->slotExpandButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotXValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->slotYValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->slotZValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateDisplay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VectorEditWidget::*)(Base::Vector3d );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VectorEditWidget::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::VectorEditWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__VectorEditWidget.data,
    qt_meta_data_TechDrawGui__VectorEditWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::VectorEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::VectorEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__VectorEditWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechDrawGui::VectorEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TechDrawGui::VectorEditWidget::valueChanged(Base::Vector3d _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
