#include <iostream>
using namespace std;

// Funci�n para imprimir un cuadrado con cualquier car�cter
void cuadradoCaracter(int lado, char caracterRelleno) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            cout << caracterRelleno; // Imprime el car�cter especificado
        }
        cout << endl; // Salto de l�nea al final de cada fila
    }
}

int main() {
    int lado;
    char caracterRelleno;

    cout << "Ingresa el tama�o del lado del cuadrado: ";
    cin >> lado;
    cout << "Ingresa el caracter de relleno: ";
    cin >> caracterRelleno;

    cuadradoCaracter(lado, caracterRelleno); // Llama a la funci�n con los par�metros proporcionados

    return 0;
}

