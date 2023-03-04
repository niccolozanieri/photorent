//
// Created by niccolo on 04/03/23.
//
#include <string>

#ifndef PHOTORENT_CAMERA_H
#define PHOTORENT_CAMERA_H

class camera {
public:
    explicit camera(const std::string &model, const std::string &brand);
private:
    std::string model;
    std::string brand;
    float price_per_hour{20};
};

#endif //PHOTORENT_CAMERA_H
