/****************************************************************************
** Meta object code from reading C++ file 'LineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Spreadsheet/Gui/LineEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpreadsheetGui__LineEdit_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpreadsheetGui__LineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpreadsheetGui__LineEdit_t qt_meta_stringdata_SpreadsheetGui__LineEdit = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SpreadsheetGui::LineEdit"
QT_MOC_LITERAL(1, 25, 15), // "finishedWithKey"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 3), // "key"
QT_MOC_LITERAL(4, 46, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(5, 68, 9) // "modifiers"

    },
    "SpreadsheetGui::LineEdit\0finishedWithKey\0"
    "\0key\0Qt::KeyboardModifiers\0modifiers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpreadsheetGui__LineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void SpreadsheetGui::LineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LineEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedWithKey((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LineEdit::*)(int , Qt::KeyboardModifiers );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LineEdit::finishedWithKey)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SpreadsheetGui::LineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::ExpressionLineEdit::staticMetaObject>(),
    qt_meta_stringdata_SpreadsheetGui__LineEdit.data,
    qt_meta_data_SpreadsheetGui__LineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpreadsheetGui::LineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpreadsheetGui::LineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpreadsheetGui__LineEdit.stringdata0))
        return static_cast<void*>(this);
    return Gui::ExpressionLineEdit::qt_metacast(_clname);
}

int SpreadsheetGui::LineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::ExpressionLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SpreadsheetGui::LineEdit::finishedWithKey(int _t1, Qt::KeyboardModifiers _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
