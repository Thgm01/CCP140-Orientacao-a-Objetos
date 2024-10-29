#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "utils.h"

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

this->recebeInfoAluno();
}



Student *MainWindow::recebeInfoAluno()
{
    bool error=false;
    // Student(std::string name, Date birthdayDate, char gender,
    //         std::string phone, std::string email,
    //         std::string registrationNum, Date registrationDate,
    //         Course course, int semester, Status status);

    std::string alunoNome = ui->nomeAlunoCadastro->text().toStdString();
    if(!nameIsValid(alunoNome, ui->nomeAlunoLable)) error=true;
    std::cout << alunoNome << std::endl;

    Date dataNascimento = Date(ui->dataNascimento->date().day(),
                              ui->dataNascimento->date().month(),
                              ui->dataNascimento->date().year());
    dataNascimento.printDate();

    char alunoSexo = ui->alunoSexo->currentText().toStdString()[0];
    std::cout << alunoSexo << std::endl;

    std::string phone = ui->telefoneAlunoCadastro->text().toStdString();
    if(!phoneIsValid(phone, ui->telefoneAlunoLabel)) error=true;
    std::cout << phone << std::endl;

    std::string email = ui->emailAlunoCadastro->text().toStdString();
    if(!emailIsValid(email, ui->emailAlunoLabel)) error=true;


    std::string raAluno = ui->raAlunoCadastro->text().toStdString();
    if(!raIsValid(raAluno, ui->raAlunoLabel)) error=true;
    std::cout << raAluno << std::endl;

    Date registrarionDate = Date();
    registrarionDate.printDate();

    Course curso = static_cast<Course>(ui->cursoAlunoCadastro->currentIndex());
    std::cout << static_cast<int>(curso) << std::endl;

    int semestre = ui->semestreAlunoCadastro->text().toInt();

    if(error) return NULL;
    return new Student(alunoNome, dataNascimento, alunoSexo, phone, email, raAluno, registrarionDate, curso, semestre, Status::Ok);
}
