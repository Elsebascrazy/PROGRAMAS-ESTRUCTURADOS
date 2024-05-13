#include <stdio.h>


void imprimirDigito(int digito) {
    printf("%d\n", digito);
}


void imprimirDigitos() {
    int digito = 0;
    while (digito <= 9) {
        imprimirDigito(digito);
        digito++;
    }
}

int main() {
    imprimirDigitos();
    return 0; 
}

