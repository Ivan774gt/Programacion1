#include <iostream>
using namespace std;

int mcd(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return mcd(y, x % y);  // Llamada recursiva
    }
}

int main() {
    int x, y;
    cout << "Ingrese dos numeros enteros para calcular su maximo comun divisor: ";
    cin >> x >> y;
    cout << "El maximo comun divisor de " << x << " y " << y << " es: " << mcd(x, y) << endl;
    return 0;
}
