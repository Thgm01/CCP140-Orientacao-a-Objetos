#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->dataNascimentoConfig();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dataNascimentoConfig()
{
    ui->dataNascimento->setDate(QDate().currentDate());
    ui->dataNascimento->setMaximumDate(QDate().currentDate());
}

void MainWindow::on_btnCadastrarAluno_clicked()
{

//    Date dataNascimento = Date(ui->dataNascimento->date().day(),
//                              ui->dataNascimento->date().month(),
//                              ui->dataNascimento->date().year());

//    std::string alunoNome = ui->nomeAlunoCadastro->text().toStdString();
//    char alunoSexo = ui->alunoSexo->currentText().toStdString()[0];

//    Student novoAluno = Student(alunoNome, dataNascimento, alunoSexo, );

//    std::cout << "nome: " << novoAluno.getNome() << std::endl;/* << "  Nascimento: " << novoAluno.dataDeNascimento;*/ /*<< "  Sexo: " << novoAluno.sexo << std::endl;*/
//    std::cout << dataNascimento.diffYears(Date()) <<std::endl;
//    std::cout << "teste" << std::endl;

    Date data = Date();
    std::cout << data.getDay() << std::endl;
    std::cout << data.getMonth() << std::endl;
    std::cout << data.getYear() << std::endl;

    Date data2 = Date(22, 10, 2024);

    for(int i : data2.getDate())
    {
        std::cout << i << std::endl;
    }

    std::cout << data2.setYear(1920) << std::endl;
    std::cout << data2.getYear() << std::endl;
}

//Student *MainWindow::recebeInfoAluno()
//{
////    std::string name, Date birthdayDate, char gender,
////                std::string registrationNum, Date registrationDate,
////                Curso course, int semester, Status status

////    std::string alunoNome = ui->nomeAlunoCadastro->text().toStdString();

////    Date dataNascimento = Date(ui->dataNascimento->date().day(),
////                               ui->dataNascimento->date().month(),
////                               ui->dataNascimento->date().year());

////    char alunoSexo = ui->alunoSexo->currentText().toStdString()[0];

////    std::string raAluno = ui->raAlunoCadastro->text().toStdString();

////    Curso curso = static_cast<Curso>(ui->cursoAlunoCadastro->currentIndex());

////    int semestre = ui->semestreAlunoCadastro->text().toInt();

////    Student *aluno = new Student(alunoNome, dataNascimento, alunoSexo, raAluno, Date(), curso, semestre, Status::Ok);

////    return aluno;
//}

