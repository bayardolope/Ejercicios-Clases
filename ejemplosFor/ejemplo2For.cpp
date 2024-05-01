#include <iostream>

using namespace std;

void agregar(int num);
void mostrar();

#define MAX 5

int numeros[MAX];
int fila = 0;

int main()
{
    int num;
    cout << "Dime cuantos # quieres ingresar : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int num;
        cout << "Dame el numero " << i + 1 << ": ";
        cin >> num;
        agregar(num);
    }
    agregar(10);
    mostrar();
    return 0;
}

void agregar(int num)
{
    if (fila >= MAX)
    {
        cout << "Ya no se pueden agregar mas numeros" << endl;
    }
    else
    {
        numeros[fila] = num;
        fila++;
    }
}

void mostrar()
{
    if (fila == 0)
    {
        cout << "No hay numeros para mostrar" << endl;
    }
    else
    {
        for (int i = 0; i < fila; i++)
        {
            cout << numeros[i] << endl;
        }
    }
}
