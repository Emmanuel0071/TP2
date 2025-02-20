#include <iostream>
#include "Room.h"
#include "Hotel.h"
#include "Reservation.h"
#include "Client.h"

int main() {
    Room chambre1(101, 1, 120.50);

    std::cout << "Prix initial : " << chambre1.getPrice() << " €" << std::endl;

    chambre1.setPrice(150.00);
    std::cout << "Prix apres modification : " << chambre1.getPrice() << " €" << std::endl;


    std::vector<std::string> rooms = {"101", "102", "103"};
    Hotel hotel("H001", "Grand Palace", "Paris", rooms);

    std::cout << "Chambres initiales : ";
    for (const auto& room : hotel.getRooms()) {
        std::cout << room << " ";
    }
    std::cout << std::endl;

    hotel.addRoom("104");
    std::cout << "Apres ajout de la chambre 104 : ";
    for (const auto& room : hotel.getRooms()) {
        std::cout << room << " ";
    }
    std::cout << std::endl;

    hotel.removeRoom("102");
    std::cout << "Après suppression de la chambre 102 : ";
    for (const auto& room : hotel.getRooms()) {
        std::cout << room << " ";
    }
    std::cout << std::endl;



    Client Thomas("PE", "Emmanuel", "PEYRONNET" );
    std::cout << "id personne"<< Thomas.getidClient() << std::endl;
    std::cout << "nom personne"<< Thomas.getname() << std::endl;
    std::cout << "prenom personne"<< Thomas.getnickname() << std::endl;
    return 0;
}
