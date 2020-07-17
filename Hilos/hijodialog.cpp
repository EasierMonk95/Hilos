#include "hijodialog.h"
#include "ui_hijodialog.h"
#include "thread_numeros.h"


HijoDialog::HijoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HijoDialog)
{
    ui->setupUi(this);
    mThread = new Thread_numeros(this);
    mThread->start(QThread::HighestPriority); //Aqui se le da mayor prioridad a mthread para que de esa forma al momento de añadir los números a la lista primero se muestre la ventana y luego como se añaden los números
    connect(mThread, &Thread_numeros::numeroNuevo, [&](int n){ //Se hace a parte el procesos de los numeros
        ui->listWidget->addItem(QString::number(n));
    });

    /*for (int i=0;i<1000000;i++){            //Aqui es donde primero se pone el programa a colocar un millón de número en una lista de la ventana, pero como es muy tardío y la ventana no se abre antes de que termine, se cambia al uso de hilos
        ui->listWidget->addItem(QString::number(i));
    } */
                                                     //para mejorar los tiempos y el que se abra la ventana primero para ver como se ponen los numeros se usa la clase thread_numeros
}

HijoDialog::~HijoDialog()
{
    delete ui;
}
