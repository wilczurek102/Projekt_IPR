#include "logowanie.h"
#include "ui_logowanie.h"

Logowanie::Logowanie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Logowanie)
{
    ui->setupUi(this);
}

Logowanie::~Logowanie()
{
    delete ui;
}

