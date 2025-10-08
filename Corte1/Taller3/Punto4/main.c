#include <stdio.h>

int main () {
int a , b , c;
printf("Primer número");
scanf("%d",&a);

printf("Segundo número");
scanf("%d",&b);

printf("Tercer número");
scanf("%d", &c);

if( a > b , c) {
printf("Número mayor: %d\n", a);

} else if(a < b) {
printf("Número mayor: %d\n", b);

} else {
printf("Los números son iguales: %d\n", a);
}


}
