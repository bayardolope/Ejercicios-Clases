#include <stdio.h>

int sumar();
int restar();
int multiplicacion();
int dividir();

int main(int argc, char const *argv[])
{
    int opcion;
    printf("1.sumar...\n");
    printf("2.restar...\n");
    printf("3.multiplicacion...\n");
    printf("4.dividir...\n");
    printf("5.salir...\n");
    printf("Elige una opcion...\n");

    scanf("%i", &opcion);

    if (opcion == 1)
    {
        printf("La suma de los dos numeros es igual :%i\n", sumar());
    }
    else if (opcion == 2)
    {
        printf("La resta de los numeros es:%i\n", restar());
    }
    else if (opcion == 3)
    {
        printf("La multiplicacion es :%i\n", multiplicacion());
    }
    else if (opcion == 4)
    {
        printf("La division es :%i\n", dividir());
    }
    else if (opcion==5)
    {
        printf("adios");
    }
    
    else
    {
        printf("opcion invalida");
    }

    if (opcion != 5)
    {
        main(0, 0);
    }

    return 0;
}

int sumar()
{
    int numero1, numero2;
    printf("Dame el primer numero: ");
    scanf("%i", &numero1);
    printf("Dame el segundo numero: ");
    scanf("%i", &numero2);
    return numero1 + numero2;
}
int restar()
{
    int numero1, numero2;
    printf("Dame el primer numero: ");
    scanf("%i", &numero1);
    printf("Dame el segundo numero: ");
    scanf("%i", &numero2);
    return numero1 - numero2;
}
int multiplicacion()
{
    int numero1, numero2;
    printf("Dame el primer numero: ");
    scanf("%i", &numero1);
    printf("Dame el segundo numero: ");
    scanf("%i", &numero2);
    return numero1 * numero2;
}
int dividir()
{
    int numero1, numero2;
    printf("Dame el primer numero: ");
    scanf("%i", &numero1);
    printf("Dame el segundo numero: ");
    scanf("%i", &numero2);

    if (numero2 > 0)
        return numero1 / numero2;
}
