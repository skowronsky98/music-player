#include "mainwindow.h"

#include <QApplication>


#include "dbconnection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Banger Player");
    w.show();

    DBConnection db;



    return a.exec();
}
