#include <stdio.h>
#include <math.h>

void calcularSalario(float horasTrabajadas);

int main()
{
    float horasTrabajadas;
    printf("Introduce las horas trabajadas: ");
    scanf("%f", &horasTrabajadas);
    calcularSalario(horasTrabajadas);
    return 0;
}

void calcularSalario(float horasTrabajadas)
{
    float salario;
    if (horasTrabajadas <= 160)
    {
        salario = horasTrabajadas * 6.5;
    }
    else
    {
        salario = 160 * 6.5 + (horasTrabajadas - 160) * 7.5;
    }
    printf("El salario es: %.2f\n", salario);
}
