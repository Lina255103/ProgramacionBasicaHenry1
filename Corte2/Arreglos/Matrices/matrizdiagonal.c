#include <stdio.h>

void leematriz(int n, int a[50][50]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void ordene(int n, int a[50][50]) {
    int i, j;
    int k, l;
    int temp;
    int total = n * n;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = i; k < n; k++) {
                for (l = (k == i ? j + 1 : 0); l < n; l++) {
                    if (a[i][j] > a[k][l]) {
                        temp = a[i][j];
                        a[i][j] = a[k][l];
                        a[k][l] = temp;
                    }
                }
            }
        }
    }
}

void sumatoria(int n, int a[50][50], int r[50][50]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j) {
                r[i][j] = a[i][j] + a[j][i];
            } else {
                r[i][j] = 0;
            }
        }
    }
}

void imprumatriz(int n, int a[50][50]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    int a[50][50];
    int r[50][50];

    printf("Introduzca la dimension N de la matriz (N<=50): ");
    scanf("%d", &n);

    if (n < 2 || n > 50) {
        printf("N debe estar entre 2 y 50.\n");
        return 1;
    }

    printf("Introduzca los %d elementos de la matriz original:\n", n * n);
    leematriz(n, a);

    printf("\nMatriz Original:\n");
    imprumatriz(n, a);

    sumatoria(n, a, r);

    printf("\nMatriz Resultante (Triangulo Inferior con Sumas, Triangulo Superior en 0):\n");
    imprumatriz(n, r);

    ordene(n, r);

    printf("\nMatriz Resultante Ordenada:\n");
    imprumatriz(n, r);

    return 0;
}