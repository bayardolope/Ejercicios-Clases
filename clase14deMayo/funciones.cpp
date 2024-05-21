/*Funciones*/
#include<stdio.h>
#include<stdlib.h>

/*Saludar*/
void showMessage();

void showMessage(){
    printf("Universidad Americana\n");
    printf("UAM \n");
}

//sumar dos numeros

void sumar(){
    int a,b ;
    printf("Dame el primer numero\n");
    scanf("%i" , &a);
    printf("Dame el segundo numero\n");
    scanf("%i" ,&b);

   int suma;
   suma= a+b;
   printf("La suma de los numeros es: %i ",suma);
}