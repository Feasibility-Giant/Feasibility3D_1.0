/****************************************************************************
** Meta object code from reading C++ file 'DlgDisplayPropertiesImp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Material/Gui/DlgDisplayPropertiesImp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgDisplayPropertiesImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MatGui__DlgDisplayPropertiesImp_t {
    QByteArrayData data[15];
    char stringdata0[372];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MatGui__DlgDisplayPropertiesImp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MatGui__DlgDisplayPropertiesImp_t qt_meta_stringdata_MatGui__DlgDisplayPropertiesImp = {
    {
QT_MOC_LITERAL(0, 0, 31), // "MatGui::DlgDisplayPropertiesImp"
QT_MOC_LITERAL(1, 32, 21), // "onChangeModeActivated"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 21), // "onChangePlotActivated"
QT_MOC_LITERAL(4, 77, 30), // "onSpinTransparencyValueChanged"
QT_MOC_LITERAL(5, 108, 27), // "onSpinPointSizeValueChanged"
QT_MOC_LITERAL(6, 136, 24), // "onButtonLineColorChanged"
QT_MOC_LITERAL(7, 161, 25), // "onButtonPointColorChanged"
QT_MOC_LITERAL(8, 187, 27), // "onSpinLineWidthValueChanged"
QT_MOC_LITERAL(9, 215, 34), // "onSpinLineTransparencyValueCh..."
QT_MOC_LITERAL(10, 250, 31), // "onButtonCustomAppearanceClicked"
QT_MOC_LITERAL(11, 282, 24), // "onButtonColorPlotClicked"
QT_MOC_LITERAL(12, 307, 18), // "onMaterialSelected"
QT_MOC_LITERAL(13, 326, 36), // "std::shared_ptr<Materials::Ma..."
QT_MOC_LITERAL(14, 363, 8) // "material"

    },
    "MatGui::DlgDisplayPropertiesImp\0"
    "onChangeModeActivated\0\0onChangePlotActivated\0"
    "onSpinTransparencyValueChanged\0"
    "onSpinPointSizeValueChanged\0"
    "onButtonLineColorChanged\0"
    "onButtonPointColorChanged\0"
    "onSpinLineWidthValueChanged\0"
    "onSpinLineTransparencyValueChanged\0"
    "onButtonCustomAppearanceClicked\0"
    "onButtonColorPlotClicked\0onMaterialSelected\0"
    "std::shared_ptr<Materials::Material>\0"
    "material"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MatGui__DlgDisplayPropertiesImp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       3,    1,   72,    2, 0x08 /* Private */,
       4,    1,   75,    2, 0x08 /* Private */,
       5,    1,   78,    2, 0x08 /* Private */,
       6,    0,   81,    2, 0x08 /* Private */,
       7,    0,   82,    2, 0x08 /* Private */,
       8,    1,   83,    2, 0x08 /* Private */,
       9,    1,   86,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void MatGui::DlgDisplayPropertiesImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgDisplayPropertiesImp *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onChangeModeActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onChangePlotActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onSpinTransparencyValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onSpinPointSizeValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onButtonLineColorChanged(); break;
        case 5: _t->onButtonPointColorChanged(); break;
        case 6: _t->onSpinLineWidthValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onSpinLineTransparencyValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onButtonCustomAppearanceClicked(); break;
        case 9: _t->onButtonColorPlotClicked(); break;
        case 10: _t->onMaterialSelected((*reinterpret_cast< const std::shared_ptr<Materials::Material>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<Materials::Material> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MatGui::DlgDisplayPropertiesImp::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MatGui__DlgDisplayPropertiesImp.data,
    qt_meta_data_MatGui__DlgDisplayPropertiesImp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MatGui::DlgDisplayPropertiesImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MatGui::DlgDisplayPropertiesImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MatGui__DlgDisplayPropertiesImp.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionSingleton::ObserverType"))
        return static_cast< Gui::SelectionSingleton::ObserverType*>(this);
    return QDialog::qt_metacast(_clname);
}

int MatGui::DlgDisplayPropertiesImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_MatGui__TaskDisplayProperties_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MatGui__TaskDisplayProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MatGui__TaskDisplayProperties_t qt_meta_stringdata_MatGui__TaskDisplayProperties = {
    {
QT_MOC_LITERAL(0, 0, 29) // "MatGui::TaskDisplayProperties"

    },
    "MatGui::TaskDisplayProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MatGui__TaskDisplayProperties[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MatGui::TaskDisplayProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MatGui::TaskDisplayProperties::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_MatGui__TaskDisplayProperties.data,
    qt_meta_data_MatGui__TaskDisplayProperties,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MatGui::TaskDisplayProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MatGui::TaskDisplayProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MatGui__TaskDisplayProperties.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int MatGui::TaskDisplayProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
