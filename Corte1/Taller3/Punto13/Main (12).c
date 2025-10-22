#include <stdio.h>

int main() {
    float numero, suma = 0;
    int a = 0;

    printf("Ingrese números positivos (un número negativo para terminar):\n");

    do {
        if (scanf("%f", &numero) != 1) {
            break;
        }

        if (numero >= 0) {
            suma += numero;
            a++;
        } else {
            break;
        }

    } while (1);

    if (a > 0) {
        printf("\nEl promedio de los números positivos es: %f\n", suma / a);
    } else {
        printf("\nNo se ingresaron números positivos.\n");
    }

    return 0;
}
