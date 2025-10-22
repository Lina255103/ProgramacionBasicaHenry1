#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main() {
    int opcion;
    float lado, base, altura, radio, area, perimetro;
    char continuar;

    do {
        printf("\nElige una figura para calcular:\n");
        printf("1. Cuadrado\n");
        printf("2. Rectángulo\n");
        printf("3. Triángulo\n");
        printf("4. Círculo\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingresa el valor del lado del cuadrado: ");
                scanf("%f", &lado);
                area = lado * lado;
                perimetro = 4 * lado;
                printf("Área = %f, Perímetro = %f\n", area, perimetro);
                break;

            case 2:
                printf("Ingresa la base: ");
                scanf("%f", &base);
                printf("Ingresa la altura: ");
                scanf("%f", &altura);
                area = base * altura;
                perimetro = 2 * (base + altura);
                printf("Área = %f, Perímetro = %f\n", area, perimetro);
                break;

            case 3:
                printf("Ingresa la base: ");
                scanf("%f", &base);
                printf("Ingresa la altura: ");
                scanf("%f", &altura);
                area = (base * altura) / 2;
                perimetro = 3 * base; 
                printf("Área = %f, Perímetro = %f\n", area, perimetro);
                break;

            case 4:
                printf("Ingresa el radio: ");
                scanf("%f", &radio);
               area = PI * (radio * radio);
                perimetro = 2 * PI * radio;
                printf("Área = %f, Perímetro = %f\n", area, perimetro);
                break;

            default:
                printf("Opción no válida.\n");
                break;
        }

        printf("¿Deseas calcular otra figura? (si/no): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Terminar programa.");
    return 0;
}