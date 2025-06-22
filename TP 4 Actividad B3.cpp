#include <iostream>
using namespace std;
int main() {
    int temp[30] = {9, 12, 14, 8, 7, 10, 15, 11, 13, 12, 14, 9, 6, 5, 8, 9, 10, 11, 12, 13, 14, 13, 12, 11, 8, 9, 10, 12, 11, 14};
    int min = temp[0], max = temp[0], suma = 0, contador = 0;
    for (int i = 0; i < 30; i++) {
        if (temp[i] < min) min = temp[i];
        if (temp[i] > max) max = temp[i];
        if (temp[i] < 10) contador++;
        suma += temp[i];
    }
    float prom = (float)suma / 30;
    cout << "temperatura minima: " << min << "°c" << endl;
    cout << "temperatura maxima: " << max << "°c" << endl;
    cout << "temperatura promedio: " << prom << "°c" << endl;
    cout << "dias con temperatura < 10°c: " << contador << endl;
    return 0;
}