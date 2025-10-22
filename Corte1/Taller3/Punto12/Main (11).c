#include <stdio.h>

int main() {
    int numero, i = 1;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    printf("\nTabla de multiplicar del %d:\n", numero);

    do {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    } while (i <= 10);

    return 0;
}