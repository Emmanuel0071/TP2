#ifndef RESERVATION_H
#define RESERVATION_H

#include "Date.h"
#include <string>

class Reservation {
private:
    Date startDate;
    int nightNb;
    std::string idHotel;
    std::string idRoom;
    std::string idClient;
    float priceNight;

public:
    Reservation(
    Date& _startDate,
    int _nightNb,
    const std::string& _idHotel,
    const std::string& _idRoom,
    const std::string& _idClient,
    float _priceNight);

    ~Reservation();

    Date& getStartDate();
    int getNightNb() const;
    const std::string& getIdHotel() const;
    const std::string& getIdRoom() const;
    const std::string& getIdClient() const;
    float getPriceNight() const;

    float getTotalPrice() const;

    void modifyDate(int day, int month, int year);
    void modifyNightNb(int number);

};

#endif //RESERVATION_H