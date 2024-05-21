// almacenar 10 elementos y sumarlos
#include <stdio.h>
#include <math.h>
int main()
{
    int elementos[10];
    int suma;
    elementos[0] = 23;
    elementos[1] = 4;
    elementos[2] = 4;
    elementos[3] = 6;
    elementos[4] = 89;
    elementos[5] = 0;
    elementos[6] = 12;
    elementos[7] = 3;
    elementos[8] = 5;
    elementos[9] = 8;
    suma = elementos[0]  + elementos[1]  + elementos[2]  + elementos[3]  + elementos[4]  + elementos[5]  + elementos[6]  + elementos[7]  + elementos[8]  + elementos[9] ;
    printf("La suma de los elementos:%i\n", suma);

    return 0;
}
