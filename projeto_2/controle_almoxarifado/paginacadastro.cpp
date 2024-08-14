#include "paginacadastro.h"
#include "ui_paginacadastro.h"

PaginaCadastro::PaginaCadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PaginaCadastro)
{
    ui->setupUi(this);
}

PaginaCadastro::~PaginaCadastro()
{
    delete ui;
}
