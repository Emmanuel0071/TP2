#ifndef RESERVATION_H
#define RESERVATION_H

//#include "Date.h"
#include <string>

class Reservation {
private:
    const Date startDate;
    const int nightNb;
    const std::string idHotel;
    const std::string idRoom;
    const std::string idClient;
    const int price;

public:
    Reservation(
    Date& _startDate,
    int _nightNb,
    const std::string& _idHotel,
    const std::string& _idRoom,
    const std::string& _idClient,
    int _price);

    ~Reservation();
};

#endif //RESERVATION_H