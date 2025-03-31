#include <iostream>
using namespace std;

// Plantilla de función para encontrar el valor mínimo
template <typename T>
T minimo(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    int num1 = 5, num2 = 3;
    double num3 = 3.14, num4 = 2.71;
    char char1 = 'a', char2 = 'z';

    cout << "El minimo entre " << num1 << " y " << num2 << " es: " << minimo(num1, num2) << endl;
    cout << "El minimo entre " << num3 << " y " << num4 << " es: " << minimo(num3, num4) << endl;
    cout << "El minimo entre " << char1 << " y " << char2 << " es: " << minimo(char1, char2) << endl;

    return 0;
}
