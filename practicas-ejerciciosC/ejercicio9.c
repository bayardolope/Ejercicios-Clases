#include <stdio.h>
#include <math.h>

void convertirKilometros();

int main()
{
    convertirKilometros();
    return 0;
}

void convertirKilometros()
{
    float kilometros;
    printf("Introduce la distancia en kilómetros: ");
    scanf("%f", &kilometros);
    printf("La distancia en metros es: %.2f\n", kilometros * 1000);
}
