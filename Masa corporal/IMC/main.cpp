#include <iostream>

using namespace std;

int main() {
    // Variables
    float operadorPeso = 0;
    float operadorAltura = 0;
    float resultadoImc;
    int opcionSeleccionada;
    char salidaMenu;

    do {
        system("cls");
        // Ingreso de datos
        operadorPeso = 0;
        operadorAltura = 0;
        cout << "Calculo del IMC" << endl;
        // Menú de opciones
        cout << "1. Peso en lb y altura en plg" << endl;
        cout << "2. Peso en kg y altura en m" << endl;
        cout << "   Opcion: ";
        cin >> opcionSeleccionada;

        // Validación de opción
        if (opcionSeleccionada == 1 || opcionSeleccionada == 2) {
            cout << "Ingrese su peso: ";
            cin >> operadorPeso;
            cout << "Ingrese su altura: ";
            cin >> operadorAltura;

            // Cálculo del IMC según la opción seleccionada
            if (opcionSeleccionada == 1) {
                resultadoImc = (operadorPeso * 703) / (operadorAltura * operadorAltura);
            } else {
                resultadoImc = operadorPeso / (operadorAltura * operadorAltura);
            }

            // Mostrar resultado
            cout << "El resultado de su IMC es: " << resultadoImc << endl;

            // Clasificación según la OMS (sin grados de obesidad)
            cout << "Clasificación: ";
            if (resultadoImc < 18.5) {
                cout << "Bajo peso" << endl;
            } else if (resultadoImc < 25) {
                cout << "Peso normal" << endl;
            } else if (resultadoImc >= 25) {
                cout << "Sobrepeso" << endl;
            }

        } else {
            cout << "Error: Opción seleccionada no válida." << endl;
        }

        // Preguntar si desea calcular otro IMC
        cout << "Desea realizar otra operacion? (S/N): ";
        cin >> salidaMenu;
    } while (salidaMenu == 's' || salidaMenu == 'S');

    return 0;
}

