#include <stdio.h>

// Variables globales para el mes y el a�o
int mm, aa;

// Subalgoritmo para obtener el mes y el a�o del usuario
void obtenerMesYAno() {
    printf("Introducir mes (##) y a�o (####): ");
    scanf("%d %d", &mm, &aa);
}

// Subalgoritmo para determinar si un a�o es bisiesto
int esBisiesto() {
    return (aa % 4 == 0 && aa % 100 != 0) || (aa % 400 == 0);
}

// Subalgoritmo para calcular los d�as del mes
int calcularDiasDelMes() {
    switch (mm) {
        case 1:  // enero
        case 3:  // marzo
        case 5:  // mayo
        case 7:  // julio
        case 8:  // agosto
        case 10: // octubre
        case 12: // diciembre
            return 31;
        case 4:  // abril
        case 6:  // junio
        case 9:  // septiembre
        case 11: // noviembre
            return 30;
        case 2:  // febrero
            return esBisiesto() ? 29 : 28;
        default:
            return -1; // Valor inv�lido para indicar error
    }
}

// Subalgoritmo para mostrar el resultado y mensajes adicionales
void mostrarResultado() {
    int dias = calcularDiasDelMes();
    if (dias == -1) {
        printf("\nEl mes no es v�lido\n");
    } else {
        printf("\nEl mes %d del a�o %d tiene %d d�as\n", mm, aa, dias);

        // Mensajes de felicitaci�n (solo si el mes es v�lido)
        if (mm == 1) {
            printf("Felicidades, se cumplir�n tus deseos del mes %d\n", mm);
        } else if (mm >= 2 && mm <= 12) {
            printf("�Qu� buena elecci�n de mes! Cumpliste tus objetivos desde enero hasta el mes %d\n", mm);
        }
    }
}

int main() {
    obtenerMesYAno();  // Obtener el mes y el a�o
    mostrarResultado(); // Calcular y mostrar el resultado
    return 0;
}

