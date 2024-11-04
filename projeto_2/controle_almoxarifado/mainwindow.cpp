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
    ui->dataNascimentoAluno->setDate(QDate().currentDate().addDays(-1));
    ui->dataNascimentoAluno->setMaximumDate(QDate().currentDate().addDays(-1));

    ui->dataNascimentoFuncionarioCadastro->setDate(QDate().currentDate().addDays(-1));
    ui->dataNascimentoFuncionarioCadastro->setMaximumDate(QDate().currentDate().addDays(-1));
}

void MainWindow::on_btnCadastrarAluno_clicked()
{
    Student *aluno = this->recebeInfoAluno();
}

void MainWindow::on_btnCadastrarFuncionario_clicked()
{
    Employee *teset = this->recebeInfoFuncionario();
    if(teset == NULL)
    {
        std::cout << "erro" << std::endl;
    }
}

Student *MainWindow::recebeInfoAluno()
{
    bool error=false;

    std::string alunoNome = ui->nomeAlunoCadastro->text().toStdString();
    if(!nameIsValid(alunoNome, ui->nomeAlunoLable)) error=true;
    // std::cout << alunoNome << std::endl;

    Date dataNascimento = Date(ui->dataNascimentoAluno->date().day(),
                              ui->dataNascimentoAluno->date().month(),
                              ui->dataNascimentoAluno->date().year());
    // dataNascimento.printDate();

    char alunoSexo = ui->alunoSexo->currentText().toStdString()[0];
    // std::cout << alunoSexo << std::endl;

    std::string phone = ui->telefoneAlunoCadastro->text().toStdString();
    if(!phoneIsValid(phone, ui->telefoneAlunoLabel)) error=true;
    // std::cout << phone << std::endl;

    std::string email = ui->emailAlunoCadastro->text().toStdString();
    if(!emailIsValid(email, ui->emailAlunoLabel)) error=true;
    // std::cout << email << std::endl;

    std::string raAluno = ui->raAlunoCadastro->text().toStdString();
    if(!raIsValid(raAluno, ui->raAlunoLabel)) error=true;
    // std::cout << raAluno << std::endl;

    Date registrarionDate = Date();
    // registrarionDate.printDate();

    Course curso = static_cast<Course>(ui->cursoAlunoCadastro->currentIndex());
    // std::cout << static_cast<int>(curso) << std::endl;

    int semestre = ui->semestreAlunoCadastro->text().toInt();
    // std::cout << semestre << std::endl;

    if(error) return NULL;
    return new Student(alunoNome, dataNascimento, alunoSexo, phone, email, raAluno, registrarionDate, curso, semestre, Status::Ok);
}


// // ESTA ERRADO, FAZER DIREITO
Employee *MainWindow::recebeInfoFuncionario()
{
    bool error=false;

    std::string funcionarioNome = ui->nomeFuncionarioCadastro->text().toStdString();
    if(!nameIsValid(funcionarioNome, ui->nomeFuncionarioLabel)) error=true;
    std::cout << funcionarioNome << std::endl;

    Date dataNascimento = Date(ui->dataNascimentoFuncionarioCadastro->date().day(),
                               ui->dataNascimentoFuncionarioCadastro->date().month(),
                               ui->dataNascimentoFuncionarioCadastro->date().year());
    dataNascimento.printDate();

    char funcionarioSexo = ui->funcionarioSexoCadastro->currentText().toStdString()[0];
    std::cout << funcionarioSexo << std::endl;

    std::string phone = ui->telefoneFuncionrioCadastro->text().toStdString();
    if(!phoneIsValid(phone, ui->telefoneFuncionarioLabel)) error=true;
    std::cout << phone << std::endl;

    std::string email = ui->emailFuncionarioCadastro->text().toStdString();
    if(!emailIsValid(email, ui->emailFuncionarioLabel)) error=true;
    std::cout << email << std::endl;

    std::string numeroDeRegistroFuncionario = ui->nrFuncionarioCadastro->text().toStdString();
    if(!raIsValid(numeroDeRegistroFuncionario, ui->nrFuncionarioLabel)) error=true;
    std::cout << numeroDeRegistroFuncionario << std::endl;

    Date registrarionDate = Date();
    registrarionDate.printDate();


    Position cargo = static_cast<Position>(ui->cargoFuncionarioCadastro->currentIndex());
    std::cout << static_cast<int>(cargo) << std::endl;

    if(error) return NULL;
    return new Employee(funcionarioNome, dataNascimento, funcionarioSexo, phone, email, numeroDeRegistroFuncionario, cargo);
}
