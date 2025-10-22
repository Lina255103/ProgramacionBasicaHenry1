#include <stdio.h>

int main() {
    float numero;
    int positivos = 0;
    int negativos = 0;

    printf("Ingrese numeros :\n");

    do {
        printf("Numero: ");
        scanf("%f", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }

    } while (numero != 0);

    printf("\nResumen:\n");
    printf("Cantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);

    return 0;
}