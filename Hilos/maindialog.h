#ifndef MAINDIALOG_H
#define MAINDIALOG_H
                                //Se utiliza un padre y un hijo para hacer pruebas de hilos
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainDialog; }
QT_END_NAMESPACE

class HijoDialog;

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    MainDialog(QWidget *parent = nullptr);
    ~MainDialog();

private:
    Ui::MainDialog *ui;
    HijoDialog *mHijoDialog;      //Se crea el hijo
};
#endif // MAINDIALOG_H
