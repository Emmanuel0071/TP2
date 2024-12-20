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

bool Date::isValidDate(int day, int month, int year) const {
    if (month >= 1 && month <= 12) {
        int dayCount;
        switch (month) {
            case 1 : dayCount = 31; break;
            case 2 : dayCount = 28 + ((year % 4) == 0); break;
            case 3 : dayCount = 31; break;
            case 4 : dayCount = 30; break;
            case 5 : dayCount = 31; break;
            case 6 : dayCount = 30; break;
            case 7 : dayCount = 31; break;
            case 8 : dayCount = 31; break;
            case 9 : dayCount = 30; break;
            case 10 : dayCount = 31; break;
            case 11 : dayCount = 30; break;
            case 12 : dayCount = 31; break;
            default: return false;
        }
        if (day < 1 || day > dayCount) {
            return false;
        }
        return true;
    }
    return false;
}