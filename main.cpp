#include <iostream>
#include "Room.h"
#include "Reservation.h"
#include "Client.h"

int main() {
    Room chambre1(101, 1, 120.50);

    std::cout << "Prix initial : " << chambre1.getPrice() << " €" << std::endl;

    chambre1.setPrice(150.00);
    std::cout << "Prix après modification : " << chambre1.getPrice() << " €" << std::endl;

    Date today(20, 12, 2024);


    Client Thomas("PE", "Emmanuel", "PEYRONNET" );
    std::cout << "id personne"<< Thomas.getidClient() << std::endl;
    std::cout << "nom personne"<< Thomas.getname() << std::endl;
    std::cout << "prenom personne"<< Thomas.getnickname() << std::endl;
    return 0;
}
