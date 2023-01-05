#include "blad_danych.h"
#include "ui_blad_danych.h"

Blad_danych::Blad_danych(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Blad_danych)
{
    ui->setupUi(this);
}

Blad_danych::~Blad_danych()
{
    delete ui;
}
