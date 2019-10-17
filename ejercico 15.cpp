#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (void){

int n,j;
float s=0,i=1;

printf("Suma de la operacion ((i*i)+1)/i, cuando i=1, cuantas veces desee.\n");
printf("Escriba las veces que desee hacer la suma:\n");
scanf("%d",&n);

for(j=0;j<n;j++){
 s=s+(((i*i)+1)/i);
 i++;
}
printf("Resultado de la suma es:%f",s);
}
