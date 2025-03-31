#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int tirarDado() {
    return rand() % 6 + 1;  // Retorna un número entre 1 y 6
}

bool jugarCraps() {
    int suma = tirarDado() + tirarDado();
    cout << "La suma de los dados es: " << suma << endl;

    if (suma == 7 || suma == 11) {
        return true;  // El jugador gana
    } else if (suma == 2 || suma == 3 || suma == 12) {
        return false;  // El jugador pierde
    } else {
        int punto = suma;
        cout << "El punto es: " << punto << endl;

        while (true) {
            suma = tirarDado() + tirarDado();
            cout << "La suma de los dados es: " << suma << endl;

            if (suma == punto) {
                return true;  // El jugador gana
            } else if (suma == 7) {
                return false;  // El jugador pierde
            }
        }
    }
}

int main() {
    srand(time(0));  // Inicializa la semilla para los números aleatorios
    double saldoBanco = 1000.0;
    double apuesta;

    cout << "Bienvenido al juego de Craps!" << endl;

    do {
        cout << "Saldo disponible: $" << saldoBanco << endl;
        cout << "Introduce tu apuesta: $";
        cin >> apuesta;

        while (apuesta > saldoBanco || apuesta <= 0) {
            cout << "La apuesta debe ser menor o igual al saldo disponible. Intenta de nuevo: $";
            cin >> apuesta;
        }

        if (jugarCraps()) {
            saldoBanco += apuesta;
            cout << "¡Ganaste! Tu nuevo saldo es: $" << saldoBanco << endl;
        } else {
            saldoBanco -= apuesta;
            cout << "¡Perdiste! Tu nuevo saldo es: $" << saldoBanco << endl;

            if (saldoBanco <= 0) {
                cout << "Lo siento. ¡Te quedaste sin fondos!" << endl;
                break;
            }
        }

        char jugarDeNuevo;
        cout << "¿Te gustaría jugar de nuevo (s/n)? ";
        cin >> jugarDeNuevo;

        if (saldoBanco <= 0 || jugarDeNuevo != 's') {
            break;
        }

    } while (true);

    return 0;
}
