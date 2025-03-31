#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarPregunta(int nivel) {
    int limite = 9;
    if (nivel == 2) {
        limite = 99;  // N�meros de dos d�gitos
    } else if (nivel == 3) {
        limite = 999;  // N�meros de tres d�gitos
    }
    return rand() % (limite + 1);  // Genera un n�mero aleatorio dentro del rango seg�n el nivel
}

int main() {
    srand(time(0));  // Inicializar la semilla para generar n�meros aleatorios
    int nivel;

    cout << "Seleccione el nivel de dificultad (1-3): ";
    cin >> nivel;

    if (nivel < 1 || nivel > 3) {
        cout << "Nivel invalido. Elija entre 1 y 3." << endl;
        return 1;
    }

    int numero1 = generarPregunta(nivel);
    int numero2 = generarPregunta(nivel);

    cout << "Multiplicacion de " << numero1 << " * " << numero2 << " = ?" << endl;

    int respuesta;
    cin >> respuesta;

    if (respuesta == numero1 * numero2) {
        cout << "�Respuesta correcta!" << endl;
    } else {
        cout << "�Respuesta incorrecta!" << endl;
    }

    return 0;
}
