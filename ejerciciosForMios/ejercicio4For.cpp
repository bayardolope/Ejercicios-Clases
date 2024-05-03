
#include <iostream>

using namespace std;

const int numEstudiantes = 10;
double notas[numEstudiantes];
double sumaNotas = 0.0;
double promedio;

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
    }

    promedio = sumaNotas / numEstudiantes;

    cout << "El promedio general de la seccion es: " << promedio << endl;
    cout << "--------------------------------------" << endl;
    cout << "Gracias por utilizar este programa para calcular el promedio general de la sección. Vuelve pronto" << endl;

    return 0;
}
