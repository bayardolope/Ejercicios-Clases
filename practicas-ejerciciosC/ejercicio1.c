#include <stdio.h>
#include <math.h>

void convertirTemperatura(float fahrenheit);

int main()
{
    float fahrenheit;
    printf("Introduce la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);
    convertirTemperatura(fahrenheit);
    return 0;
}
void convertirTemperatura(float fahrenheit)
{
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("La temperatura en grados Celsius es: %.2f\n", celsius);
}
