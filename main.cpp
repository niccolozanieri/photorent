#include <iostream>

#include "photorent_shop.h"
#include "camera.h"
#include "lens.h"

int main() {

    PhotorentShop indianapolis_shop("Indiana Shop", "Indianapolis");
    Camera camera("A7", "Sony");
    Lens portrait_lens("85mm series G", "Sony", 85, 1.4, 32);
    char product_type;

    std::cout << "Welcome to " << indianapolis_shop.get_name() << "!\n\n";
    std::cout << "Enter 'c' to show available cameras, 'l' for lenses: ";
    std::cin >> product_type;

    if(product_type == 'c') {
        std::cout << "\n\n Available cameras:\n";
        std::cout << "    - Model: " << camera.get_model();
    }

    return 0;
}
