#include <iostream>
using namespace std;

// Función para imprimir un cuadrado con cualquier carácter
void cuadradoCaracter(int lado, char caracterRelleno) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            cout << caracterRelleno; // Imprime el carácter especificado
        }
        cout << endl; // Salto de línea al final de cada fila
    }
}

int main() {
    int lado;
    char caracterRelleno;

    cout << "Ingresa el tamaño del lado del cuadrado: ";
    cin >> lado;
    cout << "Ingresa el caracter de relleno: ";
    cin >> caracterRelleno;

    cuadradoCaracter(lado, caracterRelleno); // Llama a la función con los parámetros proporcionados

    return 0;
}

