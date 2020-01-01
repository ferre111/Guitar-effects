#include <iostream>
//#include <stdlib.h>
#include <windows.h>

#include <SFML/Audio.hpp>
#include <QApplication>
#include "guitar_effects.h"
#include "mainwindow.h"

using namespace std;

int main(int argc, char* argv[]) {

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
