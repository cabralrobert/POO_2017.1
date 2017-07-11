/********************************************************************************
** Form generated from reading UI file 'conversa.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSA_H
#define UI_CONVERSA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Conversa
{
public:
    QPushButton *back;
    QPushButton *send;
    QTextEdit *display;
    QTextEdit *text;
    QPushButton *addUser;

    void setupUi(QDialog *Conversa)
    {
        if (Conversa->objectName().isEmpty())
            Conversa->setObjectName(QStringLiteral("Conversa"));
        Conversa->resize(341, 385);
        back = new QPushButton(Conversa);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 10, 61, 31));
        send = new QPushButton(Conversa);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(260, 330, 61, 41));
        display = new QTextEdit(Conversa);
        display->setObjectName(QStringLiteral("display"));
        display->setGeometry(QRect(20, 50, 301, 271));
        display->setReadOnly(true);
        text = new QTextEdit(Conversa);
        text->setObjectName(QStringLiteral("text"));
        text->setGeometry(QRect(20, 330, 231, 41));
        addUser = new QPushButton(Conversa);
        addUser->setObjectName(QStringLiteral("addUser"));
        addUser->setGeometry(QRect(260, 10, 61, 31));
        QWidget::setTabOrder(text, send);
        QWidget::setTabOrder(send, addUser);
        QWidget::setTabOrder(addUser, back);
        QWidget::setTabOrder(back, display);

        retranslateUi(Conversa);

        QMetaObject::connectSlotsByName(Conversa);
    } // setupUi

    void retranslateUi(QDialog *Conversa)
    {
        Conversa->setWindowTitle(QApplication::translate("Conversa", "Dialog", 0));
        back->setText(QString());
        send->setText(QString());
        addUser->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Conversa: public Ui_Conversa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSA_H
