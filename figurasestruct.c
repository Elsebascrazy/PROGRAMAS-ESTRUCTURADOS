#include <stdio.h>
#include <math.h>


double area;


void calcularAreaCuadrado() {
    float lado;
    printf("Introduce el lado del cuadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("El �rea del cuadrado es: %.2lf\n", area);
}

void calcularAreaRectangulo() {
    int largo, ancho;
    printf("Introduce el largo y el ancho del rect�ngulo: ");
    scanf("%d %d", &largo, &ancho);
    area = largo * ancho;
    printf("El �rea del rect�ngulo es: %.2lf\n", area);
}

void calcularAreaTriangulo() {
    double base, altura;
    printf("Introduce la base y la altura del tri�ngulo: ");
    scanf("%lf %lf", &base, &altura);
    area = 0.5 * base * altura;
    printf("El �rea del tri�ngulo es: %.2lf\n", area);
}

void calcularAreaCirculo() {
    double radio;
    printf("Introduce el radio del c�rculo: ");
    scanf("%lf", &radio);
    area = M_PI * radio * radio;
    printf("El �rea del c�rculo es: %.2lf\n", area);
}


int mostrarMenu() {
    int opcion;
    printf("\n1. �rea del cuadrado\n");
    printf("2. �rea del rect�ngulo\n");
    printf("3. �rea del tri�ngulo\n");
    printf("4. �rea del c�rculo\n");
    printf("5. Salir\n");
    printf("Selecciona una opci�n: ");
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
                printf("�Hasta luego!\n");
                break;
            default:
                printf("Opci�n no v�lida\n");
        }
    } while (opcion != 5);
}

int main() {
    calcularAreas(); 
    return 0;
}

