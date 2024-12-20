#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <iostream>



class Chambre {
	public:
    	Chambre(int number,std::string type, float price);

    	int getNumber();
    	std::string getType();
    	float getPrice();
		void setPrice(float newPrice); // Méthode pour modifier le prix

    private:
    	int _number;
    	std::string _type;
    	float _price;
};



#endif //CHAMBRE_H
