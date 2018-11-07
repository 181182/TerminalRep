#include "dialogvindu.h"

DialogVindu::DialogVindu(QObject *parent): QObject(parent)
{

}
void DialogVindu::opneVindu(int i){
    switch(i){
    case 1:
        box.setText("Hei1");
        box.exec();
        emit oppdater();
        break;
    case 2:
        box.setText("Hei2");
        box.exec();
        break;
    }
}
