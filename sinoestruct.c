#include <stdio.h>

char respuesta;

void obtenerRespuesta() {
    do {
        printf("Desea continuar s/n (sí o no)? ");
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { } 

        scanf("%c", &respuesta);

        if (respuesta != 's' && respuesta != 'n') {
            printf("Por favor, ingrese solo 's' o 'n'.\n");
        }
    } while (respuesta != 's' && respuesta != 'n');
}

int main() {
    obtenerRespuesta(); 
    return 0;
}
 
