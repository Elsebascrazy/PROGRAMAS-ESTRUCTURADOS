#include <stdio.h>

// Subalgoritmo para imprimir un dígito
void imprimirDigito(int digito) {
    printf("%d\n", digito);
}

// Subalgoritmo para imprimir dígitos del 0 al 9 usando do-while
void imprimirDigitos() {
    int digito = 0;
    do {
        imprimirDigito(digito);
        digito++;
    } while (digito <= 9);
}

int main() {
    imprimirDigitos(); // Llamada al subalgoritmo para imprimir los dígitos
    return 0;
}

