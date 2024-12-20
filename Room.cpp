#include "Room.h"

Room::Room(int number, std::string type, float price) {
  _number = number;
  _type = type;
  _price = price;
}

int Room::getNumber() {
  return _number;
}

std::string Room::getType() {
  return _type;
}

float Room::getPrice() {
  return _price;
}

void Room::setPrice(float newPrice) {
  _price = newPrice;
}
