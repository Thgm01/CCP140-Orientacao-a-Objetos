/********************************************************************************
** Form generated from reading UI file 'cadastraraluno.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRARALUNO_H
#define UI_CADASTRARALUNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastrarAluno
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CadastrarAluno)
    {
        if (CadastrarAluno->objectName().isEmpty())
            CadastrarAluno->setObjectName(QString::fromUtf8("CadastrarAluno"));
        CadastrarAluno->resize(800, 600);
        centralwidget = new QWidget(CadastrarAluno);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 70, 89, 25));
        CadastrarAluno->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CadastrarAluno);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        CadastrarAluno->setMenuBar(menubar);
        statusbar = new QStatusBar(CadastrarAluno);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CadastrarAluno->setStatusBar(statusbar);

        retranslateUi(CadastrarAluno);

        QMetaObject::connectSlotsByName(CadastrarAluno);
    } // setupUi

    void retranslateUi(QMainWindow *CadastrarAluno)
    {
        CadastrarAluno->setWindowTitle(QCoreApplication::translate("CadastrarAluno", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("CadastrarAluno", "tsete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastrarAluno: public Ui_CadastrarAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRARALUNO_H
