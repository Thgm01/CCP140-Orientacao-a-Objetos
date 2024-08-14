#ifndef PAGINACADASTRO_H
#define PAGINACADASTRO_H

#include <QDialog>

namespace Ui {
class PaginaCadastro;
}

class PaginaCadastro : public QDialog
{
    Q_OBJECT

public:
    explicit PaginaCadastro(QWidget *parent = nullptr);
    ~PaginaCadastro();

private:
    Ui::PaginaCadastro *ui;
};

#endif // PAGINACADASTRO_H
