//
// Created by niccolo on 04/03/23.
//

#include <string>

#ifndef PHOTORENT_PHOTORENT_SHOP_H
#define PHOTORENT_PHOTORENT_SHOP_H

class photorent_shop {
public:
    explicit photorent_shop(const std::string &name, const std::string &location);
private:
    std::string name;
    std::string location;
};
#endif //PHOTORENT_PHOTORENT_SHOP_H
