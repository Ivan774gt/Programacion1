#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0, b = 1, temp;

    if (n == 0) return a;
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n;
    cout << "Ingrese el numero para obtener el Fibonacci: ";
    cin >> n;
    cout << "El Fibonacci de " << n << " es: " << fibonacci(n) << endl;
    return 0;
}
