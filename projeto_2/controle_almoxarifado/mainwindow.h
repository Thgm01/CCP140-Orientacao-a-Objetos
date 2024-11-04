#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <vector>

#include "paginacadastro.h"
#include "Collaborators/Student/student.h"
#include "Collaborators/Employee/employee.h"

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



};

#endif // MAINWINDOW_H
