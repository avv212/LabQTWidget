#include "mainwindow.h"

#include <QApplication>
class Test
{

public :
    int Info;
    Test(int inf);

};

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
