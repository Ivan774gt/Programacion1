#include <iostream>
#include <cmath> // Para usar floor()

using namespace std;

int main() {
    double x, y;
    char opcion;

    do {
        // Solicitar número al usuario
        cout << "Ingrese un numero: ";
        cin >> x;

        // Redondear el número
        y = floor(x + 0.5);

        // Mostrar resultados
        cout << "Numero original: " << x << endl;
        cout << "Numero redondeado: " << y << endl;

        // Preguntar si desea ingresar otro número
        cout << "¿Desea ingresar otro numero? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
