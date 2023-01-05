#ifndef EKRAN_STARTOWY_H
#define EKRAN_STARTOWY_H

#include <QMainWindow>
#include <logowanie.h>
#include <rejestracja.h>
#include <blad_danych.h>

namespace Ui {
class Ekran_Startowy;
}

class Ekran_Startowy : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Ekran_Startowy(QWidget *parent = 0);
    ~Ekran_Startowy();
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Rejestracja ekran_rejestracji;
    Logowanie ekran_logowania;
    Blad_danych ekran_bledu;
    Ui::Ekran_Startowy *ui;
};

#endif // EKRAN_STARTOWY_H
