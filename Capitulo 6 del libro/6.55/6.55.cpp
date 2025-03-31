#include <iostream>
using namespace std;

// Clase base Cuenta
class Cuenta {
protected:
    double saldo;
public:
    Cuenta(double saldoInicial) {
        if (saldoInicial >= 0.0)
            saldo = saldoInicial;
        else {
            saldo = 0.0;
            cout << "Saldo invalido. Se establecio en 0." << endl;
        }
    }

    void abonar(double cantidad) {
        saldo += cantidad;
    }

    bool cargar(double cantidad) {
        if (cantidad > saldo) {
            cout << "Fondos insuficientes." << endl;
            return false;
        } else {
            saldo -= cantidad;
            return true;
        }
    }

    double obtenerSaldo() const {
        return saldo;
    }
};

// Clase derivada CuentaAhorros
class CuentaAhorros : public Cuenta {
private:
    double tasaInteres;  // Porcentaje de interés
public:
    CuentaAhorros(double saldoInicial, double interes)
        : Cuenta(saldoInicial) {
        tasaInteres = (interes > 0) ? interes : 0;
    }

    void aplicarInteres() {
        saldo += saldo * tasaInteres;
    }
};

// Clase derivada CuentaCheques
class CuentaCheques : public Cuenta {
private:
    double cuotaTransaccion;  // Comisión por cada retiro
public:
    CuentaCheques(double saldoInicial, double cuota)
        : Cuenta(saldoInicial) {
        cuotaTransaccion = (cuota > 0) ? cuota : 0;
    }

    bool cargar(double cantidad) {
        if (Cuenta::cargar(cantidad + cuotaTransaccion)) {
            return true;
        }
        return false;
    }
};

// Función principal
int main() {
    // Cuenta de ahorros con Q.1000 y 5% de interés
    CuentaAhorros cuentaAhorros(1000.0, 0.05);
    cuentaAhorros.aplicarInteres();
    cout << "Saldo en cuenta de ahorros despues del interes: Q." << cuentaAhorros.obtenerSaldo() << endl;

    // Cuenta de cheques con Q.500 y comisión de Q.10 por retiro
    CuentaCheques cuentaCheques(500.0, 10.0);
    cuentaCheques.cargar(100); // Retira Q.100 + Q.10 de comisión
    cout << "Saldo en cuenta de cheques despues del retiro: Q." << cuentaCheques.obtenerSaldo() << endl;

    return 0;
}

