// programa que permita leer el valor correspondiente
// a una distancia en kilometros y las visualice en metros. utiliza una funcion

#include <stdio.h>
int conversion(int km);

int main(int argc, char const *argv[])
{
    int km, metros;
    printf("ingrese los kilometros:");
    scanf("%i", &km);
   metros= conversion(km);
    printf(" su conversion de km a metros es:%i", metros);
    return 0;
}
int conversion(int km)
{
    return km * 1000;
}