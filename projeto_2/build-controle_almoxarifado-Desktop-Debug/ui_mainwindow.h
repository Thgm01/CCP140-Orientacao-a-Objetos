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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
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
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *raConstultar;
    QLineEdit *raCollaboratorsConsulta;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *btnConsultar;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *raAlunoLabel;
    QLineEdit *raAlunoCadastro;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_6;
    QComboBox *cursoAlunoCadastro;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QSpinBox *semestreAlunoCadastro;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnCadastrarAluno;
    QHBoxLayout *horizontalLayout;
    QLabel *nomeAlunoLable;
    QLineEdit *nomeAlunoCadastro;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QComboBox *alunoSexo;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDateEdit *dataNascimentoAluno;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *telefoneAlunoLabel;
    QLineEdit *telefoneAlunoCadastro;
    QSpacerItem *horizontalSpacer_6;
    QLabel *emailAlunoLabel;
    QLineEdit *emailAlunoCadastro;
    QWidget *tab_7;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_15;
    QLabel *descricaoPatrimonioLabel;
    QTextEdit *descricaoPatrimonioCadastro;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *idPatrimonioLabel;
    QLineEdit *idPatrimonioCadastro;
    QSpacerItem *horizontalSpacer_18;
    QLabel *marcaPatrimonioLabel;
    QLineEdit *marcaPatrimonioCadastro;
    QSpacerItem *horizontalSpacer_19;
    QLabel *modeloPatrimonioLabel;
    QLineEdit *modeloPatrimonioCadastro;
    QPushButton *btnCadastrarPatrimonio;
    QWidget *tab_8;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *nomeFuncionarioLabel;
    QLineEdit *nomeFuncionarioCadastro;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_13;
    QComboBox *funcionarioSexoCadastro;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_14;
    QDateEdit *dataNascimentoFuncionarioCadastro;
    QHBoxLayout *horizontalLayout_9;
    QLabel *telefoneFuncionarioLabel;
    QLineEdit *telefoneFuncionrioCadastro;
    QSpacerItem *horizontalSpacer_17;
    QLabel *emailFuncionarioLabel;
    QLineEdit *emailFuncionarioCadastro;
    QHBoxLayout *horizontalLayout_4;
    QLabel *nrFuncionarioLabel;
    QLineEdit *nrFuncionarioCadastro;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_8;
    QComboBox *cargoFuncionarioCadastro;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnCadastrarFuncionario;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1115, 600);
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
        gridLayout_6 = new QGridLayout(tab_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        raConstultar = new QLabel(tab_3);
        raConstultar->setObjectName(QString::fromUtf8("raConstultar"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        raConstultar->setFont(font);

        horizontalLayout_11->addWidget(raConstultar);

        raCollaboratorsConsulta = new QLineEdit(tab_3);
        raCollaboratorsConsulta->setObjectName(QString::fromUtf8("raCollaboratorsConsulta"));
        raCollaboratorsConsulta->setMinimumSize(QSize(201, 0));
        QFont font1;
        font1.setPointSize(16);
        raCollaboratorsConsulta->setFont(font1);

        horizontalLayout_11->addWidget(raCollaboratorsConsulta);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_20);


        gridLayout_6->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        btnConsultar = new QPushButton(tab_3);
        btnConsultar->setObjectName(QString::fromUtf8("btnConsultar"));

        gridLayout_6->addWidget(btnConsultar, 2, 0, 1, 1);

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
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        raAlunoLabel = new QLabel(tab_6);
        raAlunoLabel->setObjectName(QString::fromUtf8("raAlunoLabel"));
        raAlunoLabel->setFont(font);

        horizontalLayout_2->addWidget(raAlunoLabel);

        raAlunoCadastro = new QLineEdit(tab_6);
        raAlunoCadastro->setObjectName(QString::fromUtf8("raAlunoCadastro"));
        raAlunoCadastro->setMinimumSize(QSize(0, 0));
        raAlunoCadastro->setMaximumSize(QSize(166, 100));
        raAlunoCadastro->setFont(font);
        raAlunoCadastro->setLayoutDirection(Qt::LeftToRight);
        raAlunoCadastro->setInputMethodHints(Qt::ImhDigitsOnly);
        raAlunoCadastro->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(raAlunoCadastro);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_2->addWidget(label_6);

        cursoAlunoCadastro = new QComboBox(tab_6);
        cursoAlunoCadastro->addItem(QString());
        cursoAlunoCadastro->addItem(QString());
        cursoAlunoCadastro->addItem(QString());
        cursoAlunoCadastro->addItem(QString());
        cursoAlunoCadastro->addItem(QString());
        cursoAlunoCadastro->addItem(QString());
        cursoAlunoCadastro->setObjectName(QString::fromUtf8("cursoAlunoCadastro"));
        cursoAlunoCadastro->setMinimumSize(QSize(147, 0));

        horizontalLayout_2->addWidget(cursoAlunoCadastro);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_2->addWidget(label_7);

        semestreAlunoCadastro = new QSpinBox(tab_6);
        semestreAlunoCadastro->setObjectName(QString::fromUtf8("semestreAlunoCadastro"));
        semestreAlunoCadastro->setMinimum(1);
        semestreAlunoCadastro->setMaximum(12);

        horizontalLayout_2->addWidget(semestreAlunoCadastro);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_4->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        btnCadastrarAluno = new QPushButton(tab_6);
        btnCadastrarAluno->setObjectName(QString::fromUtf8("btnCadastrarAluno"));

        gridLayout_4->addWidget(btnCadastrarAluno, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nomeAlunoLable = new QLabel(tab_6);
        nomeAlunoLable->setObjectName(QString::fromUtf8("nomeAlunoLable"));
        nomeAlunoLable->setFont(font);

        horizontalLayout->addWidget(nomeAlunoLable);

        nomeAlunoCadastro = new QLineEdit(tab_6);
        nomeAlunoCadastro->setObjectName(QString::fromUtf8("nomeAlunoCadastro"));
        nomeAlunoCadastro->setMinimumSize(QSize(435, 0));
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

        dataNascimentoAluno = new QDateEdit(tab_6);
        dataNascimentoAluno->setObjectName(QString::fromUtf8("dataNascimentoAluno"));
        dataNascimentoAluno->setFont(font1);
        dataNascimentoAluno->setMinimumTime(QTime(0, 0, 0));
        dataNascimentoAluno->setCalendarPopup(true);
        dataNascimentoAluno->setCurrentSectionIndex(0);
        dataNascimentoAluno->setTimeSpec(Qt::LocalTime);
        dataNascimentoAluno->setDate(QDate(2001, 1, 1));

        horizontalLayout->addWidget(dataNascimentoAluno);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        telefoneAlunoLabel = new QLabel(tab_6);
        telefoneAlunoLabel->setObjectName(QString::fromUtf8("telefoneAlunoLabel"));
        telefoneAlunoLabel->setFont(font);

        horizontalLayout_3->addWidget(telefoneAlunoLabel);

        telefoneAlunoCadastro = new QLineEdit(tab_6);
        telefoneAlunoCadastro->setObjectName(QString::fromUtf8("telefoneAlunoCadastro"));
        telefoneAlunoCadastro->setFont(font1);

        horizontalLayout_3->addWidget(telefoneAlunoCadastro);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        emailAlunoLabel = new QLabel(tab_6);
        emailAlunoLabel->setObjectName(QString::fromUtf8("emailAlunoLabel"));
        emailAlunoLabel->setFont(font);

        horizontalLayout_3->addWidget(emailAlunoLabel);

        emailAlunoCadastro = new QLineEdit(tab_6);
        emailAlunoCadastro->setObjectName(QString::fromUtf8("emailAlunoCadastro"));
        emailAlunoCadastro->setFont(font1);

        horizontalLayout_3->addWidget(emailAlunoCadastro);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_8 = new QGridLayout(tab_7);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        descricaoPatrimonioLabel = new QLabel(tab_7);
        descricaoPatrimonioLabel->setObjectName(QString::fromUtf8("descricaoPatrimonioLabel"));
        descricaoPatrimonioLabel->setFont(font);

        horizontalLayout_15->addWidget(descricaoPatrimonioLabel);

        descricaoPatrimonioCadastro = new QTextEdit(tab_7);
        descricaoPatrimonioCadastro->setObjectName(QString::fromUtf8("descricaoPatrimonioCadastro"));

        horizontalLayout_15->addWidget(descricaoPatrimonioCadastro);


        gridLayout_8->addLayout(horizontalLayout_15, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 194, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_5, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        idPatrimonioLabel = new QLabel(tab_7);
        idPatrimonioLabel->setObjectName(QString::fromUtf8("idPatrimonioLabel"));
        idPatrimonioLabel->setFont(font);

        horizontalLayout_10->addWidget(idPatrimonioLabel);

        idPatrimonioCadastro = new QLineEdit(tab_7);
        idPatrimonioCadastro->setObjectName(QString::fromUtf8("idPatrimonioCadastro"));
        idPatrimonioCadastro->setMinimumSize(QSize(201, 0));
        idPatrimonioCadastro->setFont(font1);

        horizontalLayout_10->addWidget(idPatrimonioCadastro);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_18);

        marcaPatrimonioLabel = new QLabel(tab_7);
        marcaPatrimonioLabel->setObjectName(QString::fromUtf8("marcaPatrimonioLabel"));
        marcaPatrimonioLabel->setFont(font);

        horizontalLayout_10->addWidget(marcaPatrimonioLabel);

        marcaPatrimonioCadastro = new QLineEdit(tab_7);
        marcaPatrimonioCadastro->setObjectName(QString::fromUtf8("marcaPatrimonioCadastro"));
        marcaPatrimonioCadastro->setMinimumSize(QSize(201, 0));
        marcaPatrimonioCadastro->setFont(font1);

        horizontalLayout_10->addWidget(marcaPatrimonioCadastro);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_19);

        modeloPatrimonioLabel = new QLabel(tab_7);
        modeloPatrimonioLabel->setObjectName(QString::fromUtf8("modeloPatrimonioLabel"));
        modeloPatrimonioLabel->setFont(font);

        horizontalLayout_10->addWidget(modeloPatrimonioLabel);

        modeloPatrimonioCadastro = new QLineEdit(tab_7);
        modeloPatrimonioCadastro->setObjectName(QString::fromUtf8("modeloPatrimonioCadastro"));
        modeloPatrimonioCadastro->setMinimumSize(QSize(201, 0));
        modeloPatrimonioCadastro->setFont(font1);

        horizontalLayout_10->addWidget(modeloPatrimonioCadastro);


        gridLayout_8->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        btnCadastrarPatrimonio = new QPushButton(tab_7);
        btnCadastrarPatrimonio->setObjectName(QString::fromUtf8("btnCadastrarPatrimonio"));

        gridLayout_8->addWidget(btnCadastrarPatrimonio, 3, 0, 1, 1);

        tabWidget_3->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_5 = new QGridLayout(tab_8);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        nomeFuncionarioLabel = new QLabel(tab_8);
        nomeFuncionarioLabel->setObjectName(QString::fromUtf8("nomeFuncionarioLabel"));
        nomeFuncionarioLabel->setFont(font);

        horizontalLayout_8->addWidget(nomeFuncionarioLabel);

        nomeFuncionarioCadastro = new QLineEdit(tab_8);
        nomeFuncionarioCadastro->setObjectName(QString::fromUtf8("nomeFuncionarioCadastro"));
        nomeFuncionarioCadastro->setMinimumSize(QSize(435, 0));
        nomeFuncionarioCadastro->setFont(font1);

        horizontalLayout_8->addWidget(nomeFuncionarioCadastro);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        label_13 = new QLabel(tab_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_8->addWidget(label_13);

        funcionarioSexoCadastro = new QComboBox(tab_8);
        funcionarioSexoCadastro->addItem(QString());
        funcionarioSexoCadastro->addItem(QString());
        funcionarioSexoCadastro->addItem(QString());
        funcionarioSexoCadastro->setObjectName(QString::fromUtf8("funcionarioSexoCadastro"));
        funcionarioSexoCadastro->setMinimumSize(QSize(130, 0));
        funcionarioSexoCadastro->setFont(font2);

        horizontalLayout_8->addWidget(funcionarioSexoCadastro);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        label_14 = new QLabel(tab_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        horizontalLayout_8->addWidget(label_14);

        dataNascimentoFuncionarioCadastro = new QDateEdit(tab_8);
        dataNascimentoFuncionarioCadastro->setObjectName(QString::fromUtf8("dataNascimentoFuncionarioCadastro"));
        dataNascimentoFuncionarioCadastro->setFont(font1);
        dataNascimentoFuncionarioCadastro->setMinimumTime(QTime(0, 0, 0));
        dataNascimentoFuncionarioCadastro->setCalendarPopup(true);
        dataNascimentoFuncionarioCadastro->setCurrentSectionIndex(0);
        dataNascimentoFuncionarioCadastro->setTimeSpec(Qt::LocalTime);
        dataNascimentoFuncionarioCadastro->setDate(QDate(2001, 1, 1));

        horizontalLayout_8->addWidget(dataNascimentoFuncionarioCadastro);


        gridLayout_5->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        telefoneFuncionarioLabel = new QLabel(tab_8);
        telefoneFuncionarioLabel->setObjectName(QString::fromUtf8("telefoneFuncionarioLabel"));
        telefoneFuncionarioLabel->setFont(font);

        horizontalLayout_9->addWidget(telefoneFuncionarioLabel);

        telefoneFuncionrioCadastro = new QLineEdit(tab_8);
        telefoneFuncionrioCadastro->setObjectName(QString::fromUtf8("telefoneFuncionrioCadastro"));
        telefoneFuncionrioCadastro->setFont(font1);

        horizontalLayout_9->addWidget(telefoneFuncionrioCadastro);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);

        emailFuncionarioLabel = new QLabel(tab_8);
        emailFuncionarioLabel->setObjectName(QString::fromUtf8("emailFuncionarioLabel"));
        emailFuncionarioLabel->setFont(font);

        horizontalLayout_9->addWidget(emailFuncionarioLabel);

        emailFuncionarioCadastro = new QLineEdit(tab_8);
        emailFuncionarioCadastro->setObjectName(QString::fromUtf8("emailFuncionarioCadastro"));
        emailFuncionarioCadastro->setFont(font1);

        horizontalLayout_9->addWidget(emailFuncionarioCadastro);


        gridLayout_5->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        nrFuncionarioLabel = new QLabel(tab_8);
        nrFuncionarioLabel->setObjectName(QString::fromUtf8("nrFuncionarioLabel"));
        nrFuncionarioLabel->setFont(font);

        horizontalLayout_4->addWidget(nrFuncionarioLabel);

        nrFuncionarioCadastro = new QLineEdit(tab_8);
        nrFuncionarioCadastro->setObjectName(QString::fromUtf8("nrFuncionarioCadastro"));
        nrFuncionarioCadastro->setMinimumSize(QSize(0, 0));
        nrFuncionarioCadastro->setMaximumSize(QSize(166, 100));
        nrFuncionarioCadastro->setFont(font);
        nrFuncionarioCadastro->setLayoutDirection(Qt::LeftToRight);
        nrFuncionarioCadastro->setInputMethodHints(Qt::ImhDigitsOnly);
        nrFuncionarioCadastro->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(nrFuncionarioCadastro);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label_8 = new QLabel(tab_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_4->addWidget(label_8);

        cargoFuncionarioCadastro = new QComboBox(tab_8);
        cargoFuncionarioCadastro->addItem(QString());
        cargoFuncionarioCadastro->addItem(QString());
        cargoFuncionarioCadastro->addItem(QString());
        cargoFuncionarioCadastro->setObjectName(QString::fromUtf8("cargoFuncionarioCadastro"));
        cargoFuncionarioCadastro->setMinimumSize(QSize(147, 0));

        horizontalLayout_4->addWidget(cargoFuncionarioCadastro);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        gridLayout_5->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 3, 0, 1, 1);

        btnCadastrarFuncionario = new QPushButton(tab_8);
        btnCadastrarFuncionario->setObjectName(QString::fromUtf8("btnCadastrarFuncionario"));

        gridLayout_5->addWidget(btnCadastrarFuncionario, 4, 0, 1, 1);

        tabWidget_3->addTab(tab_8, QString());

        gridLayout_3->addWidget(tabWidget_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1115, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        raConstultar->setText(QCoreApplication::translate("MainWindow", "RA", nullptr));
        btnConsultar->setText(QCoreApplication::translate("MainWindow", "Consultar", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Aluno", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Equipamento", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Funcionario", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Consultar", nullptr));
        raAlunoLabel->setText(QCoreApplication::translate("MainWindow", "RA: ", nullptr));
        raAlunoCadastro->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Curso", nullptr));
        cursoAlunoCadastro->setItemText(0, QCoreApplication::translate("MainWindow", "Eng. Aut. e Cont.", nullptr));
        cursoAlunoCadastro->setItemText(1, QCoreApplication::translate("MainWindow", "Eng.  Ele.", nullptr));
        cursoAlunoCadastro->setItemText(2, QCoreApplication::translate("MainWindow", "Eng. de Rob\303\264s", nullptr));
        cursoAlunoCadastro->setItemText(3, QCoreApplication::translate("MainWindow", "Eng. Civil", nullptr));
        cursoAlunoCadastro->setItemText(4, QCoreApplication::translate("MainWindow", "Eng. Mec\303\242nica", nullptr));
        cursoAlunoCadastro->setItemText(5, QCoreApplication::translate("MainWindow", "Cien. da Comp.", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "Semestre", nullptr));
        btnCadastrarAluno->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        nomeAlunoLable->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sexo", nullptr));
        alunoSexo->setItemText(0, QCoreApplication::translate("MainWindow", "N\303\243o Identificar", nullptr));
        alunoSexo->setItemText(1, QCoreApplication::translate("MainWindow", "Masculino", nullptr));
        alunoSexo->setItemText(2, QCoreApplication::translate("MainWindow", "Feminino", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Nascimento", nullptr));
        dataNascimentoAluno->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd/MM/yyyy", nullptr));
        telefoneAlunoLabel->setText(QCoreApplication::translate("MainWindow", "Telefone:", nullptr));
        emailAlunoLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Aluno", nullptr));
        descricaoPatrimonioLabel->setText(QCoreApplication::translate("MainWindow", "Descri\303\247\303\243o", nullptr));
        descricaoPatrimonioCadastro->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        idPatrimonioLabel->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        marcaPatrimonioLabel->setText(QCoreApplication::translate("MainWindow", "Marca", nullptr));
        modeloPatrimonioLabel->setText(QCoreApplication::translate("MainWindow", "Modelo", nullptr));
        btnCadastrarPatrimonio->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Equipamento", nullptr));
        nomeFuncionarioLabel->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Sexo", nullptr));
        funcionarioSexoCadastro->setItemText(0, QCoreApplication::translate("MainWindow", "N\303\243o Identificar", nullptr));
        funcionarioSexoCadastro->setItemText(1, QCoreApplication::translate("MainWindow", "Masculino", nullptr));
        funcionarioSexoCadastro->setItemText(2, QCoreApplication::translate("MainWindow", "Feminino", nullptr));

        label_14->setText(QCoreApplication::translate("MainWindow", "Nascimento", nullptr));
        dataNascimentoFuncionarioCadastro->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd/MM/yyyy", nullptr));
        telefoneFuncionarioLabel->setText(QCoreApplication::translate("MainWindow", "Telefone:", nullptr));
        emailFuncionarioLabel->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        nrFuncionarioLabel->setText(QCoreApplication::translate("MainWindow", "RA: ", nullptr));
        nrFuncionarioCadastro->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Cargo", nullptr));
        cargoFuncionarioCadastro->setItemText(0, QCoreApplication::translate("MainWindow", "Seguran\303\247a", nullptr));
        cargoFuncionarioCadastro->setItemText(1, QCoreApplication::translate("MainWindow", "Almoxarifado", nullptr));
        cargoFuncionarioCadastro->setItemText(2, QCoreApplication::translate("MainWindow", "Professor", nullptr));

        btnCadastrarFuncionario->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Funcionario", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
