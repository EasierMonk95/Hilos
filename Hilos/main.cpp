#include "maindialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainDialog w;                   //Aqui se encuentra el hilo
    w.show();
    return a.exec();
}
/*En el main se muestra la ventana, pero antes de ello sin usar los threads se pedía que añadiera numeros a la lista, como ese proceso
era muy demorado la ventana no se mostraba, asi que se añadio la clase threadnumeros para poder usar un hilo para que mientras se añaden
los numeros en el hilo, en el nucleo se ejecuta la ventana*/
