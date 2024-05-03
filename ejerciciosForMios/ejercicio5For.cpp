#include <iostream>

using namespace std;

const int numEstudiantes = 8;
double notas[numEstudiantes];
double sumaNotas = 0.0;
double promedio;
int aprobados = 0;
int reprobados = 0;

int main(int argc, char)
{

    cout << "Ingresa las notas de los " << numEstudiantes << " estudiantes:" << endl;
    for (int i = 0; i < numEstudiantes; ++i)
    {
        cout << "Nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
    }

    for (int i = 0; i < numEstudiantes; ++i)
    {
        sumaNotas += notas[i];
        if (notas[i] >= 70)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }

    promedio = sumaNotas / numEstudiantes;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;
    cout << "--------------------------------------" << endl;
    cout << "Gracias por utilizar este programa, vuelve pronto";

    return 0;
}