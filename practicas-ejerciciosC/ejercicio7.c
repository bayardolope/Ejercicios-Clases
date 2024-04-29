#include <stdio.h>
#include <math.h>

void calcularArea(float base, float altura);
void calcularPerimetro(float base, float altura);

int main()
{
    float base, altura;
    printf("Introduce la base del rectángulo: ");
    scanf("%f", &base);
    printf("Introduce la altura del rectángulo: ");
    scanf("%f", &altura);
    calcularArea(base, altura);
    calcularPerimetro(base, altura);
    return 0;
}

void calcularArea(float base, float altura)
{
    float area;
    area = base * altura;
    printf("El área del rectángulo es: %.2f\n", area);
}

void calcularPerimetro(float base, float altura)
{
    float perimetro;
    perimetro = 2 * base + 2 * altura;
    printf("El perímetro del rectángulo es: %.2f\n", perimetro);
}
