#include "Room.h"

Room::Room(int _number, int _type, float _price) {
  number = _number;
  type = _type;
  price = _price;
}

const int Room::getNumber() const {
  return number;
}

const int Room::getType() const {
  return type;
}

const float Room::getPrice() const {
  return price;
}

void Room::setPrice(const float newPrice) {
  price = newPrice;
}
