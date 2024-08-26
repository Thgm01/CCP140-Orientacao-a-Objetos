#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <vector>

#include "paginacadastro.h"
#include "Collaborators/Student/student.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnCadastrarAluno_clicked();

private:
    Ui::MainWindow *ui;
    PaginaCadastro *paginaCadastro;

    void dataNascimentoConfig();



};

#endif // MAINWINDOW_H
