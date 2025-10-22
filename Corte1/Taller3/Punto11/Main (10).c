#include <stdio.h>

int main() {
    int intentos = 0;
    int correcta = 181;
    int clave;

    do {
        printf("Ingrese la contraseña: ");
        scanf("%d", &clave);
        intentos++;

        if (clave == correcta) {
            printf("Contraseña correcta\n");
            return 0;
        } else {
            printf("Lo siento, contraseña equivocada\n");
        }

    } while (intentos < 3);

    printf("\nHas superado el número de intentos permitidos.\n");

    return 0;
}
