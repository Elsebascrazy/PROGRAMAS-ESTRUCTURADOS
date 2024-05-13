#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

char letras[80];
int longitudTexto = 0;

void leerTexto() {
    int caracter;
    do {
        caracter = getchar();
        letras[longitudTexto] = caracter;
        longitudTexto++;
    } while (caracter != EOL && longitudTexto < 79); 
    letras[longitudTexto] = '\0'; 
}

void convertirYMostrarTexto() {
    for (int i = 0; i < longitudTexto; i++) {
        putchar(toupper(letras[i]));
    }
}

int main() {
    leerTexto();            
    convertirYMostrarTexto();
    return 0;
}

