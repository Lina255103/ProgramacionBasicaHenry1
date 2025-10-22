#include <stdio.h>

int main() {
    char producto[50];
    float precio;
    int cantidad;
    float total;

    printf("Ingrese el nombre del producto: ");
    scanf("%s", producto);

    printf("Ingrese el precio por unidad: ");
    scanf("%f", &precio);

    printf("Ingrese el valor de unidades: ");
    scanf("%d", &cantidad);

    total = precio * cantidad;

    printf(" \ntotal de la factura \n");
    printf("Producto: %s\n", producto);
    printf("Unidades: %d\n", cantidad);
    printf("Precio total: %f\n", total);

    return 0;
}