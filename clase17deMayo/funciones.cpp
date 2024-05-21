#include <iostream>
#include "variable.h"
#include <conio.h>

using namespace std;

int menu();
void star();
void addGrade();
void showGrade();
void NotaMasAlta();
void NotaMasBaja();
void Promedio();

int menu()
{
    int option;
    cout << "1. Ingresa notas" << endl;
    cout << "2. Muestra notas" << endl;
    cout << "3. Nota mas alta" << endl;
    cout << "4. Nota mas baja" << endl;
    cout << "5. promedio" << endl;
    cout << "6. Exit" << endl;
    cin >> option;
    return option;
}

void star()
{
    int option;
    while (option != 6)
    {
        option = menu();
        switch (option)
        {
        case 1:
            cout << "Ingresa notas" << endl;
            addGrade();

            break;
        case 2:
            showGrade();
            system("pause");
            break;
        case 3:
            NotaMasAlta();
            system("pause");
            break;
        case 4:
            NotaMasBaja();
            system("pause");
            break;
        case 5:
            Promedio();
            system("pause");
            break;
        case 6:
            cout << "Exit" << endl;
            system("pause");
            break;

        default:
            cout << "Opcion no valida" << endl;

            break;
        }
        system("cls||clear");
    }
}

void addGrade()
{
    if (position < MAX)
    {
        cout << "Ingresa las notas: ";
        cin >> grades[position];
        position++;
    }
    else
    {
        cout << "No hay espacio para mas notas" << endl;
    }
}

void showGrade()
{
    cout << "Mostrar notas" << endl;

    for (int i = 0; i < position; i++)
    {
        cout << "Notas" << i + 1 << ":" << grades[i] << endl;
    }
}
void NotaMasAlta()
{
    int notaAlta = grades[0];
    for (int i = 0; i < position; i++)
    {
        if (grades[i] > notaAlta)
        {
            notaAlta = grades[i];
        }
    }
    cout << notaAlta << endl;
}

void NotaMasBaja()
{
    int notaBaja = grades[0];
    for (int i2 = 0; i2 < position; i2++)
    {
        if (grades[i2] < notaBaja)
        {
            notaBaja = grades[i2];
        }
    }
    cout << notaBaja << endl;
}

void Promedio()
{
    int suma = 0;
    float promedio;
    for (int i = 0; i < position; i++)
    {
        suma = suma + grades[i];
        promedio = suma / position;
    }
    cout << promedio << endl;
}
