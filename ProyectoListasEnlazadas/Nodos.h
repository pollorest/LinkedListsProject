//
// Created by pollo on 19/09/2022.
//

#ifndef PROYECTOLISTASENLAZADAS_NODOS_H
#define PROYECTOLISTASENLAZADAS_NODOS_H
#include <iostream>
#include <string>
using namespace std;


class Nodos {
protected:
    string user;
    string password;
    Nodos* link;
public:
    Nodos(string user, string password, Nodos *pNodos);

    string getUser( );

    string getPassword( );

    Nodos* getLink( );

    void setLink(Nodos* link);

};


#endif //PROYECTOLISTASENLAZADAS_NODOS_H
