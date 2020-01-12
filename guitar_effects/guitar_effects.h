#pragma once

#include <iostream>
#include <SFML/Audio.hpp>
#define _USE_MATH_DEFINES
#include <cmath>

#include "FIR-filter-class/filt.h"

using namespace std;

class Guitar_effects {
private:
    //buffer object for samples from track file
    sf::SoundBuffer buffer;
    //sound object for playing track from buffer object
    sf::Sound sound;
    //buffer pointer
    const sf::Int16* samples_p;
    //vector for new samples values
    vector <sf::Int16> samples_vec;
    //size of buffer
    size_t count;

public:

    Guitar_effects();
    ~Guitar_effects();

    //loading samples from file to buffor
    //file - absolute path to the file
    //return true if method completed correctly
    bool load_from_file(string file);

    //loading samples from vector
    //return true if method completed correctly
    bool load_buffer_from_sampels();

    //loading samples from vector who have samples that was process by delay effect method
    //d - delay
    //return true if method completed correctly
    bool load_buffer_from_sampels(int d);

    //saving samples from buffet to file
    //file - absolute path to the file
    //return true if method completed correctly
    bool save_buffer_to_file(string file);

    //before call method play we must set buffer
    void set_buffer(void);

    //return samplerate of track
    unsigned int get_sample_rate(void);

    //playing track
    void play(void);

    //effects methods
    void delay_effect(int delay, double factor, double volume);
    void distortion_effect(double blend, double volume, double range);
    void filter_LPF_effect(double freq);
    void filter_HPF_effect(double freq);
};
