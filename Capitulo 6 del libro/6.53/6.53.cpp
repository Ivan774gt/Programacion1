#include <iostream>

using namespace std;

// Plantilla de funci�n para la suma de tres n�meros
template <class A>
A suma(A num1, A num2, A num3) {
    return num1 + num2 + num3;
}

// Funci�n para imprimir resultados correctamente definida
void imprimirResultados(int x, int y) {
    cout << "La suma es " << x + y << endl;
}

// Plantilla de funci�n para calcular el producto de tres n�meros
template <class A>
A producto(A num1, A num2, A num3) {
    return num1 * num2 * num3;
}

// Funci�n que devuelve el cubo de un n�mero entero
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

