#include <stdio.h>

int main() {
    int vector[5] = {10, 20, 30, 40, 50};
    int suma = 0;
    float promedio;
    int i;

    for (i = 0; i < 5; i++) {
        suma = suma + vector[i];
    }

    promedio = (float)suma / 5;

    printf("%d\n", suma);
    printf("%f\n", promedio);

    return 0;
}
