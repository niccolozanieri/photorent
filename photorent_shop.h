//
// Created by niccolo on 04/03/23.
//

#include <string>

#ifndef PHOTORENT_PHOTORENT_SHOP_H
#define PHOTORENT_PHOTORENT_SHOP_H

class PhotorentShop {
public:
    explicit PhotorentShop(const std::string &name, const std::string &location);

    std::string get_name() {
        return name;
    }
private:
    std::string name;
    std::string location;
};
#endif //PHOTORENT_PHOTORENT_SHOP_H
