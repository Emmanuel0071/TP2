#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <vector>

class Hotel {
    public:
    Hotel(std::string ID, std::string name, std::string city, std::vector<std::string> rooms);

    void addRoom(const std::string& room);      // Ajouter une chambre
    void removeRoom(const std::string& room);   // Supprimer une chambre

    std::string& getID();
    std::string& getName();
    std::string& getCity();
    std::vector<Room>& getRooms();
    
    private:
    std::string _ID;
    std::string _name;
    std::string _city;
    std::vector<Room> _rooms;

};



#endif //HOTEL_H
