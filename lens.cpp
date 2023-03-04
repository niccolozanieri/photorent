//
// Created by niccolo on 04/03/23.
//

#include "lens.h"

lens::lens(const std::string &model, const std::string &brand, int f_l, float max_a, float min_a) {
    this -> model = model;
    this -> brand = brand;
    this -> focal_length = f_l;
    this -> maximum_aperture = max_a;
    this -> minimum_aperture = min_a;
}