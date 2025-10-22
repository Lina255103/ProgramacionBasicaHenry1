#include <stdio.h>

int main() {
    int numero, i, valorfijo = 1;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("El número no es primo.\n");
        return 0;
    }

    i = 2;
    while (i < numero) {
        if (numero % i == 0) {
            valorfijo = 0;
            break;
        }
        i++;
    }

    if (valorfijo == 1) {
        printf("El número %d es primo.\n", numero);
    } else {
        printf("El número %d no es primo.\n", numero);
    }

    return 0;
}