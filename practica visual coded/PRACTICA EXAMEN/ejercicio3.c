// programa para calcular el area y perimetro de un rectangulo dada la base y la altura.
// Utiliza una funcion diferente por cada calculo.
#include <stdio.h>
int area(int h, int b);
int perimetro(int h, int b);

int main(int argc, char const *argv[])
{
    int b, h;
    printf("Dame la base: ");
    scanf("%i", &b);
    printf("Dame la altura: ");
    scanf("%i", &h);
    printf("El area es: %i\n", area(h, b));
    printf("El perimetro es: %i\n", perimetro(h, b));
    return 0;
}

int area(int h, int b)
{
    return h * b;
}
int perimetro(int h, int b)
{
    return 2 * (b + h);
}