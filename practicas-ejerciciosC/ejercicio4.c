#include <stdio.h>
#include <math.h>

void intercambiar(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    float a, b;
    printf("Introduce el primer número: ");
    scanf("%f", &a);
    printf("Introduce el segundo número: ");
    scanf("%f", &b);
    intercambiar(&a, &b);
    printf("El primer número es: %.2f\n", a);
    printf("El segundo número es: %.2f\n", b);
    return 0;
}
