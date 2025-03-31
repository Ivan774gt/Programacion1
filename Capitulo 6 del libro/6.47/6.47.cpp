#include <iostream>
#include <cstdlib> // Para srand() y rand()
#include <ctime>   // Para time()

using namespace std;

// (a) Corrección de la función cubo
float cubo(float numero) {
    return numero * numero * numero;
}

// (b) Corrección del uso de srand() y generación de número aleatorio
int generarNumeroAleatorio() {
    srand(time(0)); // Inicializa la semilla aleatoria
    return rand() % 100; // Número aleatorio entre 0 y 99
}

// (c) Corrección de la conversión de tipo
void conversionTipo() {
    float y = 123.45678;
    int x = static_cast<int>(y); // Conversión explícita a entero
    cout << "Valor convertido: " << static_cast<float>(x) << endl;
}

// (d) Corrección de la función cuadrado
double cuadrado(double number) {
    return number * number;
}

// (e) Corrección de la función recursiva suma
int suma(int n) {
    if (n == 0) // Condición de parada correcta
        return 0;
    else
        return n + suma(n - 1); // Llamada recursiva con n-1
}

int main() {
    // (a) Prueba de la función cubo
    cout << "Cubo de 3: " << cubo(3) << endl;

    // (b) Prueba de generación de número aleatorio
    cout << "Numero aleatorio: " << generarNumeroAleatorio() << endl;

    // (c) Prueba de conversión de tipo
    conversionTipo();

    // (d) Prueba de la función cuadrado
    cout << "Cuadrado de 5: " << cuadrado(5) << endl;

    // (e) Prueba de la función recursiva suma
    cout << "Suma de 5 hasta 0: " << suma(5) << endl;

    return 0;
}
