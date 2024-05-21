#include <stdio.h>

int sumar();
int restar();
int multiplicar();
int dividir();

int main(int argc, char const *argv[])
{

    int opcion;
    printf("Elige una opcion...\n");
    scanf("%i",&opcion);

    if (opcion ==1)
    {
        printf("La suma es: %i\n", sumar);
    }
    else if (opcion ==2)
    {
        printf("La resta es: %i\n", restar);
    }
    else if (opcion ==3)
    {
        printf("La multiplicacion es: %i\n", multiplicar);
    }
    else if (opcion ==4)
    {
        printf("La dividir es: %i\n", dividir);
    }
    else (opcion ==5)
    {
        printf("La salir: %i\n", );
    }
    
    return 0;
}

int sumar(int numero1,int numero2){
    printf("Dame el primer numero:");
    scanf("%i", &numero1);

}