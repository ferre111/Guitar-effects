#include "guitar_effects.h"

Guitar_effects::Guitar_effects(string file){
    buffer.loadFromFile(file);
    samples_p = buffer.getSamples();
    count = buffer.getSampleCount();
}

Guitar_effects::~Guitar_effects() {

}

bool Guitar_effects::load_buffer_from_sampels() {
    return buffer.loadFromSamples(&samples_vec[0], buffer.getSampleCount(), buffer.getChannelCount(), buffer.getSampleRate());
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

void Guitar_effects::delay_effect(unsigned int delay, double factor) {
    sf::Int16 calc;
    double coefficient{ 1 };
    int multiplier{ 1 };

    for (unsigned int i{ 0 }; i < count; i++) {
        if (i > delay * multiplier) {
            multiplier++;
            coefficient /= factor;
        }
        if (multiplier == 1) {
            calc = *samples_p;
            samples_vec.push_back(calc);
        }
        else {
            calc = *samples_p + coefficient * (*(samples_p - delay * (multiplier - 1) - 1));
            samples_vec.push_back(calc);
        }
        samples_p++;
    }
}
