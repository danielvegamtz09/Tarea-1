#include <conio.h>
#include <stdio.h>

int main(){

int vector[10];
int i,u,m;

printf( "Escriba  10 numeros enteros\n ");
for (i=0; i<10; i++){

printf( "Numero %d: \n ", i+1);
scanf("%d", &vector[i]);
u += vector[i];
}
m=(u-1)/10;
int maximo, minimo;
maximo = vector[0];
minimo = vector[0];

for (i=0; i<10; i++){
if (vector[i]> maximo){
maximo=vector[i];
    }
if (vector[i]< minimo){
minimo=vector[i];
    }
}
printf("Maximo es %d\n", maximo);
printf("Minimo es %d\n", minimo);
printf("Media es: %d\n", m);

}





