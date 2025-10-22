#include <stdio.h>

int main() {
    float apuesta;
    int resultado;

    printf("Ingrese la cantidad que desea apostar: ");
    scanf("%f", &apuesta);

    printf("Ingrese el resultado del lanzamiento (1 para cara, 0 para cruz): ");
    scanf("%d", &resultado);

    printf("\nResultado\n");

    if (resultado == 1) {
        printf("Salio cara\n");
        printf("Ganaste: %f\n", apuesta * 2);
    } else {
        printf("Salio cruz\n");
        printf("Perdiste todo.\n");
    }

    return 0;
}