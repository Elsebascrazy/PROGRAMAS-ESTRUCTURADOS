#include <stdio.h>

// Variables globales para los n�meros a, b y c
float a, b, c;

// Subalgoritmo para obtener los n�meros del usuario
void obtenerNumeros() {
    printf("N�meros a, b y c: ");
    scanf("%g %g %g", &a, &b, &c);
}

// Subalgoritmo para encontrar el menor de tres n�meros
float encontrarMenor() {
    float menor = a; // Inicializamos menor con el primer n�mero

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    return menor;
}

// Subalgoritmo para mostrar el resultado
void mostrarResultado() {
    float menor = encontrarMenor();
    printf("Menor = %g\n", menor);
}

int main() {
    obtenerNumeros();  // Obtener los n�meros del usuario
    mostrarResultado(); // Encontrar y mostrar el menor
    return 0;
}

