// almacenar 6 elementos flotantes
#include <stdio.h>
int main(int argc, char const *argv[])

{
    float arreglo[6];
    
    arreglo[0] = 7.1;
    arreglo[1] = 4.5;
    arreglo[2] = 6.2;
    arreglo[3] = 18.5;
    arreglo[4] = 67.6;
    arreglo[5] = 34.13;

    printf("Los arreglos flotantes son:\n");
    printf("los elementos 1:%.2f \n ", arreglo[0]);
    printf("los elementos 2:%.2f \n ", arreglo[1]);
    printf("los elementos 3:%.2f \n ", arreglo[2]);
    printf("los elementos 4:%.2f \n ", arreglo[3]);
    printf("los elementos 5:%.2f \n ", arreglo[4]);
    printf("los elementos 6:%.2f \n ", arreglo[5]);
    return 0;
}
