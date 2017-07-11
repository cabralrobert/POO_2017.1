/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *send;
    QPushButton *pushButton_2;
    QLineEdit *pass;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *icon;
    QLineEdit *login;
    QCheckBox *checkBox;
    QToolButton *account;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setEnabled(true);
        Widget->resize(342, 385);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../icons/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral("../icons/send.png"), QSize(), QIcon::Normal, QIcon::On);
        Widget->setProperty("send", QVariant(icon1));
        send = new QPushButton(Widget);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(240, 330, 81, 41));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 330, 81, 41));
        pass = new QLineEdit(Widget);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setGeometry(QRect(20, 260, 301, 31));
        pass->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 160, 71, 21));
        QFont font;
        font.setFamily(QStringLiteral("STIXVariants"));
        font.setPointSize(16);
        label_2->setFont(font);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 230, 71, 21));
        label_3->setFont(font);
        icon = new QLabel(Widget);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(120, 40, 161, 111));
        login = new QLineEdit(Widget);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(20, 190, 301, 31));
        login->setEchoMode(QLineEdit::Normal);
        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(194, 300, 131, 20));
        checkBox->setAcceptDrops(false);
        checkBox->setInputMethodHints(Qt::ImhNone);
        account = new QToolButton(Widget);
        account->setObjectName(QStringLiteral("account"));
        account->setGeometry(QRect(130, 330, 81, 41));
        QWidget::setTabOrder(login, pass);
        QWidget::setTabOrder(pass, checkBox);
        QWidget::setTabOrder(checkBox, send);
        QWidget::setTabOrder(send, account);
        QWidget::setTabOrder(account, pushButton_2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        send->setText(QString());
        pushButton_2->setText(QString());
        pass->setPlaceholderText(QApplication::translate("Widget", "Digite sua senha", 0));
        label_2->setText(QApplication::translate("Widget", "Login", 0));
        label_3->setText(QApplication::translate("Widget", "Senha", 0));
        icon->setText(QString());
        login->setPlaceholderText(QApplication::translate("Widget", "Digite seu login", 0));
        checkBox->setText(QApplication::translate("Widget", "memorizar senha", 0));
        account->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
