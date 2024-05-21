/*. Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande.
*/
#include <iostream>
using namespace std;
#define MAY 10
int main()
{

    int num[MAY], numMayor = 0, cont = 0;
    while (cont < 10)
    {
        cout << "Ingrese un numero: ";
        cin >> num[cont];
        cont++;
    }
    cont=0;
    while (num[cont]<10)
    {
        if (num[cont] > numMayor)
        {
            numMayor = num[cont];
        }
        cont++;
    }

    cout<<numMayor;
    

    return 0;
}
