#include <stdio.h>

enum colores {
    azul, amarillo, rojo, verde, blanco, negro
};

// Variable global para almacenar el color seleccionado
enum colores colorSeleccionado;

// Subalgoritmo para leer el color introducido por el usuario
void obtenerColor() {
    printf("Color (0: azul, 1: amarillo, 2: rojo, 3: verde, 4: blanco, 5: negro): ");
    scanf("%d", &colorSeleccionado);
}

// Subalgoritmo para mostrar el color introducido y su significado (si es verde)
void mostrarColor() {
    printf("Color seleccionado: %d\n", colorSeleccionado);
    if (colorSeleccionado == verde) {
        printf("Esperanza\n");
    }
}

int main() {
    obtenerColor();  // Llamada al subalgoritmo para obtener el color
    mostrarColor();   // Llamada al subalgoritmo para mostrar el color y su significado
    return 0;
}

