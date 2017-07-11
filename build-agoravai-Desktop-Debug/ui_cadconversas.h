/********************************************************************************
** Form generated from reading UI file 'cadconversas.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADCONVERSAS_H
#define UI_CADCONVERSAS_H

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

class Ui_CadConversas
{
public:
    QPushButton *back;
    QLabel *label_3;
    QToolButton *clean;
    QLabel *label_2;
    QLineEdit *pName;
    QPushButton *send;
    QLineEdit *icon;
    QLineEdit *gName;
    QLabel *label_4;

    void setupUi(QDialog *CadConversas)
    {
        if (CadConversas->objectName().isEmpty())
            CadConversas->setObjectName(QStringLiteral("CadConversas"));
        CadConversas->resize(342, 385);
        back = new QPushButton(CadConversas);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 330, 81, 41));
        label_3 = new QLabel(CadConversas);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 170, 251, 21));
        QFont font;
        font.setFamily(QStringLiteral("STIXVariants"));
        font.setPointSize(16);
        label_3->setFont(font);
        clean = new QToolButton(CadConversas);
        clean->setObjectName(QStringLiteral("clean"));
        clean->setGeometry(QRect(130, 330, 81, 41));
        label_2 = new QLabel(CadConversas);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 181, 21));
        label_2->setFont(font);
        pName = new QLineEdit(CadConversas);
        pName->setObjectName(QStringLiteral("pName"));
        pName->setGeometry(QRect(20, 200, 301, 31));
        pName->setEchoMode(QLineEdit::Normal);
        send = new QPushButton(CadConversas);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(240, 330, 81, 41));
        icon = new QLineEdit(CadConversas);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(20, 130, 301, 31));
        icon->setEchoMode(QLineEdit::Normal);
        gName = new QLineEdit(CadConversas);
        gName->setObjectName(QStringLiteral("gName"));
        gName->setGeometry(QRect(20, 60, 301, 31));
        gName->setEchoMode(QLineEdit::Normal);
        label_4 = new QLabel(CadConversas);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 30, 181, 21));
        label_4->setFont(font);
        QWidget::setTabOrder(gName, icon);
        QWidget::setTabOrder(icon, pName);
        QWidget::setTabOrder(pName, send);
        QWidget::setTabOrder(send, clean);
        QWidget::setTabOrder(clean, back);

        retranslateUi(CadConversas);

        QMetaObject::connectSlotsByName(CadConversas);
    } // setupUi

    void retranslateUi(QDialog *CadConversas)
    {
        CadConversas->setWindowTitle(QApplication::translate("CadConversas", "Dialog", 0));
        back->setText(QString());
        label_3->setText(QApplication::translate("CadConversas", "Adicionar Participante", 0));
        clean->setText(QString());
        label_2->setText(QApplication::translate("CadConversas", "Icone do Grupo", 0));
        pName->setPlaceholderText(QApplication::translate("CadConversas", "Digite o username do participante", 0));
        send->setText(QString());
        icon->setPlaceholderText(QApplication::translate("CadConversas", "Digite o caminho do icone do grupo", 0));
        gName->setPlaceholderText(QApplication::translate("CadConversas", "Digite o nome do grupo", 0));
        label_4->setText(QApplication::translate("CadConversas", "Nome do Grupo", 0));
    } // retranslateUi

};

namespace Ui {
    class CadConversas: public Ui_CadConversas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADCONVERSAS_H
