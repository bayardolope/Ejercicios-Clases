#include <iostream>

using namespace std;

int main() {
    int n;
    
    // Solicitar al usuario el número de números impares que desea mostrar
    cout << "Ingrese la cantidad de números impares que desea mostrar: ";
    cin >> n;
    int count = 0;
    int num = 1;
    while (count < n) {
        if (num % 2 != 0) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    
    cout << endl;
    
    return 0;
}
