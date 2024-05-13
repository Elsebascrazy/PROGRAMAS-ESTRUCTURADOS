#include <stdio.h>
#include <math.h>


double area;


void calcularAreaCuadrado() {
    float lado;
    printf("Introduce el lado del cuadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("El área del cuadrado es: %.2lf\n", area);
}

void calcularAreaRectangulo() {
    int largo, ancho;
    printf("Introduce el largo y el ancho del rectángulo: ");
    scanf("%d %d", &largo, &ancho);
    area = largo * ancho;
    printf("El área del rectángulo es: %.2lf\n", area);
}

void calcularAreaTriangulo() {
    double base, altura;
    printf("Introduce la base y la altura del triángulo: ");
    scanf("%lf %lf", &base, &altura);
    area = 0.5 * base * altura;
    printf("El área del triángulo es: %.2lf\n", area);
}

void calcularAreaCirculo() {
    double radio;
    printf("Introduce el radio del círculo: ");
    scanf("%lf", &radio);
    area = M_PI * radio * radio;
    printf("El área del círculo es: %.2lf\n", area);
}


int mostrarMenu() {
    int opcion;
    printf("\n1. Área del cuadrado\n");
    printf("2. Área del rectángulo\n");
    printf("3. Área del triángulo\n");
    printf("4. Área del círculo\n");
    printf("5. Salir\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);
    return opcion;
}


void calcularAreas() {
    int opcion;
    do {
        opcion = mostrarMenu();

        switch (opcion) {
            case 1:
                calcularAreaCuadrado();
                break;
            case 2:
                calcularAreaRectangulo();
                break;
            case 3:
                calcularAreaTriangulo();
                break;
            case 4:
                calcularAreaCirculo();
                break;
            case 5:
                printf("¡Hasta luego!\n");
                break;
            default:
                printf("Opción no válida\n");
        }
    } while (opcion != 5);
}

int main() {
    calcularAreas(); 
    return 0;
}

