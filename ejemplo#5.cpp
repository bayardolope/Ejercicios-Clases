#include <iostream>
#include <string>
#include <math.h>


using namespace std ;

// que imprimalos los numeros del 1 al 7 y que cada numero sea un numero de la semana
for (int i = 1; i <= 7; i++) {
    switch (i) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Número inválido" << endl;
            break;
    }
}
