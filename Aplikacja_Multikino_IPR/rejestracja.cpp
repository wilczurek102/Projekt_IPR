#include "rejestracja.h"
#include "ui_rejestracja.h"

Rejestracja::Rejestracja(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rejestracja)
{
    ui->setupUi(this);
}

Rejestracja::~Rejestracja()
{
    delete ui;
}
