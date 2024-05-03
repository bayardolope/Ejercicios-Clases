#include <iostream>

using namespace std;

int main()
{
    int matriz1[2][2];
    int matriz2[2][2];
    int matriz3[2][2];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << "Ingrese el elemento (" << i << "," << j << "): ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << "Ingrese el elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}