#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int tirar() {
    return rand() % 2;  // 0 para cara, 1 para cruz
}

int main() {
    srand(time(0));  // Inicializa la semilla para los números aleatorios

    int cara = 0, cruz = 0;

    for (int i = 0; i < 100; ++i) {
        if (tirar() == 0) {
            cout << "Cara" << endl;
            cara++;
        } else {
            cout << "Cruz" << endl;
            cruz++;
        }
    }

    cout << "\nNumero de caras: " << cara << endl;
    cout << "Numero de cruces: " << cruz << endl;

    return 0;
}

