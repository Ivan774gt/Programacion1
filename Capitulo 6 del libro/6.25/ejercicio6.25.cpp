#include <iostream>
using namespace std;

// Función para calcular los segundos transcurridos desde la última vez que el reloj marcó las 12
int calcularSegundos(int horas, int minutos, int segundos) {
    // Convertir todo a segundos
    return (horas % 12) * 3600 + minutos * 60 + segundos;
}

// Función para calcular la diferencia de tiempo en segundos entre dos horas
int diferenciaSegundos(int h1, int m1, int s1, int h2, int m2, int s2) {
    int tiempo1 = calcularSegundos(h1, m1, s1);
    int tiempo2 = calcularSegundos(h2, m2, s2);
    return abs(tiempo2 - tiempo1);
}

int main() {
    int h1, m1, s1, h2, m2, s2;

    cout << "Ingrese la primera hora (horas minutos segundos): ";
    cin >> h1 >> m1 >> s1;

    cout << "Ingrese la segunda hora (horas minutos segundos): ";
    cin >> h2 >> m2 >> s2;

    cout << "Segundos transcurridos desde las 12: " << calcularSegundos(h1, m1, s1) << " segundos.\n";
    cout << "Diferencia de tiempo entre ambas horas: " << diferenciaSegundos(h1, m1, s1, h2, m2, s2) << " segundos.\n";

    return 0;
}

