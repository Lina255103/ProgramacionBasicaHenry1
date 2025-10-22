#include <stdio.h>
#include <stdlib.h>

int main() {
    int numerosecreto;
    int intento;
    int intentosrealizados = 0;

    printf("Jugador 1: Ingrese el numero secreto (1-10): ");
    scanf("%d", &numerosecreto);

    while (getchar() != '\n');

    printf("\nJugador 2: Adivina el numero entre 1 y 10.\n");

    do {
        printf("Ingresa tu intento: ");
        scanf("%d", &intento);
        intentosrealizados++;

        if (intento < numerosecreto) {
            printf("El numero es mayor.\n");
        } else if (intento > numerosecreto) {
            printf("El numero es menor.\n");
        }
    } while (intento != numerosecreto);

    printf("¡Felicidades! Adivinaste el numero %d.\n", numerosecreto);
    printf("Te tomó %d intentos.\n", intentosrealizados);

    return 0;
}