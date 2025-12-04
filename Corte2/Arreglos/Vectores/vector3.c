#include <stdio.h>

#define N 5

int main() {
    int vector1[N] = {1, 2, 3, 4, 5};
    int vector2[N] = {10, 20, 30, 40, 50};
    int vector_suma[N];
    int i;

    for (i = 0; i < N; i++) {
        vector_suma[i] = vector1[i] + vector2[i];
    }

    printf("Vector Suma:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vector_suma[i]);
    }
    printf("\n");

    return 0;
}
