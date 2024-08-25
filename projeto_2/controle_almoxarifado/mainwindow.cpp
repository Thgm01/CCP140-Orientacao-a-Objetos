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
    Data dataNascimento = Data(ui->dataNascimento->date().day(),
                              ui->dataNascimento->date().month(),
                              ui->dataNascimento->date().year());

    std::string alunoNome = ui->nomeAlunoCadastro->text().toStdString();
    char alunoSexo = ui->alunoSexo->currentText().toStdString()[0];

    Aluno novoAluno = Aluno(alunoNome, dataNascimento, alunoSexo);

    std::cout << "nome: " << novoAluno.getNome() << std::endl;/* << "  Nascimento: " << novoAluno.dataDeNascimento;*/ /*<< "  Sexo: " << novoAluno.sexo << std::endl;*/

}

