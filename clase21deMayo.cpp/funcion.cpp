#include <iostream>
#include "variable.h"

using namespace std;

// CRUD
/*
C - Create
R - Read
U - Update
D - Delete
*/

void addReg();
void showReg();
void menu();

// create
void addReg()
{
    cout << "Datos del estudiante\n";
    cout << "CIF: ";
    scanf(" %[^\n]", people[pos].cif);
    cout << "Nombre: ";
    scanf(" %[^\n]", people[pos].name);
    cout << "Apellido: ";
    scanf(" %[^\n]", people[pos].lastName);
    cout << "Año : ";
    scanf("%d", &people[pos].year);
    pos++;
}
// read
void showReg()
{
    for (int i = 0; i < pos; i++)
    {
        printf("Nombre: %s %s \nAño: %d", people[i].name, people[i].lastName, people[i].year);
        cout << "***************************\n";
    }
}

void menu()
{
    int op = 0;
    cout << "1. Agregar\n";
    cout << "2. Mostrar\n";
    cout << "3. Salir\n";
    cout << "Opcion: ";
    cin >> op;

    switch (op)
    {
    case 1:
        addReg();
        system("pause");
        break;
    case 2:
        showReg();
        system("pause");
        break;
    case 3:

        break;

    default:
        break;
    }
}