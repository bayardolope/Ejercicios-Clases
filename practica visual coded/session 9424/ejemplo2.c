/*leer el nombre y apellido de una persona imprimir el nombre completo*/
#include <stdio.h>
#include <string.h>
int main()
{
    /* code */
    char nom[100];
    char ape[100];
    char nom2[100];
    char ape2[100];
    printf("Dime tu nombre:  ");
    scanf("%s", nom );
    scanf( "%s", nom2);
    printf("Dime tu apellido: ");
    scanf("%s", ape );
    scanf("%s", ape2);
    printf("tu nombre completo es %s %s %s %s", nom,nom2, ape,ape2);
    return 0;
}
