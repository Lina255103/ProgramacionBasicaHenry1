#include <stdio.h>

int main() {
    int N = 3;
    int M = 4;
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int i, j;

    printf("Numeros pares en la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (matriz[i][j] % 2 == 0) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
