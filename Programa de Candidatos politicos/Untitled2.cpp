// Declaración de Bibliotecas y librerías estándar de C++
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

// Declaración de Constantes
#define NUMERO_ALUMNOS 5
#define NUMERO_MATERIAS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100

// Declaración de Prototipos de Función
void llamaCiclo();   // Función que controla el Ciclo comparativo de datos por todas las facultades
int numeroCalculos = 0;
int vecesganadorFacultad_1 = 0;
int vecesganadorFacultad_2 = 0;
int vecesganadorFacultad_3 = 0;
int busquedaAleatorios(int minimo, int maximo); // Función que permite obtener valores aleatorios en las notas de cada alumno
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]); // Función que permite asignar a cada alumno las notas aleatorias
void DesplegarResultados(int numeroCalculos, int vecesganadorFacultad_1, int vecesganadorFacultad_2, int vecesganadorFacultad_3);
void imprimirMatrizLinea(); // Función que apoya el despliegue de títulos en el comparativo de facultades
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad);
// Función que permite el despliegue de cada facultad con sus alumnos y el cálculo de promedios (menor y mayor)

int main() {
    srand(getpid()); // Proceso preparativo para generación de valores aleatorios
    llamaCiclo();
    return 0;
}

void llamaCiclo() {
    // Declaración de matrices por cada facultad
    float matriz_facultad_1[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    float matriz_facultad_2[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    float matriz_facultad_3[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    int contador = 0;

    char opcion;  // Variable que controla el ciclo de repetición
    bool repetir = true;  // Variable booleana del ciclo de repetición

    // Declaración de variables flotantes para el cálculo de promedios
    float promedio_facultad_1;
    float promedio_facultad_2;
    float promedio_facultad_3;

    // Declaración de matriz que almacenará los nombres de los alumnos
    char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Carlos", "Luis", "Maria", "Pedro", "Juan"};

    // Ciclo repetitivo del comparativo de facultades
    do {
        system("cls");
        // Inicializar los promedios por facultad
        promedio_facultad_1 = 0;
        promedio_facultad_2 = 0;
        promedio_facultad_3 = 0;

        cout << "*** Comparativo de Facultades ***" << endl << endl;
        llenarMatriz(matriz_facultad_1); // Cálculo de las notas por facultad
        promedio_facultad_1 = imprimirMatriz(matriz_facultad_1, alumnos, "Facultad de Ingenieria"); // Despliegue de valores por facultad
        llenarMatriz(matriz_facultad_2);
        promedio_facultad_2 = imprimirMatriz(matriz_facultad_2, alumnos, "Facultad de Arquitectura");
        llenarMatriz(matriz_facultad_3);
        promedio_facultad_3 = imprimirMatriz(matriz_facultad_3, alumnos, "Facultad de Administracion");

        // Cálculo del mejor promedio de las facultades
        if (promedio_facultad_1 > promedio_facultad_2 && promedio_facultad_1 > promedio_facultad_3) {
            // Facultad 1 es mayor
            cout << " La facultad con el mejor promedio es : " << "Facultad de Ingenieria" << " Promedio: " << promedio_facultad_1 << endl;
            vecesganadorFacultad_1++;
        } else if (promedio_facultad_2 > promedio_facultad_1 && promedio_facultad_2 > promedio_facultad_3) {
            // Facultad 2 es mayor
            cout << " La facultad con el mejor promedio es : " << "Facultad de Arquitectura" << " Promedio: " << promedio_facultad_2 << endl;
            vecesganadorFacultad_2++;
        } else if (promedio_facultad_3 > promedio_facultad_2 && promedio_facultad_3 > promedio_facultad_1) {
            // Facultad 3 es mayor
            cout << " La facultad con el mejor promedio es : " << "Facultad de Administracion" << " Promedio: " << promedio_facultad_3 << endl;
            vecesganadorFacultad_3++;
        } else {
            // Varias facultades son iguales en promedio
            cout << " Algunas facultades tienen el mismo promedio " << endl << endl;
        }

        cout << "Desea otro cálculo (s/n)? ";
        cin >> opcion;
        numeroCalculos++;
        if (opcion == 'n') {
            repetir = false;
        }
    } while (repetir);

    DesplegarResultados(numeroCalculos, vecesganadorFacultad_1, vecesganadorFacultad_2, vecesganadorFacultad_3);
}

void DesplegarResultados(int numeroCalculos, int vecesganadorFacultad_1, int vecesganadorFacultad_2, int vecesganadorFacultad_3) {
    if (vecesganadorFacultad_1 > vecesganadorFacultad_2 && vecesganadorFacultad_1 > vecesganadorFacultad_3) {
        cout << "Cual es la mejor facultad: " << "Ingenieria" << endl;
        cout << "Ganó: " << vecesganadorFacultad_1 << " veces." << endl;
    } else if (vecesganadorFacultad_2 > vecesganadorFacultad_1 && vecesganadorFacultad_2 > vecesganadorFacultad_3) {
        cout << "Cual es la mejor facultad: " << "Arquitectura" << endl;
        cout << "Ganó: " << vecesganadorFacultad_2 << " veces." << endl;
    } else if (vecesganadorFacultad_3 > vecesganadorFacultad_1 && vecesganadorFacultad_3 > vecesganadorFacultad_2) {
        cout << "Cual es la mejor facultad: " << "Administracion" << endl;
        cout << "Ganó: " << vecesganadorFacultad_3 << " veces." << endl;
    } else {
        cout << "Hubo un empate entre facultades." << endl;
    }

    cout << "Se calcularon los promedios un total de " << numeroCalculos << " veces." << endl;
}

int busquedaAleatorios(int minimo, int maximo) {
    // Cálculo de valores aleatorios tomando como base la nota mínima y máxima del parcial
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]) {
    // Función que permite llenar cada matriz con valores aleatorios
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOS; y++) {
        float suma = 0;
        int calificacion = 0;
        for (x = 0; x < NUMERO_NOTAS; x++) {
            if (x == 0 || x == 3) { // Cálculo del primer parcial o actividades
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 20);
            } else if (x == 1) { // Cálculo del segundo parcial
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 25);
            } else if (x == 2) { // Cálculo del examen final
                calificacion = busquedaAleatorios(MIN_CALIFICACION, 35);
            }
            suma += (float)calificacion;
            matriz[y][x] = calificacion;
            calificacion = 0;
        }
        // Agregar promedio al final de la matriz
        matriz[y][NUMERO_NOTAS] = suma;
    }
}

void imprimirMatrizLinea() {
    // Función que despliega título de cada nota calculada
    int x;

    cout << "+--------";
    for (x = 0; x < NUMERO_NOTAS + 1; x++) {
        cout << "+---------";
    }
    cout << "+\n";
}

float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad) {
    // Función que imprime la matriz y despliega promedios de cada facultad
    float promedioFacultad = 0;
    int y, x;

    cout << nombreFacultad << endl;
    cout << " Promedio final para cada facultad en general." << endl;

    imprimirMatrizLinea();

    cout << "| Alumno | ";
    for (x = 0; x < NUMERO_NOTAS; x++) {
        cout << " Nota " << x + 1 << " | ";
    }
    cout << " Promedio |\n";
    imprimirMatrizLinea();

    for (y = 0; y < NUMERO_ALUMNOS; y++) {
        float suma = 0;
        cout << "| " << alumnos[y] << " | ";
        for (x = 0; x < NUMERO_NOTAS; x++) {
            suma += matriz[y][x];
            cout << " " << fixed << setprecision(2) << matriz[y][x] << " | ";
        }
        cout << fixed << setprecision(2) << " " << matriz[y][NUMERO_NOTAS] << " |" << endl;
        promedioFacultad += matriz[y][NUMERO_NOTAS];
    }
    imprimirMatrizLinea();
    return promedioFacultad / NUMERO_ALUMNOS;
}

