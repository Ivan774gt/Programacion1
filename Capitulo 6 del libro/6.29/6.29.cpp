#include <iostream>
using namespace std;

// Función para encontrar el mínimo entre tres números de punto flotante
double encontrarMinimo(double a, double b, double c) {
    return min(a, min(b, c));
}

int main() {
    double num1, num2, num3;

    cout << "Ingrese tres numeros de punto flotante: ";
    cin >> num1 >> num2 >> num3;

    cout << "El numero más pequeño es: " << encontrarMinimo(num1, num2, num3) << endl;

    return 0;
}

