#include <stdio.h>

int main () {
int a , b , c;
printf("Primer n�mero");
scanf("%d",&a);

printf("Segundo n�mero");
scanf("%d",&b);

printf("Tercer n�mero");
scanf("%d", &c);

if( a > b , c) {
printf("N�mero mayor: %d\n", a);

} else if(a < b) {
printf("N�mero mayor: %d\n", b);

} else {
printf("Los n�meros son iguales: %d\n", a);
}


}
