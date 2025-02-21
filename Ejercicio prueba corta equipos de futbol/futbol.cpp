#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int NUM_EQUIPOS = 6;

struct Equipo {
    string nombreEquipos;
    int juegosJugados = 0;
    int juegosGanados = 0;
    int juegosEmpatados = 0;
    int juegosPerdidos = 0;
    int puntos = 0;
};

void ingresarResultados(vector<Equipo>& equipos) {
    for (int i = 0; i < NUM_EQUIPOS; ++i) {
        for (int j = 0; j < NUM_EQUIPOS; ++j) {
            if (i != j) {
                string resultado;
                cout << "Ingrese el resultado entre " << equipos[i].nombreEquipos << " y " << equipos[j].nombreEquipos << " (ej. 2-1): ";
                cin >> resultado;
                int goles_i = stoi(resultado.substr(0, resultado.find('-')));
                int goles_j = stoi(resultado.substr(resultado.find('-') + 1));
                equipos[i].juegosJugados++;
                equipos[j].juegosJugados++;
                if (goles_i > goles_j) {
                    equipos[i].juegosGanados++;
                    equipos[j].juegosPerdidos++;
                    equipos[i].puntos += 3;
                } else if (goles_i < goles_j) {
                    equipos[j].juegosGanados++;
                    equipos[i].juegosPerdidos++;
                    equipos[j].puntos += 3;
                } else {
                    equipos[i].juegosEmpatados++;
                    equipos[j].juegosEmpatados++;
                    equipos[i].puntos++;
                    equipos[j].puntos++;
                }
            }
        }
    }
}

void calcularPorcentajes(const vector<Equipo>& equipos, vector<double>& porcentajes) {
    for (int i = 0; i < NUM_EQUIPOS; ++i) {
        if (equipos[i].juegosJugados > 0) {
            porcentajes[i] = (static_cast<double>(equipos[i].puntos) / (equipos[i].juegosJugados * 3)) * 100;
        }
    }
}

int main() {
    vector<Equipo> equipos(NUM_EQUIPOS);
    vector<double> porcentajes(NUM_EQUIPOS, 0.0);

    for (int i = 0; i < NUM_EQUIPOS; ++i) {
        cout << "Ingrese el nombre del equipo " << i + 1 << ": ";
        cin >> equipos[i].nombreEquipos;
    }

    ingresarResultados(equipos);
    calcularPorcentajes(equipos, porcentajes);

    for (int i = 0; i < NUM_EQUIPOS; ++i) {
        cout << equipos[i].nombreEquipos << ": JuegosJugados=" << equipos[i].juegosJugados << ", JuegosGanados=" << equipos[i].juegosGanados
             << ", JuegosEmpatados=" << equipos[i].juegosEmpatados << ", JuegosPerdidos=" << equipos[i].juegosPerdidos
             << ", Puntos=" << equipos[i].puntos << ", Porcentaje=" << porcentajes[i] << "%" << endl;
    }

    return 0;
}
