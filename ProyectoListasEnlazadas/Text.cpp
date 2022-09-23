//
// Created by pollo on 22/09/2022.
//

#include "Text.h"
#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "ListaUsuarios.h"
using namespace std;

void Text::saveText(ListaUsuarios *listaUsuarios) {
    ofstream file;
    file.open("users.txt", ios::app);
    Nodos* temp = listaUsuarios->getFirst();
    while (temp != NULL) {
        file << temp->getUser() << " " << temp->getPassword() << endl;
        temp = temp->getLink();
    }
    file.close();
}

void Text::readText(ListaUsuarios *listaUsuarios) {
    string nombreArchivo = "users.txt";
    ifstream archivo(nombreArchivo.c_str());
    string frstLine;
    string scndLine;
    while (getline(archivo, frstLine)) {
        cout << frstLine << endl;
        getline(archivo, scndLine);
        listaUsuarios->insertHead(frstLine, scndLine);
    }
}