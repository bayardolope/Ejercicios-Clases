#include <iostream>

using namespace std;

int main(int argc, char)
{
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n], vector2[n], vectorSuma[n];
    cout << "Ingrese los elementos del primer vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vector1[i];
    }

    cout << "\nIngrese los elementos del segundo vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++)
    {
        vectorSuma[i] = vector1[i] + vector2[i];
    }

    cout << "\nLa suma de los dos vectores es: ";
    for (int i = 0; i < n; i++)
    {
        cout << vectorSuma[i] << " " << endl;
        cout << "Vuelva pronto!";
    }

    return 0;
}