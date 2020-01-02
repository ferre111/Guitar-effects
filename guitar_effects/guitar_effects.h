#pragma once

#include <iostream>
#include <SFML/Audio.hpp>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

class Guitar_effects {
private:

    sf::SoundBuffer buffer;
    sf::Sound sound;
    const sf::Int16* samples_p;
    vector <sf::Int16> samples_vec;
    size_t count;

public:

    Guitar_effects();
    ~Guitar_effects();

    bool load_from_file(string file);
    bool load_buffer_from_sampels(int c);
    bool save_buffer_to_file(string file);
    void set_buffer(void);
    void play(void);

    void delay_effect(int delay, double factor, double volume);
    void distortion_effect(double blend, double volume);
};
