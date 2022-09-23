#include <iostream>
using namespace std;
#include "ListaUsuarios.h"
#include "Text.h"


int main() {
    ListaUsuarios *l = new ListaUsuarios();
    int option;

    do {
        cout << "Ingrese una opcion: " << endl;
        cout << "1. Insertar usuario\n2. Buscar usuario\n3. Eliminar usuario\n4. Visualizar usuarios\n5. Salir\n";
        cin >> option;
        if (option == 1) {
            string user, password;
            cout << "Ingrese el usuario:";
            cin >> user;
            cout << "Ingrese la contrasena:";
            cin >> password;
            l->insertHead(user, password);
        } else if (option == 2) {
            string user, password;
            cout << "Ingrese el usuario:";
            cin >> user;
            cout << "Ingrese la contrasena:";
            cin >> password;
            l->search(user, password);
        } else if (option == 3) {
            string user, password;
            cout << "Ingrese el usuario:";
            cin >> user;
            cout << "Ingrese la contrasena:";
            cin >> password;
            l->tryDelete(user, password);
        } else if (option == 4) {
            cout << "1. Ocultar contrasenas" << endl;
            cout << "2. Mostrar contrasenas" << endl;
            int i;
            cin >> i;
            if (i == 1) {
                l->showUsers();
            } else if (i == 2) {
                l->showUsersPassword();
            } else {
                cout << "Opcion incorrecta" << endl;
            }
        }

    } while (option != 5);

    Text::saveText(l);
}
