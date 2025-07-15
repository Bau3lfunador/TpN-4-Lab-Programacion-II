#include <iostream>
using namespace std;

int main() {
    const int CANT_PRODUCTOS = 5;
    int CP[CANT_PRODUCTOS] = {1001, 1002, 1003, 1004, 1005};
    int CS[CANT_PRODUCTOS] = {50, 30, 70, 20, 90};

    int codigo, cantidad;

    cout << " CONSULTA DE STOCK " << endl;
    cout << "Ingrese codigo de producto para descontar stock (0 para salir): ";
    cin >> codigo;

    while (codigo != 0) {
        bool encontrado = false;

        for (int i = 0; i < CANT_PRODUCTOS; i++) {
            if (CP[i] == codigo) {
                encontrado = true;

                cout << "Ingrese cantidad a descontar del stock: ";
                cin >> cantidad;

                if (cantidad <= CS[i]) {
                    CS[i] -= cantidad;
                    cout << "Stock actualizado." << endl;
                } else {
                    cout << "No hay suficiente stock disponible." << endl;
                }
                break;
            }
        }

        if (!encontrado) {
            cout << "Codigo no encontrado." << endl;
        }

        cout << "\nIngrese otro codigo de producto (0 para salir): ";
        cin >> codigo;
    }

    cout << "\n LISTA COMPLETA DE PRODUCTOS Y STOCK" << endl;
    for (int i = 0; i < CANT_PRODUCTOS; i++) {
        cout << "Codigo: " << CP[i] << " - Stock: " << CS[i] << endl;
    }

    return 0;
}
