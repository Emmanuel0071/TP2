#include <iostream>
#include <string>



class Client {

    public:

        Client(std::string idClient, std::string name, std::string nickname);

        std::string getidClient();
        std::string getname();
        std::string getnickname();

    private:

        std::string _idClient;
        std::string _name;
        std::string _nickname;


    


};