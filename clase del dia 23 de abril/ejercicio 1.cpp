/* creacion de procedimiento*/
#include <iostream>

using namespace std;

//El "void" nos sirve para procesos y para agregar variables


void esPar(int num);
main()
{
    int num;
    cout << "introduce un numero"; 
    /* El "count" nos sirve para presentar la informacion es como el printf 
     o el Escribir en otros lenguages*/
     
    cin >> num;/* El "cin" se utiliza para guardar los datos del count */
    esPar(num);
    
}
void esPar(int num){
    if (num %2 ==0)
    {
        printf("El numero es par");
    }
    
    
}