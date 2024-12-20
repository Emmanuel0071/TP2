#include "Room.h"

Room::Room(int _number, int _type, float _price) {
  number = _number;
  type = _type;
  price = _price;
}

int Room::getNumber() const {
  return number;
}

int Room::getType() const {
  return type;
}

float Room::getPrice() const {
  return price;
}

void Room::setPrice(float newPrice) {
  price = newPrice;
}
