#pragma once

#include <iostream>
#include <SFML/Audio.hpp>

using namespace std;

class Guitar_effects {
private:

    sf::SoundBuffer buffer;
    sf::Sound sound;
    const sf::Int16* samples_p;
    vector <sf::Int16> samples_vec;
    size_t count;

public:

    Guitar_effects(string file);
    ~Guitar_effects();

    bool load_buffer_from_sampels();
    bool save_buffer_to_file(string file);
    void set_buffer();
    void play();

    void delay_effect(unsigned int delay, double factor);
};
