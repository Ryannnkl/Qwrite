#include "qwriteapplication.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWriteApplication window;
    window.setWindowTitle("QWrite");

    window.show();
    return app.exec();
}
