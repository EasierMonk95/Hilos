#ifndef HIJODIALOG_H
#define HIJODIALOG_H

#include <QDialog>

namespace Ui {
class HijoDialog;
}

class Thread_numeros;

class HijoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit HijoDialog(QWidget *parent = nullptr);
    ~HijoDialog();

private:
    Ui::HijoDialog *ui;
    Thread_numeros *mThread;
};

#endif // HIJODIALOG_H
