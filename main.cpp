#include "dialog.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Dialog d;
    d.show();

    QObject::connect(&d, &Dialog::checkboxToggled, &w, &MainWindow::toggleEnabled);
    QObject::connect(&d, &Dialog::overrideToggled, &w, &MainWindow::overrideButton);

    return a.exec();
}
