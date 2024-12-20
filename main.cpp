#include <iostream>
#include "Chambre.h"

int main() {
    Chambre chambre1(101, "Double", 120.50);

    std::cout << "Prix initial : " << chambre1.getPrice() << " €" << std::endl;

    chambre1.setPrice(150.00);
    std::cout << "Prix après modification : " << chambre1.getPrice() << " €" << std::endl;

return 0;
}
