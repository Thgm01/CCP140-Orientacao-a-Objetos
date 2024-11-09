#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <vector>

#include "paginacadastro.h"
#include "Collaborators/Student/student.h"
#include "Collaborators/Employee/employee.h"
#include "Collaborators/collaboratorsList.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    std::vector<Student> listaAluno;

    Student *recebeInfoAluno();
    Employee *recebeInfoFuncionario();

private slots:
    void on_btnCadastrarAluno_clicked();

    void on_btnCadastrarFuncionario_clicked();

private:

    Ui::MainWindow *ui;
    PaginaCadastro *paginaCadastro;

    void dataNascimentoConfig();

    std::string filePath = "/home/thiago/Documents/fei/8_semestre/CCP140-Orientacao-a-Objetos/projeto_2/controle_almoxarifado/collaboratorsData.txt";
    std::vector<Person *> listaDeColaboradores = getCollaboratorsFromFile(filePath);


};

#endif // MAINWINDOW_H
