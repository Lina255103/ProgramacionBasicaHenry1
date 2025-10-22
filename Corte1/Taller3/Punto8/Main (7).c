#include <stdio.h>

int main() {
    int a;

    printf("Ingrese un año para verificar si es bisiesto: ");
    scanf("%d", &a);

    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) {
        printf("El año %d es bisiesto.\n", a);
    } else {
        printf("El año %d no es bisiesto.\n", a);
    }

    return 0;
}