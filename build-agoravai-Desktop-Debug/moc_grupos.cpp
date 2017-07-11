/****************************************************************************
** Meta object code from reading C++ file 'grupos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../agoravai/grupos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grupos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Grupos_t {
    QByteArrayData data[12];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Grupos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Grupos_t qt_meta_stringdata_Grupos = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Grupos"
QT_MOC_LITERAL(1, 7, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "passTime"
QT_MOC_LITERAL(4, 39, 12), // "updateGroups"
QT_MOC_LITERAL(5, 52, 1), // "a"
QT_MOC_LITERAL(6, 54, 21), // "on_listWidget_clicked"
QT_MOC_LITERAL(7, 76, 5), // "index"
QT_MOC_LITERAL(8, 82, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(9, 106, 6), // "update"
QT_MOC_LITERAL(10, 113, 8), // "Message&"
QT_MOC_LITERAL(11, 122, 18) // "on_refresh_clicked"

    },
    "Grupos\0on_pushButton_clicked\0\0passTime\0"
    "updateGroups\0a\0on_listWidget_clicked\0"
    "index\0on_pushButton_2_clicked\0update\0"
    "Message&\0on_refresh_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Grupos[] = {

 // content:
       7,       // revision
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
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QModelIndex,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,

       0        // eod
};

void Grupos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Grupos *_t = static_cast<Grupos *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->passTime(); break;
        //case 2: _t->updateGroups((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_listWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->update((*reinterpret_cast< Message(*)>(_a[1]))); break;
        case 6: _t->on_refresh_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Grupos::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Grupos.data,
      qt_meta_data_Grupos,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Grupos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Grupos::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Grupos.stringdata0))
        return static_cast<void*>(const_cast< Grupos*>(this));
    return QDialog::qt_metacast(_clname);
}

int Grupos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
