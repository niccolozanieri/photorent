//
// Created by niccolo on 04/03/23.
//
#include <string>

#ifndef PHOTORENT_CAMERA_H
#define PHOTORENT_CAMERA_H

class Camera {
public:
    explicit Camera(const std::string &model, const std::string &brand);
private:
    std::string model;
    std::string brand;
};

#endif //PHOTORENT_CAMERA_H
