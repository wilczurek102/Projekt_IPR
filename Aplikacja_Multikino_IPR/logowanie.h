#ifndef LOGOWANIE_H
#define LOGOWANIE_H

#include <QWidget>


namespace Ui {
class Logowanie;
}

class Logowanie : public QWidget
{
    Q_OBJECT
    
public:
    explicit Logowanie(QWidget *parent = 0);
    ~Logowanie();
    


private:

    Ui::Logowanie *ui;
};

#endif // LOGOWANIE_H
