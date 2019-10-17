#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {

float h,e=3.1416,t,cm;

printf (" Escriba el radio: \n");
scanf("%f",&h);

t = e*(h*h);
cm = (h*2)*(2*e*h);

printf("\n 	Circunferencia: %f \n",cm);
printf("\n Area: %f",t);

return 0;
}
