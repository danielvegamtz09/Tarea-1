#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]){

float h,e,t,cm;

 printf ("Estatura en metros. \n ");
 scanf("%f",&h);
 printf ("Edad.\n");
 scanf("%f",&e);
 printf("altura: %f",h);
 printf("\n edad: %f \n",e);
 cm= h*100;
 t =((cm-100)+(e*0.10))*0.9;
 printf("\n Peso recomendado: %f",t);

return 0;
}
