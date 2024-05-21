#include <stdio.h>

int main()
{
    /* Leer un numero y decir si es par o impar */
    int num;
    printf("Dime el numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
    
        printf("el numero %d es par\n", num);
    }
    else
    {
        
        printf("El numero %d es impar:", num);
    }
    return 0;
}
