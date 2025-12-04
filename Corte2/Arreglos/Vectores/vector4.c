#include <stdio.h>

int main() {
    int N = 3;
    int matriz[3][3] = {
        {3, 5, 1},
        {6, 7, 2},
        {8, 1, 9}
    };
    int maximos_fila[N];
    int i, j;
    int maximo_actual;

    for (i = 0; i < N; i++) {
        maximo_actual = matriz[i][0];
        for (j = 1; j < N; j++) {
            if (matriz[i][j] > maximo_actual) {
                maximo_actual = matriz[i][j];
            }
        }
        maximos_fila[i] = maximo_actual;
    }

    printf("Valores maximos por fila:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", maximos_fila[i]);
    }
    printf("\n");

    return 0;
}
