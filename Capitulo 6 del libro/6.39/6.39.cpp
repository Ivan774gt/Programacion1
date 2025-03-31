#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

// Estructura para representar un movimiento en la pila
struct Movimiento {
    int disco;
    char desde, hacia;
};

// Función para mover un disco de una torre a otra
void moverDisco(stack<int>& origen, stack<int>& destino, char torreOrigen, char torreDestino) {
    int discoOrigen = origen.empty() ? INT_MAX : origen.top();
    int discoDestino = destino.empty() ? INT_MAX : destino.top();

    if (discoOrigen < discoDestino) {
        destino.push(discoOrigen);
        origen.pop();
        cout << "Mover disco " << discoOrigen << " de " << torreOrigen << " a " << torreDestino << endl;
    } else {
        origen.push(discoDestino);
        destino.pop();
        cout << "Mover disco " << discoDestino << " de " << torreDestino << " a " << torreOrigen << endl;
    }
}

// Función para resolver Hanoi de manera iterativa
void hanoiIterativo(int n, char origen, char auxiliar, char destino) {
    stack<int> torreOrigen, torreAuxiliar, torreDestino;

    // Inicializar la torre de origen con los discos
    for (int i = n; i >= 1; i--) {
        torreOrigen.push(i);
    }

    // Determinar si el número de discos es par o impar
    if (n % 2 == 0) {
        swap(destino, auxiliar);
    }

    int totalMovimientos = pow(2, n) - 1;

    // Realizar los movimientos en un ciclo
    for (int i = 1; i <= totalMovimientos; i++) {
        if (i % 3 == 1) {
            moverDisco(torreOrigen, torreDestino, origen, destino);
        } else if (i % 3 == 2) {
            moverDisco(torreOrigen, torreAuxiliar, origen, auxiliar);
        } else if (i % 3 == 0) {
            moverDisco(torreAuxiliar, torreDestino, auxiliar, destino);
        }
    }
}

// Función principal
int main() {
    int n;
    cout << "Ingrese el número de discos: ";
    cin >> n;

    cout << "Solución iterativa para las Torres de Hanoi con " << n << " discos:\n";
    hanoiIterativo(n, 'A', 'B', 'C');

    return 0;
}
