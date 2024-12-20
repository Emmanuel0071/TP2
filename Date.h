#ifndef DATE_H
#define DATE_H

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int _day, int _month, int _year);
    ~Date();

    bool isValidDate(int day, int month, int year) const;
};

#endif //DATE_H