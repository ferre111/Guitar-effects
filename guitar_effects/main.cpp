#include "mainwindow.h"
#include <iostream>

#include <QApplication>
#include <SFML/Audio.hpp>

using namespace std;

int main(int argc, char *argv[]){
    sf::SoundBuffer buffer;
    sf::Sound sound;
    vector<int> vec;
    if (!buffer.loadFromFile("C:\\Karol\\QT_projects\\guitar_effects\\sample.wav"))
        return -1;
    cout << "dsfsdfsdfsdfsdf" << endl;

    sound.setBuffer(buffer);
    sound.play();
    while (1);
    return 0;
}
