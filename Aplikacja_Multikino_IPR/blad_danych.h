#ifndef BLAD_DANYCH_H
#define BLAD_DANYCH_H

#include <QWidget>

namespace Ui {
class Blad_danych;
}

class Blad_danych : public QWidget
{
    Q_OBJECT
    
public:
    explicit Blad_danych(QWidget *parent = 0);
    ~Blad_danych();
    
private:
    Ui::Blad_danych *ui;
};

#endif // BLAD_DANYCH_H
