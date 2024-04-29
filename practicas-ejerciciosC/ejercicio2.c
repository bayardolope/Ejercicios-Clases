#include <stdio.h>
#include <math.h>

void suma();
void resta();
void multiplicacion();
void division();

void menu()
{
    int opcion;
    printf("Seleccione una operación:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("Ingrese el numero de la opción: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        suma();
        break;
    case 2:
        resta();
        break;
    case 3:
        multiplicacion();
        break;
    case 4:
        division();
        break;
    default:
        printf("Opción inválida\n");
        break;
    }
}

void suma()
{
    int a, b;
    printf("Introduce el primer numero: ");
    scanf("%d", &a);
    printf("Introduce el segundo numero: ");
    scanf("%d", &b);
    printf("La suma de %d y %d es: %d\n", a, b, a + b);
}

void resta()
{
    int a, b;
    printf("Introduce el primer número: ");
    scanf("%d", &a);
    printf("Introduce el segundo número: ");
    scanf("%d", &b);
    printf("La resta de %d y %d es: %d\n", a, b, a - b);
}

void multiplicacion()
{
    int a, b;
    printf("Introduce el primer número: ");
    scanf("%d", &a);
    printf("Introduce el segundo número: ");
    scanf("%d", &b);
    printf("La multiplicación de %d y %d es: %d\n", a, b, a * b);
}

void division()
{
    int a, b;
    printf("Introduce el primer número: ");
    scanf("%d", &a);
    printf("Introduce el segundo número: ");
    scanf("%d", &b);
    printf("La división de %d y %d es: %d\n", a, b, a / b);
}

