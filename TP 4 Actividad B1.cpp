#include <iostream>
using namespace std;
int main() {
    int cursos[5] = {15, 18, 12, 20, 17};
    for (int i = 0; i < 5; i++) {
        cout << "curso " << i + 1 << ":" << cursos[i] << "inscriptos" << endl;
    }
    return 0;
}