//
// Created by pollo on 19/09/2022.
//

#include "Nodos.h"

Nodos::Nodos(string user, string password, Nodos *pNodos) {
    this->user = user;
    this->password = password;
    this->link = nullptr;
}

string Nodos::getUser( ){
    return this->user;
}

string Nodos::getPassword( ){
    return this->password;
}

Nodos* Nodos::getLink( ){
    return this->link;
}

void Nodos::setLink(Nodos* link){
    this->link = link;
}

