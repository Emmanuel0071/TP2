#ifndef CHAMBRE_H
#define CHAMBRE_H

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int _day, int _month, int _year);
    ~Date();

    const bool isValidDate(int day, int month, int year) const;
};

#endif //CHAMBRE_H