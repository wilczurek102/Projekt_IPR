#include "ekran_startowy.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ekran_Startowy w;
    w.show();
    
    return a.exec();
}
