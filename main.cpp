#include "View/mainview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ps::MainView w;
    w.show();

    return a.exec();
}
