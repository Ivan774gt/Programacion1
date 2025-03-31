#include <iostream>
using namespace std;

// Función que triplica el valor por valor
int triplicarPorValor(int cuenta) {
    cuenta *= 3;
    return cuenta;
}

// Función que triplica el valor por referencia
void triplicarPorReferencia(int &cuenta) {
    cuenta *= 3;
}

int main() {
    int cuenta = 10;

    cout << "Valor inicial de cuenta: " << cuenta << endl;

    // Usando paso por valor
    int nuevaCuenta = triplicarPorValor(cuenta);
    cout << "Despues de triplicar por valor: " << nuevaCuenta << endl;

    // Usando paso por referencia
    triplicarPorReferencia(cuenta);
    cout << "Despues de triplicar por referencia: " << cuenta << endl;

    return 0;
}
