#include <stdio.h>


int totalValores;
double valores[100]; 
double resultado;
int opc;


void sumar() {
    resultado = 0;
    for (int i = 0; i < totalValores; i++) {
        resultado += valores[i];
    }
    printf("La suma de los valores es: %.2lf\n", resultado);
}

void restar() {
    resultado = valores[0]; 
    for (int i = 1; i < totalValores; i++) {
        resultado -= valores[i];
    }
    printf("La resta de los valores es: %.2lf\n", resultado);
}

void multiplicar() {
    resultado = 1;
    for (int i = 0; i < totalValores; i++) {
        resultado *= valores[i];
    }
    printf("La multiplicaci�n de los valores es: %.2lf\n", resultado);
}

void dividir() {
    if (totalValores < 2) {
        printf("Error: Se necesitan al menos dos valores para dividir.\n");
    } else if (valores[1] == 0) { 
        printf("Error: No se puede dividir por cero.\n");
    } else {
        resultado = valores[0] / valores[1];
        printf("La divisi�n de los valores es: %.2lf\n", resultado);
    }
}


void menu() {
    printf("\nMen� de opciones:\n");
    printf("1. Suma de valores\n");
    printf("2. Resta de valores\n");
    printf("3. Multiplicaci�n de valores\n");
    printf("4. Divisi�n de valores\n");
    printf("5. Salir del programa\n");
    printf("Seleccione una opci�n: ");
    scanf("%d", &opc);
}

void leerValores() {
    printf("Cantidad de valores: ");
    scanf("%d", &totalValores);

    printf("Ingrese los valores:\n");
    for (int i = 0; i < totalValores; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%lf", &valores[i]);
    }
}


void iniciarCalculadora() {
    do {
        menu();

        switch (opc) {
            case 1:
                leerValores();
                sumar();
                break;
            case 2:
                leerValores();
                restar();
                break;
            case 3:
                leerValores();
                multiplicar();
                break;
            case 4:
                leerValores();
                dividir();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opci�n inv�lida. Intente de nuevo.\n");
        }
    } while (opc != 5);
}

int main() {
    iniciarCalculadora();  // Iniciar la calculadora
    return 0;
}

