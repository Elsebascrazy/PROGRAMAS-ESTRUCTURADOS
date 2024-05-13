#include <stdio.h>

void obtenerYMostrarCodigoASCII() {
    char car;
    while ((car = getchar()) != EOF) {  
        if (car != '\n') {            
            printf("El código ASCII de %c es %d\n", car, car);
        }
    }
}

int main() {
    printf("Introduzca una cadena de texto.\n");
    printf("Para terminar pulse Ctrl+z\n");
    obtenerYMostrarCodigoASCII(); 
    return 0;
}
 
