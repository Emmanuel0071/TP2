#include "Reservation.h"

Reservation::Reservation(
    Date& _startDate,
    int _nightNb,
    const std::string& _idHotel,
    const std::string& _idRoom,
    const std::string& _idClient,
    float _priceNight)
    : startDate(_startDate),
    nightNb(_nightNb),
    idHotel(_idHotel),
    idRoom(_idRoom),
    idClient(_idClient),
    priceNight(_priceNight) {}

Reservation::~Reservation() {}

Date& Reservation::getStartDate() {
    return startDate;
}
int Reservation::getNightNb() const {
    return nightNb;
}
const std::string& Reservation::getIdHotel() const {
    return idHotel;
}
const std::string& Reservation::getIdRoom() const {
    return idRoom;
}
const std::string& Reservation::getIdClient() const {
    return idClient;
}
float Reservation::getPriceNight() const {
    return priceNight;
}
float Reservation::getTotalPrice() const {
    return priceNight * static_cast<float>(nightNb);
}

void Reservation::modifyDate(int day, int month, int year) {
    startDate.modifyDate(day, month, year);
}

void Reservation::modifyNightNb(int number) {
    nightNb = number;
}