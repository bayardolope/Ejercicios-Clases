#include <stdio.h>
#include <math.h>

void convertirPulgadas(float *medida);

int main()
{
    float medida;
    printf("Introduce la medida en centímetros: ");
    scanf("%f", &medida);
    convertirPulgadas(&medida);
    printf("La medida en pulgadas es: %.2f\n", medida);
    return 0;
}

void convertirPulgadas(float *medida)
{
    *medida = *medida / 2.54;
}
