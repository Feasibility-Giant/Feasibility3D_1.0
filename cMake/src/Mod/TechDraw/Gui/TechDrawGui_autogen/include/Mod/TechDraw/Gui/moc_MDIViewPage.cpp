/****************************************************************************
** Meta object code from reading C++ file 'MDIViewPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../src/Mod/TechDraw/Gui/MDIViewPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MDIViewPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__MDIViewPage_t {
    QByteArrayData data[10];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__MDIViewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__MDIViewPage_t qt_meta_stringdata_TechDrawGui__MDIViewPage = {
    {
QT_MOC_LITERAL(0, 0, 24), // "TechDrawGui::MDIViewPage"
QT_MOC_LITERAL(1, 25, 7), // "viewAll"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "saveSVG"
QT_MOC_LITERAL(4, 42, 7), // "saveDXF"
QT_MOC_LITERAL(5, 50, 7), // "savePDF"
QT_MOC_LITERAL(6, 58, 11), // "toggleFrame"
QT_MOC_LITERAL(7, 70, 17), // "toggleKeepUpdated"
QT_MOC_LITERAL(8, 88, 21), // "sceneSelectionChanged"
QT_MOC_LITERAL(9, 110, 8) // "printAll"

    },
    "TechDrawGui::MDIViewPage\0viewAll\0\0"
    "saveSVG\0saveDXF\0savePDF\0toggleFrame\0"
    "toggleKeepUpdated\0sceneSelectionChanged\0"
    "printAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__MDIViewPage[] = {

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
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TechDrawGui::MDIViewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MDIViewPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewAll(); break;
        case 1: _t->saveSVG(); break;
        case 2: _t->saveDXF(); break;
        case 3: _t->savePDF(); break;
        case 4: _t->toggleFrame(); break;
        case 5: _t->toggleKeepUpdated(); break;
        case 6: _t->sceneSelectionChanged(); break;
        case 7: _t->printAll(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::MDIViewPage::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::MDIView::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__MDIViewPage.data,
    qt_meta_data_TechDrawGui__MDIViewPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::MDIViewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::MDIViewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__MDIViewPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    return Gui::MDIView::qt_metacast(_clname);
}

int TechDrawGui::MDIViewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::MDIView::qt_metacall(_c, _id, _a);
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
