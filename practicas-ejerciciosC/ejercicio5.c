#include <stdio.h>
#include <math.h>

void calcularSalario(float horasTrabajadas, float valorHora);

int main()
{
    float horasTrabajadas, valorHora;
    printf("Introduce las horas trabajadas: ");
    scanf("%f", &horasTrabajadas);
    printf("Introduce el valor por hora: ");
    scanf("%f", &valorHora);
    calcularSalario(horasTrabajadas, valorHora);
    return 0;
}

void calcularSalario(float horasTrabajadas, float valorHora)
{
    float salario;
    salario = horasTrabajadas * valorHora;
    printf("El salario es: %.2f\n", salario);
}
