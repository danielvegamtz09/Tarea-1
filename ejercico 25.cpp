#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){

char n; int j=2;
int s;
printf("Escriba una letra: ");
scanf("%c",&n);

if(n == 'R' || n == 'r'){
printf("ROJO\n");
}

else if(n == 'v' || n == 'V'){

printf("VERDE");
}

else
if(n == 'A' || n == 'a'){
printf("AZUL\n");
}

else if(n == 'N' || n == 'n'){

printf("NEGRO");
}

else {

printf("sin valor.");
}
}



