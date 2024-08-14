/********************************************************************************
** Form generated from reading UI file 'cadastroaluno.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROALUNO_H
#define UI_CADASTROALUNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastroAluno
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QWidget *tab_2;
    QWidget *tab_5;

    void setupUi(QDialog *CadastroAluno)
    {
        if (CadastroAluno->objectName().isEmpty())
            CadastroAluno->setObjectName(QString::fromUtf8("CadastroAluno"));
        CadastroAluno->resize(601, 468);
        gridLayout_2 = new QGridLayout(CadastroAluno);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(CadastroAluno);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 70, 36, 17));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(CadastroAluno);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CadastroAluno);
    } // setupUi

    void retranslateUi(QDialog *CadastroAluno)
    {
        CadastroAluno->setWindowTitle(QCoreApplication::translate("CadastroAluno", "Cadastro", nullptr));
        label->setText(QCoreApplication::translate("CadastroAluno", "teste", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CadastroAluno", "Aluno", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CadastroAluno", "Funcion\303\241rio", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("CadastroAluno", "Equipamento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroAluno: public Ui_CadastroAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROALUNO_H
