#include <stdio.h>

int main() {
    int N, M;
    int contador = 0;

    printf("Ingrese el primer numero (N): ");
    scanf("%d", &N);

    printf("Ingrese el segundo numero (M): ");
    scanf("%d", &M);

    if (N > M) {
        printf("Error: El primer numero debe ser menor o igual que el segundo\n");
        return 0;
    }

    printf("Tres numeros pares entre %d y %d son:\n", N, M);

    if (N % 2 != 0) {
        N = N + 1;
    }

    if (N <= M) {
        printf("%d\n", N);
        contador++;
    }

    if (N + 2 <= M && contador < 3) {
        printf("%d\n", N + 2);
        contador++;
    }

    if (N + 4 <= M && contador < 3) {
        printf("%d\n", N + 4);
        contador++;
    }

    if (contador < 3) {
        printf("No hay tres numeros pares entre los valores ingresados\n");
    }

    return 0;
}