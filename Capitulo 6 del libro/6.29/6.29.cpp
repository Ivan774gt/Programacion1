#include <iostream>
using namespace std;

// Funci�n para encontrar el m�nimo entre tres n�meros de punto flotante
double encontrarMinimo(double a, double b, double c) {
    return min(a, min(b, c));
}

int main() {
    double num1, num2, num3;

    cout << "Ingrese tres numeros de punto flotante: ";
    cin >> num1 >> num2 >> num3;

    cout << "El numero m�s peque�o es: " << encontrarMinimo(num1, num2, num3) << endl;

    return 0;
}

