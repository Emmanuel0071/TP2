#include "Chambre.h"

Chambre::Chambre(int number, std::string type, float price) {
  _number = number;
  _type = type;
  _price = price;
}

int Chambre::getNumber() {
  return _number;
}

std::string Chambre::getType() {
  return _type;
}

float Chambre::getPrice() {
  return _price;
}

void Chambre::setPrice(float newPrice) {
  _price = newPrice;
}
