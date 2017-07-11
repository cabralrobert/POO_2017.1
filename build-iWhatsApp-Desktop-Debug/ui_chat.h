/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QPushButton *pushButton;
    QPlainTextEdit *mensagemUser;
    QPlainTextEdit *mensagens;

    void setupUi(QDialog *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QStringLiteral("Chat"));
        Chat->resize(359, 316);
        pushButton = new QPushButton(Chat);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 250, 51, 51));
        mensagemUser = new QPlainTextEdit(Chat);
        mensagemUser->setObjectName(QStringLiteral("mensagemUser"));
        mensagemUser->setGeometry(QRect(10, 250, 281, 51));
        mensagens = new QPlainTextEdit(Chat);
        mensagens->setObjectName(QStringLiteral("mensagens"));
        mensagens->setGeometry(QRect(10, 30, 331, 211));

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QDialog *Chat)
    {
        Chat->setWindowTitle(QApplication::translate("Chat", "Dialog", 0));
        pushButton->setText(QApplication::translate("Chat", "send", 0));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
