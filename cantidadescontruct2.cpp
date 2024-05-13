#include <stdio.h>

// Subalgoritmo para imprimir un d�gito
void imprimirDigito(int digito) {
    printf("%d\n", digito);
}

// Subalgoritmo para imprimir d�gitos del 0 al 9 usando do-while
void imprimirDigitos() {
    int digito = 0;
    do {
        imprimirDigito(digito);
        digito++;
    } while (digito <= 9);
}

int main() {
    imprimirDigitos(); // Llamada al subalgoritmo para imprimir los d�gitos
    return 0;
}

