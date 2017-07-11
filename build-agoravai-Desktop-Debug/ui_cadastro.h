/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

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

class Ui_Cadastro
{
public:
    QLineEdit *pass1;
    QToolButton *clean;
    QPushButton *send;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *back;
    QLineEdit *pass2;
    QLabel *label_4;
    QLineEdit *username;
    QLineEdit *name;
    QLabel *label_5;

    void setupUi(QDialog *Cadastro)
    {
        if (Cadastro->objectName().isEmpty())
            Cadastro->setObjectName(QStringLiteral("Cadastro"));
        Cadastro->resize(342, 385);
        Cadastro->setAcceptDrops(false);
        pass1 = new QLineEdit(Cadastro);
        pass1->setObjectName(QStringLiteral("pass1"));
        pass1->setGeometry(QRect(20, 200, 301, 31));
        pass1->setEchoMode(QLineEdit::Password);
        clean = new QToolButton(Cadastro);
        clean->setObjectName(QStringLiteral("clean"));
        clean->setGeometry(QRect(130, 330, 81, 41));
        send = new QPushButton(Cadastro);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(240, 330, 81, 41));
        label_3 = new QLabel(Cadastro);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 240, 251, 21));
        QFont font;
        font.setFamily(QStringLiteral("STIXVariants"));
        font.setPointSize(16);
        label_3->setFont(font);
        label_2 = new QLabel(Cadastro);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 170, 71, 21));
        label_2->setFont(font);
        back = new QPushButton(Cadastro);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 330, 81, 41));
        pass2 = new QLineEdit(Cadastro);
        pass2->setObjectName(QStringLiteral("pass2"));
        pass2->setGeometry(QRect(20, 270, 301, 31));
        pass2->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(Cadastro);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 30, 71, 21));
        label_4->setFont(font);
        username = new QLineEdit(Cadastro);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(20, 130, 301, 31));
        username->setEchoMode(QLineEdit::Normal);
        name = new QLineEdit(Cadastro);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(20, 60, 301, 31));
        name->setEchoMode(QLineEdit::Normal);
        label_5 = new QLabel(Cadastro);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 100, 141, 21));
        label_5->setFont(font);
        QWidget::setTabOrder(name, username);
        QWidget::setTabOrder(username, pass1);
        QWidget::setTabOrder(pass1, pass2);
        QWidget::setTabOrder(pass2, send);
        QWidget::setTabOrder(send, clean);
        QWidget::setTabOrder(clean, back);

        retranslateUi(Cadastro);

        QMetaObject::connectSlotsByName(Cadastro);
    } // setupUi

    void retranslateUi(QDialog *Cadastro)
    {
        Cadastro->setWindowTitle(QApplication::translate("Cadastro", "Dialog", 0));
        pass1->setPlaceholderText(QApplication::translate("Cadastro", "Digite a senha do usu\303\241rio", 0));
        clean->setText(QString());
        send->setText(QString());
        label_3->setText(QApplication::translate("Cadastro", "Confirma\303\247\303\243o da Senha", 0));
        label_2->setText(QApplication::translate("Cadastro", "Senha", 0));
        back->setText(QString());
        pass2->setPlaceholderText(QApplication::translate("Cadastro", "Repita a senha", 0));
        label_4->setText(QApplication::translate("Cadastro", "Nome", 0));
        username->setPlaceholderText(QApplication::translate("Cadastro", "Digite o username", 0));
        name->setPlaceholderText(QApplication::translate("Cadastro", "Digite o nome do usu\303\241rio", 0));
        label_5->setText(QApplication::translate("Cadastro", "Username", 0));
    } // retranslateUi

};

namespace Ui {
    class Cadastro: public Ui_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
