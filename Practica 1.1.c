/*
 Practica 1.1 "Suma y Resta"
 Jacobo Bandera Joshua
 1AV6
*/
#include <stdlib.h>
#include <conio.h>
int main (void){
printf("Menu\n");
printf("1-Suma\n");
printf("2-Resta\n");
printf("Introduce 1 para sumar.\n");
int opt,a,b,c;
scanf("%d",&opt);
printf("Introduce el primer valor:\n");
scanf("%d",&a);
printf("Introduce el segundo valor:\n");
scanf("%d",&b);
if(opt==1){
 c=a+b;
 }
else
 c=a-b;
printf("El resultado es:%d",c);
}
