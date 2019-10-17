#include <conio.h>
#include <stdio.h>

int main(){

int a=0,i,n;
printf("Escriba numero\n");
scanf("%d",&n);

for(i=1;i<(n+1);i++){
if(n%i==0){
a++;
}
}
if(a!=2){
printf("No Primo");
}
else{
printf("Si Primo");
}


}

