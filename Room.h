#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>

class Room {
private:
    int number;
	int type;
    float price;

	std::vector<std::string> typeList = {"Simple", "Double", "Suite"};

public:
    Room(int _number, int _type, float _price);

    const int getNumber() const;
    const int getType() const;
    const float getPrice() const;
	void setPrice(const float newPrice); // Méthode pour modifier le prix
};



#endif //ROOM_H
