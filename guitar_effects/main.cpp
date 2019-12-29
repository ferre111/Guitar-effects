#include "mainwindow.h"
#include "guitar_effects.h"

#include <QApplication>
#include <SFML/Audio.hpp>

using namespace std;

int main(int argc, char *argv[]){

    Guitar_effects del("C:\\Karol\\QT_projects\\guitar_effects\\Guitar-effects\\guitar_effects\\C#3.wav");

    int d = 10000;
    del.delay_effect(d, sqrt(2));
    if (!del.load_buffer_from_sampels(d)) return -1;
    if (!del.save_buffer_to_file("C#3_e.wav")) return -1;
    del.set_buffer();
    del.play();

    cin.ignore();
    return 0;
}
