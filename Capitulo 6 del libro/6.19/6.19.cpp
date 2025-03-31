#include <iostream>
#include <cmath> // Para usar sqrt()

using namespace std;

// Función para calcular la hipotenusa
double hipotenusa(double lado1, double lado2) {
    return sqrt(pow(lado1, 2) + pow(lado2, 2));
}

int main() {
    // Datos de los triángulos
    double lados[][2] = {
        {3.0, 4.0},
        {12.0, 15.0},
        {5.0, 8.0}
    };

    // Calcular y mostrar hipotenusa de cada triángulo
    for (int i = 0; i < 3; i++) {
        cout << "Triangulo " << i + 1 << ":" << endl;
        cout << "Lado 1: " << lados[i][0] << ", Lado 2: " << lados[i][1] << endl;
        cout << "Hipotenusa: " << hipotenusa(lados[i][0], lados[i][1]) << endl;
        cout << "----------------------" << endl;
    }

    return 0;
}
