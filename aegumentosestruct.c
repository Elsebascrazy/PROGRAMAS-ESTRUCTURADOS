#include <stdio.h>
#include <string.h>

#define false 0
#define true 1

// Variables globales para los indicadores de argumentos
int argumento_k = false;
int argumento_l = false;
int argumento_n = false;

// Subalgoritmo para imprimir los argumentos
void imprimirArgumentos(int argc, char *argv[]) {
    printf("Argumentos:\n");
    if (argc == 1) {
        printf("ninguno\n");
    } else {
        for (int i = 1; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    }
}

// Subalgoritmo para procesar los argumentos
void procesarArgumentos(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-k") == 0) argumento_k = true;
        if (strcmp(argv[i], "-l") == 0) argumento_l = true;
        if (strcmp(argv[i], "-n") == 0) argumento_n = true;
    }
}

// Subalgoritmos para ejecutar acciones según los argumentos
void ejecutarArgumentoK() {
    if (argumento_k) {
        printf("-k\n"); // Código específico para el argumento -k
    }
}

void ejecutarArgumentoL() {
    if (argumento_l) {
        printf("-l\n"); // Código específico para el argumento -l
    }
}

void ejecutarArgumentoN() {
    if (argumento_n) {
        printf("-n\n"); // Código específico para el argumento -n
    }
}

int main(int argc, char *argv[]) {
    imprimirArgumentos(argc, argv); // Imprimir todos los argumentos
    procesarArgumentos(argc, argv);  // Determinar qué argumentos se pasaron
    ejecutarArgumentoK();            // Ejecutar acciones para -k si está presente
    ejecutarArgumentoL();            // Ejecutar acciones para -l si está presente
    ejecutarArgumentoN();            // Ejecutar acciones para -n si está presente
    return 0;
}
 
