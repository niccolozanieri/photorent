//
// Created by niccolo on 04/03/23.
//
#include <string>

#ifndef PHOTORENT_LENS_H
#define PHOTORENT_LENS_H

class Lens {
public:
    explicit Lens(const std::string &model, const std::string &brand, int f_l, float max_a, float min_a);

    std::string get_model() {
        return model;
    }

    std::string get_brand() {
        return brand;
    }

    float get_price_per_hour() {
        return price_per_hour;
    }

private:
    std::string model;
    std::string brand;
    int focal_length;
    float maximum_aperture;
    float minimum_aperture;
    float price_per_hour{20};
};
#endif //PHOTORENT_LENS_H
