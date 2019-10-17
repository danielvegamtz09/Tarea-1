#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <String.h>

int main(int argc, char *argv[]) {


int numero;

printf("\n Escriba un numero entero: " );
scanf("%d", &numero);

if (numero % 2 == 0)
printf("\n Par");

else
printf("\n Impar");

return 0;
}
