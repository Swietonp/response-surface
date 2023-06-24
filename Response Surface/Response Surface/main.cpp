#include "ResponseSurface.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ResponseSurface w;
    w.show();
    return a.exec();
}
