#include "Client.h"

Client::Client(std::string idClient, std::string name, std::string nickname): _idClient(idClient),_name(name),_nickname(nickname){}


std::string Client::getidClient(){
    return _idClient ;
}



std::string Client::getname(){

    return _name;
}



std::string Client::getnickname(){

    return _nickname;
}