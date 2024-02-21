#include <QtGui/QApplication>
//#include "widget.h"
#include "window.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    Window w;
    w.show();

    return a.exec();
}
