#include <stdio.h>
#include <math.h>

void cambiarSigno(int *numero);

int main()
{
    int numero;
    printf("Introduce un número: ");
    scanf("%d", &numero);
    cambiarSigno(&numero);
    printf("El número con signo cambiado es: %d\n", numero);
    return 0;
}

void cambiarSigno(int *numero)
{
    *numero = -(*numero);
}


