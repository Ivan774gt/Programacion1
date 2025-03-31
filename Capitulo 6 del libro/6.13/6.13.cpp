#include <iostream>
#include <cmath> // Para usar floor()

using namespace std;

int main() {
    double x, y;
    char opcion;

    do {
        // Solicitar n�mero al usuario
        cout << "Ingrese un numero: ";
        cin >> x;

        // Redondear el n�mero
        y = floor(x + 0.5);

        // Mostrar resultados
        cout << "Numero original: " << x << endl;
        cout << "Numero redondeado: " << y << endl;

        // Preguntar si desea ingresar otro n�mero
        cout << "�Desea ingresar otro numero? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
