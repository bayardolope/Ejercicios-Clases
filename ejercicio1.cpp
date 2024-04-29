#include <iostream>

using namespace std;

void esPar(int num);

int main() {
    int num;
    cout << "Introduce un número: ";
    cin >> num;
    esPar(num);
    return 0;

}

void esPar(int num) {
    if (num % 2 == 0) {
        cout << "El número " << num << " es par" << endl;
    } else {
        cout << "El número " << num << " es impar" << endl;
    }
}

// Output