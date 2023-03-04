#include <iostream>

#include "photorent_shop.h"
#include "camera.h"
#include "lens.h"

int main() {

    PhotorentShop indianapolis_shop("Indiana Shop", "Indianapolis");
    Camera camera("A7", "Sony");
    Lens lens("85mm series G", "Sony", 85, 1.4, 32);
    char product_type;

    std::cout << "Welcome to " << indianapolis_shop.get_name() << "!\n\n";
    std::cout << "Enter 'c' to show available cameras, 'l' for lenses: ";
    std::cin >> product_type;

    do {
        if(product_type == 'c') {
            std::cout << "\n\n Available cameras:\n";
            std::cout << "    - Model: " << camera.get_model() << "  Brand: " << camera.get_brand();
            std::cout << "  - Price per hour: " << camera.get_price_per_hour() << " $" << std::endl;
            break;
        } else if(product_type == 'l') {
            std::cout << "\n\n Available lense:\n";
            std::cout << "    - Model: " << lens.get_model() << "  Brand: " << lens.get_brand();
            std::cout << "  - Price per hour: " << lens.get_price_per_hour() << " $" << std::endl;
            break;
        }
    } while(true);


    return 0;
}
