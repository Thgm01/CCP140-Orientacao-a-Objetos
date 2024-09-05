/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label_4;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nomeAlunoCadastro;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QComboBox *alunoSexo;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDateEdit *dataNascimento;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *raAlunoCadastro;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnCadastrarAluno;
    QSpacerItem *verticalSpacer;
    QWidget *tab_7;
    QWidget *tab_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1044, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 150, 65, 33));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_2->addTab(tab_5, QString());

        gridLayout_2->addWidget(tabWidget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_4 = new QGridLayout(tab_6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        nomeAlunoCadastro = new QLineEdit(tab_6);
        nomeAlunoCadastro->setObjectName(QString::fromUtf8("nomeAlunoCadastro"));
        nomeAlunoCadastro->setMinimumSize(QSize(435, 0));
        QFont font1;
        font1.setPointSize(16);
        nomeAlunoCadastro->setFont(font1);

        horizontalLayout->addWidget(nomeAlunoCadastro);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(tab_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        alunoSexo = new QComboBox(tab_6);
        alunoSexo->addItem(QString());
        alunoSexo->addItem(QString());
        alunoSexo->addItem(QString());
        alunoSexo->setObjectName(QString::fromUtf8("alunoSexo"));
        alunoSexo->setMinimumSize(QSize(130, 0));
        QFont font2;
        font2.setPointSize(11);
        alunoSexo->setFont(font2);

        horizontalLayout->addWidget(alunoSexo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(tab_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        dataNascimento = new QDateEdit(tab_6);
        dataNascimento->setObjectName(QString::fromUtf8("dataNascimento"));
        dataNascimento->setFont(font1);
        dataNascimento->setMinimumTime(QTime(0, 0, 0));
        dataNascimento->setCalendarPopup(true);
        dataNascimento->setCurrentSectionIndex(0);
        dataNascimento->setTimeSpec(Qt::LocalTime);
        dataNascimento->setDate(QDate(2001, 1, 1));

        horizontalLayout->addWidget(dataNascimento);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        raAlunoCadastro = new QLineEdit(tab_6);
        raAlunoCadastro->setObjectName(QString::fromUtf8("raAlunoCadastro"));
        raAlunoCadastro->setMinimumSize(QSize(0, 0));
        raAlunoCadastro->setMaximumSize(QSize(166, 100));
        raAlunoCadastro->setFont(font);
        raAlunoCadastro->setLayoutDirection(Qt::LeftToRight);
        raAlunoCadastro->setInputMethodHints(Qt::ImhDigitsOnly);
        raAlunoCadastro->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(raAlunoCadastro);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_4->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        btnCadastrarAluno = new QPushButton(tab_6);
        btnCadastrarAluno->setObjectName(QString::fromUtf8("btnCadastrarAluno"));

        gridLayout_4->addWidget(btnCadastrarAluno, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 3, 0, 1, 1);

        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget_3->addTab(tab_8, QString());

        gridLayout_3->addWidget(tabWidget_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1044, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Aluno", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Equipamento", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Funcionario", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Consultar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sexo", nullptr));
        alunoSexo->setItemText(0, QCoreApplication::translate("MainWindow", "N\303\243o Identificar", nullptr));
        alunoSexo->setItemText(1, QCoreApplication::translate("MainWindow", "Masculino", nullptr));
        alunoSexo->setItemText(2, QCoreApplication::translate("MainWindow", "Feminino", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Nascimento", nullptr));
        dataNascimento->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd/MM/yyyy", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "RA: ", nullptr));
        raAlunoCadastro->setText(QString());
        btnCadastrarAluno->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Aluno", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Equipamento", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Funcionario", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
