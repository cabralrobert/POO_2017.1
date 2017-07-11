/********************************************************************************
** Form generated from reading UI file 'grupos.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRUPOS_H
#define UI_GRUPOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Grupos
{
public:
    QPushButton *pushButton;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QPushButton *refresh;

    void setupUi(QDialog *Grupos)
    {
        if (Grupos->objectName().isEmpty())
            Grupos->setObjectName(QStringLiteral("Grupos"));
        Grupos->resize(342, 385);
        pushButton = new QPushButton(Grupos);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 330, 81, 41));
        listWidget = new QListWidget(Grupos);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 60, 301, 251));
        pushButton_2 = new QPushButton(Grupos);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 10, 81, 41));
        refresh = new QPushButton(Grupos);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(20, 10, 81, 41));
        QWidget::setTabOrder(listWidget, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton);

        retranslateUi(Grupos);

        QMetaObject::connectSlotsByName(Grupos);
    } // setupUi

    void retranslateUi(QDialog *Grupos)
    {
        Grupos->setWindowTitle(QApplication::translate("Grupos", "Dialog", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        refresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Grupos: public Ui_Grupos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRUPOS_H
