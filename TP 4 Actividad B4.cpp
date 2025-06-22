#include <iostream>
using namespace std;
int main() {
    const int N = 50;
    int tipoLibro[N], edad[N], educacion[N];
    int mayores = 0, ficcion = 0, noFiccion = 0;
    int edu[5] = {0};
    for (int i = 0; i < N; i++) {
        cout << "encuestado" << i + 1 << endl;
        cout << "tipo libro (1:Ficcion, 2:No ficcion):";
        cin >> tipoLibro[i];
        cout << "edad:";
        cin >> edad[i];
        cout << "educación(1 a 5):";
        cin >> educacion[i];
        if (edad[i] > 18) mayores++;
        if (tipoLibro[i] == 1) ficcion++;
        else noFiccion++;
        edu[educacion[i] - 1]++;
    }
    cout << "\nmayores de 18 años:" << mayores << endl;
    cout << "porcentaje ficcion:" << (ficcion * 100.0 / N) << "%" << endl;
    cout << "porcentaje no ficcion:" << (noFiccion * 100.0 / N) << "%" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "educacion" << i + 1 << ":" << edu[i] << "respuestas" << endl;
    }
    return 0;
}