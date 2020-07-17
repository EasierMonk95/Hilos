#include "thread_numeros.h"

Thread_numeros::Thread_numeros(QObject *parent) : QThread(parent)
{

}

Thread_numeros::~Thread_numeros()
{

}

void Thread_numeros::run() // El run() es la funcion que indica que se hará cuando se active el hilo, con este se pone lo que debe hacerse en el hilo mientras se ejecutan otras cosas, esto inicia el hilo para hacer el programa multitareas
{
    for (int i=0;i<1000000;i++){
        emit numeroNuevo(i);
        msleep(100); //Se duerme el programa 100 milisegundos para que poder apreciar la ejecución del programa, puesto que sin este se va demasiado rapido la colocacion de numeros y se crashea.
    }
}
