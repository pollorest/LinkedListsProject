//
// Created by pollo on 19/09/2022.
//

#include "ListaUsuarios.h"
#include "Nodos.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <stdlib.h>
using namespace std;



void ListaUsuarios::insertHead(string user, string password) {
    Nodos* nuevo = new Nodos(user, password, nullptr);
    nuevo->setLink(head);
    head = nuevo;
}

Nodos* ListaUsuarios::last() {
    Nodos* temp = head;
    while (temp->getLink() != NULL) {
        temp = temp->getLink();
    }
    return temp;
}

void ListaUsuarios::erase(string user) {
    Nodos* temp = head;
    Nodos* prev = NULL;
    while (temp != NULL) {
        if (temp->getUser() == user) {
            if (prev == NULL) {
                head = temp->getLink();
            }
            else {
                prev->setLink(temp->getLink());
            }
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->getLink();
    }
}

bool ListaUsuarios::validate(string user, string password) {
    Nodos* temp = head;
    while (temp != NULL) {
        if (temp->getUser() == user && temp->getPassword() == password) {
            return true;
        }
        temp = temp->getLink();
    }
    return false;
}

Nodos* ListaUsuarios::getFirst() {
    return head;
}

size_t ListaUsuarios::lenstr(const char* str) {
    size_t size = 0;
    while (*str)
        size += 1;
        str += 1;
    return size;
}

void ListaUsuarios::showUsersPassword() {
    Nodos* temp = head;
    while (temp != NULL) {
        cout << temp->getUser() << " " << temp->getPassword() << endl;
        temp = temp->getLink();
    }
}

void ListaUsuarios::showUsers() {
   Nodos* temp = head;
    while (temp != NULL) {
         cout << temp->getUser() << " ";
         string str = temp->getPassword();
         int h1 = str.length();
            for (int i = 0; i < h1; i++) {
                cout << "#";
            }
         cout << endl;
         temp = temp->getLink();
    }
}

void ListaUsuarios::search(string user, string password) {
    if (validate(user, password)) {
        cout << "Bienvenido" << endl;
    }
    else {
        cout << "Usuario no encontrado, vuelva a intentarlo" << endl;
    }
}

void ListaUsuarios::tryDelete(string user, string password) {
    if (validate(user, password)) {
        erase(user);
        cout << "Usuario eliminado" << endl;
    }
    else {
        cout << "Usuario no encontrado, vuelva a intentarlo" << endl;
    }
}

