#include <stdio.h>

int falfil, calfil;

void obtenerPosicionAlfil() {
    printf("Posicion del alfil (fila, columna): ");
    scanf("%d %d", &falfil, &calfil);
    printf("\n");
}

void pintarTablero() {
    for (int fila = 1; fila <= 8; fila++) {
        for (int columna = 1; columna <= 8; columna++) {
            if ((fila + columna == falfil + calfil) || (fila - columna == falfil - calfil)) {
                printf("* "); 
            } else if ((fila + columna) % 2 == 0) {
                printf("B "); 
            } else {
                printf("N "); 
            }
        }
        printf("\n"); 
    }
}

int main() {
    obtenerPosicionAlfil(); 
    pintarTablero();       
    return 0;
}

