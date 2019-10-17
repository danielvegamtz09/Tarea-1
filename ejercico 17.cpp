#include <conio.h>
#include <stdio.h>

int main(){

int Horas=1, Minutos=60, Segundos=60, Total;

printf( "\n   Escriba una cantidad de segundos: " );
scanf( "%d", &Segundos );
Horas = Segundos /3600;
Minutos =Segundos /60;

printf("Horas: %d \n", Horas);
printf("Minutos: %d \n", Minutos);
printf("Segundos: %d \n", Segundos);

}
