#include <iostream>

using namespace std;

int main(int argc, char)

{
    int num, sum = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    cout << "La suma de los numeros naturales desde 1 hasta " << num << " es: " << sum << endl;
}
