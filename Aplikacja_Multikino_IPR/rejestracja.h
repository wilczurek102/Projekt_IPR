#ifndef REJESTRACJA_H
#define REJESTRACJA_H

#include <QWidget>

namespace Ui {
class Rejestracja;
}

class Rejestracja : public QWidget
{
    Q_OBJECT
    
public:
    explicit Rejestracja(QWidget *parent = 0);
    ~Rejestracja();
    
private:
    Ui::Rejestracja *ui;
};

#endif // REJESTRACJA_H
