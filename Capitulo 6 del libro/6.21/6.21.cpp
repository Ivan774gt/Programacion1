#include <iostream>
using namespace std;

// Función para determinar si un número es par
bool esPar(int numero) {
    return numero % 2 == 0; // Si el número es divisible por 2, es par
}

int main() {
    int numero;

    // Solicitamos una serie de números al usuario
    cout << "Ingresa un numero (0 para terminar): ";
    while (cin >> numero && numero != 0) {
        if (esPar(numero)) {
            cout << numero << " es par." << endl;
        } else {
            cout << numero << " no es par." << endl;
        }
        cout << "Ingresa otro numero (0 para terminar): ";
    }

    return 0;
}
