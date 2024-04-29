#include <stdio.h>
#include <math.h>

void convertirMillas();

int main()
{
    convertirMillas();
    return 0;
}

void convertirMillas()
{
    float millas;
    printf("Introduce la distancia en millas: ");
    scanf("%f", &millas);
    printf("La distancia en metros es: %.2f\n", millas * 1852);
}
