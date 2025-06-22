#include <iostream>
using namespace std;
int main() {
    int votos[3] = {0};
    int opcion, producto;
    do {
        cout << "!!!ACCESO A ENCUESTA !!!" << endl;
        cout << "Quiere realizar encuesta 1: si – 2: no _ ";
        cin >> opcion;
        if (opcion == 1) {
            cout << "Productos participantes:\n1- Producto A\n2- Producto B\n3- Producto C" << endl;
            cout << "Ingrese número de producto favorito: ";
            cin >> producto;
            if (producto >= 1 && producto <= 3)
                votos[producto - 1]++;
        }
    } while (opcion == 1);
    int total = votos[0] + votos[1] + votos[2];
    cout << "\nvotos producto A: " << votos[0] << endl;
    cout << "votos producto B: " << votos[1] << endl;
    cout << "votos producto C: " << votos[2] << endl;
    cout << "total de votos: " << total << endl;
    int max = 0;
    for (int i = 1; i < 3; i++)
        if (votos[i] > votos[max]) max = i;
    cout << "Producto mas votado:Producto " << char('A' + max) << endl;
    return 0;
}