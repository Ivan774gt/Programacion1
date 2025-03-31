#include <iostream>

using namespace std;

// Plantilla de función para la suma de tres números
template <class A>
A suma(A num1, A num2, A num3) {
    return num1 + num2 + num3;
}

// Función para imprimir resultados correctamente definida
void imprimirResultados(int x, int y) {
    cout << "La suma es " << x + y << endl;
}

// Plantilla de función para calcular el producto de tres números
template <class A>
A producto(A num1, A num2, A num3) {
    return num1 * num2 * num3;
}

// Función que devuelve el cubo de un número entero
int cubo(int numero) {
    return numero * numero * numero;
}

int main() {
    int a = 3, b = 4, c = 5;

    cout << "Suma: " << suma(a, b, c) << endl;
    cout << "Producto: " << producto(a, b, c) << endl;
    cout << "Cubo de 3: " << cubo(3) << endl;

    imprimirResultados(a, b);

    return 0;
}

