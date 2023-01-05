#include "ekran_startowy.h"
#include "ui_ekran_startowy.h"

Ekran_Startowy::Ekran_Startowy(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ekran_Startowy)
{
    ui->setupUi(this);
}

Ekran_Startowy::~Ekran_Startowy()
{
    delete ui;
}

void Ekran_Startowy::on_pushButton_2_clicked()
{
    ekran_logowania.show();
}

void Ekran_Startowy::on_pushButton_clicked()
{
    ekran_rejestracji.show();
    ekran_bledu.show();
}
