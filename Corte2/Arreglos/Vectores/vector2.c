#include <stdio.h>

int main() {
    int N = 5;
    int vector[N];
    int pares_ingresados = 0;
    int num;
    int i;

    while (pares_ingresados < N) {
        printf("Ingrese un numero par: ");
        if (scanf("%d", &num) != 1) {
            while (getchar() != '\n');
            continue;
        }

        if (num % 2 == 0) {
            vector[pares_ingresados] = num;
            printf("Posicion: %d\n", pares_ingresados);
            pares_ingresados++;
        } else {
            printf("Error. Solo se aceptan numeros pares.\n");
        }
    }

    return 0;
}
