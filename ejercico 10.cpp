#include <conio.h>
#include <stdio.h>

int main(){


float l,g,t=0,gt,tt;
printf("Litros gastados en un mes; \n");
scanf("%f",&l);

if(l>50 && l<=199){
	t = l-50;
	g = t*10;

}

else{

	t= l-50;
	g = t*20;


}
if(g<=200)
{
	g=200;
}
	printf("\n Pagar: %f",g);
}



