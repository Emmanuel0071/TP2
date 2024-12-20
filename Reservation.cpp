#include "Reservation.h"

Reservation::Reservation(
    Date& _startDate,
    int _nightNb,
    const std::string& _idHotel,
    const std::string& _idRoom,
    const std::string& _idClient,
    int _price)
    : startDate(_startDate),
    nightNb(_nightNb),
    idHotel(_idHotel),
    idRoom(_idRoom),
    idClient(_idClient),
    price(_price) {}

Reservation::~Reservation()
{
}