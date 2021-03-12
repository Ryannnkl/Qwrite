#ifndef QWRITEAPPLICATION_H
#define QWRITEAPPLICATION_H

#include <QMainWindow>

class QWriteApplication : public QMainWindow
{
    Q_OBJECT

public:
    QWriteApplication(QWidget *parent = nullptr);
    ~QWriteApplication();
};
#endif // QWRITEAPPLICATION_H
