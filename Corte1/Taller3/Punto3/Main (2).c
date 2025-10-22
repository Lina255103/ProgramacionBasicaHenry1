#include <stdio.h>

int main() {
    char nombre[50];
    float horas, preciohora;
    float sueldobruto, retencion, sueldoneto;

    printf("Ingrese el nombre del trabajador: ");
    scanf("%s", nombre);

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese el precio por hora: ");
    scanf("%f", &preciohora);

    sueldobruto = horas * preciohora;
    retencion = sueldobruto * 0.05;
    sueldoneto = sueldobruto - retencion;

    printf("\n Nómina total \n");
    printf("Nombre: %s\n", nombre);
    printf("Horas trabajadas: %f\n", horas);
    printf("Precio por hora: %f\n", preciohora);
    printf("Sueldo bruto: %f\n", sueldobruto);
    printf("Retención (5%%): %f\n", retencion);
    printf("Sueldo neto: %f\n", sueldoneto);

    return 0;
}