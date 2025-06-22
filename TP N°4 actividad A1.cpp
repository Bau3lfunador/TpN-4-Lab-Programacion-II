#include <iostream>
using namespace std;
int main() {
    int V[8] = {-3, -1, 2, 5, 6, 7, 9, 17};
    int N = 8;
    int S = 0;
    float PROM;
    int A, B, C, D, E, POS = -1;
    for (int I = 0; I < N; I++) {
        S += V[I];
    }
    PROM = (float)S / N;
    for (int I = 0; I < N; I++) {
        if (V[I] > PROM) {
            A = PROM - V[I - 1];
            B = V[I] - PROM;
            C = V[I - 1];
            D = V[I];
            POS = I;
            break;
        }
    }
    if (A < B) {
        E = C;
    } else {
        E = D;
    }
    cout << "PROM: " << PROM << endl;
    cout << "E: " << E << endl;
    cout << "POS: " << POS << endl;
    return 0;
}