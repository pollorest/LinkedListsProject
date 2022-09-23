//
// Created by pollo on 19/09/2022.
//

#ifndef PROYECTOLISTASENLAZADAS_LISTAUSUARIOS_H
#define PROYECTOLISTASENLAZADAS_LISTAUSUARIOS_H
#include "Nodos.h"
#include <iostream>
#include <string>
using namespace std;


class ListaUsuarios {
protected:
    Nodos* head;
public:
    ListaUsuarios() { head = NULL; }

    void insertHead(string user, string password);

    Nodos* last();

    void erase(string user);

    bool validate(string user, string password);

    void showUsers();

    void showUsersPassword();

    void search(string user, string password);

    void tryDelete(string user, string password);

    Nodos* getFirst();

    size_t lenstr(const char *str);



};


#endif //PROYECTOLISTASENLAZADAS_LISTAUSUARIOS_H
