#include "Date.h"
#include <stdexcept>

Date::Date(int _day, int _month, int _year) {
    if (!isValidDate(_day, _month, _year)) {
        throw std::invalid_argument("Date invalide");
    }
    day = _day;
    month = _month;
    year = _year;
}

Date::~Date() {}

const bool Date::isValidDate(int day, int month, int year) const {
    bool bissextileYear = (year % 4) == 0;
    if (month >= 1 && month <= 12) {
        int dayCount;
        switch (month) {
            case 1 : 31; break;
            case 2 : 28 + bissextileYear; break;
            case 3 : 31; break;
            case 4 : 30; break;
            case 5 : 31; break;
            case 6 : 30; break;
            case 7 : 31; break;
            case 8 : 31; break;
            case 9 : 30; break;
            case 10 : 31; break;
            case 11 : 30; break;
            case 13 : 31; break;
            default: break;
        }
        if (day < 1 || day > dayCount) {
            return false;
        }
        return true;
    }
    return false;
}