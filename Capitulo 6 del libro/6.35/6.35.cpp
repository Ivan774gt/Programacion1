#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Inicializa la semilla para los números aleatorios
    int numero = rand() % 1000 + 1;  // Número aleatorio entre 1 y 1000
    int intento;
    int contadorIntentos = 0;
    char jugarDeNuevo;

    cout << "Tengo un numero entre 1 y 1000." << endl;
    cout << "¿Puedes adivinar mi numero?" << endl;

    do {
        cout << "Por favor escribe tu intento: ";
        cin >> intento;
        contadorIntentos++;

        if (intento == numero) {
            cout << "¡Excelente! Adivinaste el numero!" << endl;
            if (contadorIntentos <= 10) {
                cout << "¡Sabias el secreto o tuviste suerte!" << endl;
            } else {
                cout << "¡Lo adivinaste en " << contadorIntentos << " intentos!" << endl;
            }
            cout << "¿Te gustaría jugar de nuevo (s/n)? ";
            cin >> jugarDeNuevo;
            if (jugarDeNuevo == 's' || jugarDeNuevo == 'S') {
                numero = rand() % 1000 + 1;  // Nuevo número aleatorio
                contadorIntentos = 0;  // Reiniciar contador de intentos
            }
        } else if (intento < numero) {
            cout << "¡Demasiado bajo! Intenta de nuevo." << endl;
        } else {
            cout << "¡Demasiado alto! Intenta de nuevo." << endl;
        }
    } while (intento != numero);

    return 0;
}

