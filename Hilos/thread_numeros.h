#ifndef THREAD_NUMEROS_H
#define THREAD_NUMEROS_H

#include <QThread>

class Thread_numeros : public QThread
{
    Q_OBJECT
public:
    explicit Thread_numeros(QObject *parent = nullptr);
    ~Thread_numeros();
signals:
    void numeroNuevo(int);

protected:
    void run();

};

#endif // THREAD_NUMEROS_H
