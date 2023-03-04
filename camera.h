//
// Created by niccolo on 04/03/23.
//
#include <string>

#ifndef PHOTORENT_CAMERA_H
#define PHOTORENT_CAMERA_H

class Camera {
public:
    explicit Camera(const std::string &model, const std::string &brand);

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
    float price_per_hour{20};
};

#endif //PHOTORENT_CAMERA_H
