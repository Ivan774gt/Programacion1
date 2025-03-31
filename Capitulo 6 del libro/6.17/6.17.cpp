#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

int main() {
    srand(time(0)); // Semilla para generar números diferentes en cada ejecución

    // a) Números aleatorios en el conjunto {2, 4, 6, 8, 10}
    cout << "a) " << 2 + (rand() % 5) * 2 << endl;

    // b) Números aleatorios en el conjunto {3, 5, 7, 9, 11}
    cout << "b) " << 3 + (rand() % 5) * 2 << endl;

    // c) Números aleatorios en el conjunto {6, 10, 14, 18, 22}
    cout << "c) " << 6 + (rand() % 5) * 4 << endl;

    return 0;
}
