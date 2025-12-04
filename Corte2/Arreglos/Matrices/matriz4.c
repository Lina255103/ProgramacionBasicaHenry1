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
    int suma_maximos = 0;
    float media_maximos;

    for (i = 0; i < N; i++) {
        maximo_actual = matriz[i][0];
        for (j = 1; j < N; j++) {
            if (matriz[i][j] > maximo_actual) {
                maximo_actual = matriz[i][j];
            }
        }
        maximos_fila[i] = maximo_actual;
        suma_maximos = suma_maximos + maximo_actual;
    }

    media_maximos = (float)suma_maximos / N;

    printf("Maximos por fila: ");
    for (i = 0; i < N; i++) {
        printf("%d ", maximos_fila[i]);
    }
    printf("\n");
    printf("Media de Maximos: %.2f\n", media_maximos);

    return 0;
}
