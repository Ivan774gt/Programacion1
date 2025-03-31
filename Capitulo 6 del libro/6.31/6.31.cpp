#include <iostream>
using namespace std;

// Función para calcular el Máximo Común Divisor (MCD) usando el algoritmo de Euclides
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Ingrese dos numeros enteros: ";
    cin >> num1 >> num2;

    cout << "El Maximo Comun Divisor es: " << mcd(num1, num2) << endl;

    return 0;
}

