#include <stdio.h>

long int resultado_factorial; 

long int factorial(int n) {
    long int prod = 1;
    if (n > 1) {
        for (int i = 2; i <= n; ++i) {
            prod *= i;
        }
    }
    return prod;
}

void calcularFactorial() {
    int n;
    printf("\nn = ");
    scanf("%d", &n);
    resultado_factorial = factorial(n); 
}

void mostrarResultado() {
    printf("\nn ! = %ld \n", resultado_factorial); 
}

int main() {
    calcularFactorial();   
    mostrarResultado();   
    return 0;
}

