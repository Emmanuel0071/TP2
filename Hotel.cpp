#include "Hotel.h"

Hotel::Hotel(std::string ID, std::string name, std::string city, std::vector<std::string> rooms) {
    _ID = ID;
    _name = name;
    _city = city;
    _rooms = rooms;
}

std::string Hotel::getID() {
    return _ID;
}

std::string Hotel::getName() {
    return _name;
}

std::string Hotel::getCity() {
    return _city;
}

std::vector<std::string> Hotel::getRooms() {
    return _rooms;
}

void Hotel::addRoom(const std::string& room) {
    _rooms.push_back(room);
}

void Hotel::removeRoom(const std::string& room) {
    for (int i = 0; i < _rooms.size(); ++i) {
        if (_rooms[i] == room) {
            _rooms.erase(_rooms.begin() + i);
            break;
        }
    }