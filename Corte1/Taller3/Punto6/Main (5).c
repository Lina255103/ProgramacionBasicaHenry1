#include <stdio.h>

int main() {
    int a, b, c;
    int valormaximo, valorminimo;

    printf("Ingrese el primer número: ");
    scanf("%d", &a);

    printf("Ingrese el segundo número: ");
    scanf("%d", &b);

    printf("Ingrese el tercer número: ");
    scanf("%d", &c);

    valormaximo = a;
    valorminimo = a;

    if (b > valormaximo) {
        valormaximo = b;
    }
    if (c > valormaximo) {
        valormaximo = c;
    }

    if (b < valorminimo) {
        valorminimo = b;
    }
    if (c < valorminimo) {
        valorminimo = c;
    }

    printf("\nEl número máximo es: %d\n", valormaximo);
    printf("El número mínimo es: %d\n", valorminimo);

    return 0;
}