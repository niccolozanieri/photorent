//
// Created by niccolo on 04/03/23.
//
#include <string>
#include "lens_brand.h"

#ifndef PHOTORENT_LENS_H
#define PHOTORENT_LENS_H

class Lens {
public:
    explicit Lens(const std::string &model, LensBrand brand, int f_l, float max_a, float min_a);

    std::string get_model() const {
        return model;
    }

    LensBrand get_brand() const {
        return brand;
    }

    float get_price_per_hour() const {
        return price_per_hour;
    }

private:
    std::string model;
    LensBrand brand;
    int focal_length;
    float maximum_aperture;
    float minimum_aperture;
    float price_per_hour{20};
};
#endif //PHOTORENT_LENS_H
