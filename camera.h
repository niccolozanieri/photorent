//
// Created by niccolo on 04/03/23.
//
#include <string>
#include "camera_brand.h"

#ifndef PHOTORENT_CAMERA_H
#define PHOTORENT_CAMERA_H

class Camera {
public:
    explicit Camera(const std::string &model, CameraBrand brand);

    std::string get_model() const {
        return model;
    }

    CameraBrand get_brand() const {
        return brand;
    }

    float get_price_per_hour() const {
        return price_per_hour;
    }

private:
    std::string model;
    CameraBrand brand;
    float price_per_hour{20};
};

#endif //PHOTORENT_CAMERA_H
