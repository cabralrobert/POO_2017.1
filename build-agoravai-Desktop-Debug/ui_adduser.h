/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_AddUser
{
public:
    QLineEdit *pName;
    QToolButton *clean;
    QPushButton *send;
    QLabel *label_3;
    QPushButton *back;

    void setupUi(QDialog *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName(QStringLiteral("AddUser"));
        AddUser->resize(342, 385);
        pName = new QLineEdit(AddUser);
        pName->setObjectName(QStringLiteral("pName"));
        pName->setGeometry(QRect(20, 60, 301, 31));
        pName->setEchoMode(QLineEdit::Normal);
        clean = new QToolButton(AddUser);
        clean->setObjectName(QStringLiteral("clean"));
        clean->setGeometry(QRect(130, 330, 81, 41));
        send = new QPushButton(AddUser);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(240, 330, 81, 41));
        label_3 = new QLabel(AddUser);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 251, 21));
        QFont font;
        font.setFamily(QStringLiteral("STIXVariants"));
        font.setPointSize(16);
        label_3->setFont(font);
        back = new QPushButton(AddUser);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 330, 81, 41));

        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QDialog *AddUser)
    {
        AddUser->setWindowTitle(QApplication::translate("AddUser", "Dialog", 0));
        pName->setPlaceholderText(QApplication::translate("AddUser", "Digite o username do participante", 0));
        clean->setText(QString());
        send->setText(QString());
        label_3->setText(QApplication::translate("AddUser", "Adicionar Participante", 0));
        back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
