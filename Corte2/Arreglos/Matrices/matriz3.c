#include <stdio.h>

int main() {
    int N = 3;
    int M = 4;
    int matriz[3][4] = {
        {10, 2, 5, 8},
        {1, 99, 4, 7},
        {12, 6, 3, 11}
    };
    int i, j;
    int maximo;
    int minimo;
    long long suma_total = 0;
    float media;
    int total_elementos = N * M;
    
    maximo = matriz[0][0];
    minimo = matriz[0][0];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            int valor = matriz[i][j];

            if (valor > maximo) {
                maximo = valor;
            }
            if (valor < minimo) {
                minimo = valor;
            }
            suma_total = suma_total + valor;
        }
    }

    media = (float)suma_total / total_elementos;

    printf("Maximo: %d\n", maximo);
    printf("Minimo: %d\n", minimo);
    printf("Media Total: %.2f\n", media);

    return 0;
}
