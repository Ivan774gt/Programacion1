#include <iostream>
#include <cmath> // Para las funciones matemáticas

using namespace std;

int main() {
    double x;

    // a) fabs(7.5) -> Valor absoluto de 7.5
    x = fabs(7.5);
    cout << "a) x = " << x << endl; // 7.5

    // b) floor(7.5) -> Redondea hacia abajo
    x = floor(7.5);
    cout << "b) x = " << x << endl; // 7.0

    // c) fabs(0.0) -> Valor absoluto de 0.0
    x = fabs(0.0);
    cout << "c) x = " << x << endl; // 0.0

    // d) ceil(0.0) -> Redondea hacia arriba
    x = ceil(0.0);
    cout << "d) x = " << x << endl; // 0.0

    // e) fabs(-6.4) -> Valor absoluto de -6.4
    x = fabs(-6.4);
    cout << "e) x = " << x << endl; // 6.4

    // f) ceil(-6.4) -> Redondea hacia arriba (menos negativo)
    x = ceil(-6.4);
    cout << "f) x = " << x << endl; // -6.0

    // g) ceil(-fabs(floor(-5.5)))
    // Paso 1: floor(-5.5) = -6.0
    // Paso 2: fabs(-6.0) = 6.0
    // Paso 3: -fabs(-6.0) = -6.0
    // Paso 4: ceil(-6.0) = -6.0
    x = ceil(-fabs(floor(-5.5)));
    cout << "g) x = " << x << endl; // -6.0

    return 0;
}
