#include <stdio.h>

// Variables globales para los números a, b y c
float a, b, c;

// Subalgoritmo para obtener los números del usuario
void obtenerNumeros() {
    printf("Números a, b y c: ");
    scanf("%g %g %g", &a, &b, &c);
}

// Subalgoritmo para encontrar el menor de tres números
float encontrarMenor() {
    float menor = a; // Inicializamos menor con el primer número

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
    obtenerNumeros();  // Obtener los números del usuario
    mostrarResultado(); // Encontrar y mostrar el menor
    return 0;
}

