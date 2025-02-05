#include <iostream>

using namespace std;

int main() {
    // definir las variables
    int opcionCalculo;
    double numeroUno, numeroDos, resultado;
    char continuar;

    do {
        // seleccionar una de las opciones para realizar un calculo
        cout << "Calculadora Basica" << endl;
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "Opcion: ";
        cin >> opcionCalculo;

        // ingresar los numeros para realizar los calculos seleccionados
        if (opcionCalculo >= 1 && opcionCalculo <= 4) {
            cout << "Ingrese el primer numero: ";
            cin >> numeroUno;
            cout << "Ingrese el segundo numero: ";
            cin >> numeroDos;

            switch (opcionCalculo) {
                case 1:
                    resultado = numeroUno + numeroDos;
                    cout << "Resultado: " << resultado << endl;
                    break;
                case 2:
                    resultado = numeroUno - numeroDos;
                    cout << "Resultado: " << resultado << endl;
                    break;
                case 3:
                    resultado = numeroUno * numeroDos;
                    cout << "Resultado: " << resultado << endl;
                    break;
                case 4:
                    if (numeroDos != 0) {
                        resultado = numeroUno / numeroDos;
                        cout << "Resultado: " << resultado << endl;
                    } else {
                        cout << "Error: Division por cero no permitida" << endl;
                    }
                    break;
            }
        } else {
            cout << "Error: Opcion invalida" << endl;
        }

        do {
            cout << "Desea realizar otra operacion? (y/n): ";
            cin >> continuar;
        } while (continuar != 'y' && continuar != 'Y' && continuar != 'n' && continuar != 'N');

    } while (continuar == 'y' || continuar == 'Y');

    return 0;
}
