/********************************************************************************
** Form generated from reading UI file 'paginacadastro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGINACADASTRO_H
#define UI_PAGINACADASTRO_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaginaCadastro
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLineEdit *lineEdit;
    QDateEdit *dateEdit;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QDialog *PaginaCadastro)
    {
        if (PaginaCadastro->objectName().isEmpty())
            PaginaCadastro->setObjectName(QString::fromUtf8("PaginaCadastro"));
        PaginaCadastro->resize(769, 598);
        gridLayout = new QGridLayout(PaginaCadastro);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(PaginaCadastro);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 51, 17));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 10, 221, 25));
        dateEdit = new QDateEdit(tab);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(370, 10, 110, 26));
        dateEdit->setMaximumDateTime(QDateTime(QDate(9999, 12, 31), QTime(23, 59, 59)));
        dateEdit->setMinimumDate(QDate(1900, 9, 14));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(PaginaCadastro);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PaginaCadastro);
    } // setupUi

    void retranslateUi(QDialog *PaginaCadastro)
    {
        PaginaCadastro->setWindowTitle(QCoreApplication::translate("PaginaCadastro", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PaginaCadastro", "Nome:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("PaginaCadastro", "Aluno", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PaginaCadastro", "Equipamento", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("PaginaCadastro", "Funcion\303\241rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaginaCadastro: public Ui_PaginaCadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINACADASTRO_H
