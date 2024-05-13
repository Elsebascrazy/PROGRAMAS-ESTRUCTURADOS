#include <stdio.h>

// Variables globales
char c;
int i;
float f;
double d;

void definirVariables() {
    c = 'a';
    i = 25;
    f = 3.1416F;
    d = 2.7172;
}

void mostrarVariables() {
    printf("c vale %c\n", c);
    printf("i vale %d\n", i);
    printf("f vale %g\n", f);
    printf("d vale %g\n", d);
}

int main() {
    definirVariables();
    mostrarVariables();
    return 0; 
}
 
