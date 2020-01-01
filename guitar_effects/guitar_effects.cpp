#include "guitar_effects.h"

Guitar_effects::Guitar_effects(){

}

Guitar_effects::~Guitar_effects() {

}

bool Guitar_effects::load_from_file(string file){
    if(!buffer.loadFromFile(file)) return 0;
    samples_p = buffer.getSamples();
    count = buffer.getSampleCount();
    return 1;
}

bool Guitar_effects::load_buffer_from_sampels(int d = -1) {
    if (d == -1) return buffer.loadFromSamples(&samples_vec[0], buffer.getSampleCount(), buffer.getChannelCount(), buffer.getSampleRate());
    else         return buffer.loadFromSamples(&samples_vec[0], count + ceil(count / d) * d, buffer.getChannelCount(), buffer.getSampleRate());
}

bool Guitar_effects::save_buffer_to_file(string file) {
    return buffer.saveToFile(file);
}

void Guitar_effects::set_buffer() {
    sound.setBuffer(buffer);
}

void Guitar_effects::play() {
    sound.play();
}


void Guitar_effects::delay_effect(int delay, double factor) {
    sf::Int16 calc{ 0 };
    vector<double> coefficient{ 1 };
    vector<unsigned int> multiplier { 0 };
    vector<sf::Int16> buffer_ext;

    samples_vec.clear();

    for (unsigned int i{ 0 }; i < count + ceil(count / delay) * delay; i++) {
        if (i >= count) {
            buffer_ext.push_back(0);
        }
        else buffer_ext.push_back(*(samples_p++));
    }

    const sf::Int16* samples_p_e = &buffer_ext[0];

    for (unsigned int i{ 0 }; i < count + ceil(count/delay)*delay; i++) {
        if (i > delay * (multiplier.back()+ 1) && i < count) {
            multiplier.push_back(multiplier.back()+1);
            coefficient.push_back(coefficient.back() / factor);
        }

        for (unsigned int j{ 0 }; j < multiplier.size(); j++) {
            calc += coefficient[j] * (*(samples_p_e - delay * multiplier[j]));
        }

        samples_vec.push_back(calc);
        calc = 0;
        samples_p_e++;
    }
}
