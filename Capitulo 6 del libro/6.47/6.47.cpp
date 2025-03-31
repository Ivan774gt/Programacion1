#include <iostream>
#include <cstdlib> // Para srand() y rand()
#include <ctime>   // Para time()

using namespace std;

// (a) Correcci�n de la funci�n cubo
float cubo(float numero) {
    return numero * numero * numero;
}

// (b) Correcci�n del uso de srand() y generaci�n de n�mero aleatorio
int generarNumeroAleatorio() {
    srand(time(0)); // Inicializa la semilla aleatoria
    return rand() % 100; // N�mero aleatorio entre 0 y 99
}

// (c) Correcci�n de la conversi�n de tipo
void conversionTipo() {
    float y = 123.45678;
    int x = static_cast<int>(y); // Conversi�n expl�cita a entero
    cout << "Valor convertido: " << static_cast<float>(x) << endl;
}

// (d) Correcci�n de la funci�n cuadrado
double cuadrado(double number) {
    return number * number;
}

// (e) Correcci�n de la funci�n recursiva suma
int suma(int n) {
    if (n == 0) // Condici�n de parada correcta
        return 0;
    else
        return n + suma(n - 1); // Llamada recursiva con n-1
}

int main() {
    // (a) Prueba de la funci�n cubo
    cout << "Cubo de 3: " << cubo(3) << endl;

    // (b) Prueba de generaci�n de n�mero aleatorio
    cout << "Numero aleatorio: " << generarNumeroAleatorio() << endl;

    // (c) Prueba de conversi�n de tipo
    conversionTipo();

    // (d) Prueba de la funci�n cuadrado
    cout << "Cuadrado de 5: " << cuadrado(5) << endl;

    // (e) Prueba de la funci�n recursiva suma
    cout << "Suma de 5 hasta 0: " << suma(5) << endl;

    return 0;
}
