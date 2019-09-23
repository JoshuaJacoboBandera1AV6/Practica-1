/*
 Practica 1.2 "Calculadora de 3 opciones"
 Jacobo Bandera Joshua
 1AV6
*/
#include <stdlib.h>
#include <conio.h>
int main(void){
printf("Menu\n");
printf("Elige una opcion:\n");
printf("1-Suma\n");
printf("2-Resta\n");
printf("3-Multiplicacion\n");
int opt,a,b,c;
scanf("%d",&opt);
printf("Introduce el primer valor:\n");
scanf("%d",&a);
printf("Introduce el segundo valor:\n");
scanf("%d",&b);
if(opt==1){
 c=a+b;
 }
else{
 if(opt==2){
  c=a-b;
  }
 else
 c=a*b;
 }
printf("El resultado es:%d",c);
}
