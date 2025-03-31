#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrarMensaje(bool respuestaCorrecta) {
    int mensaje = rand() % 4 + 1;  // Generar un número aleatorio entre 1 y 4

    if (respuestaCorrecta) {
        switch (mensaje) {
            case 1:
                cout << "¡Muy bien!" << endl;
                break;
            case 2:
                cout << "¡Excelente!" << endl;
                break;
            case 3:
                cout << "¡Buen trabajo!" << endl;
                break;
            case 4:
                cout << "¡Sigue asi!" << endl;
                break;
        }
    } else {
        switch (mensaje) {
            case 1:
                cout << "No. Por favor intenta de nuevo." << endl;
                break;
            case 2:
                cout << "Incorrecto. Intenta una vez mas." << endl;
                break;
            case 3:
                cout << "¡No te rindas!" << endl;
                break;
            case 4:
                cout << "No. Sigue intentando." << endl;
                break;
        }
    }
}

int main() {
    srand(time(0));  // Inicializar la semilla para generar números aleatorios
    bool respuestaCorrecta = true;  // Simulando una respuesta correcta

    mostrarMensaje(respuestaCorrecta);  // Mostrar mensaje para respuesta correcta
    mostrarMensaje(false);  // Mostrar mensaje para respuesta incorrecta

    return 0;
}
