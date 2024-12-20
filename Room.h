#ifndef ROOM_H
#define ROOM_H

#include <iostream>



class Room {
	public:
    	Room(int number,std::string type, float price);

    	int getNumber();
    	std::string getType();
    	float getPrice();
		void setPrice(float newPrice); // Méthode pour modifier le prix

    private:
    	int _number;
    	std::string _type;
    	float _price;
};



#endif //ROOM_H
