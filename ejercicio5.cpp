/* Ejercicio 10. Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos
de dicho número entre 1 y 100.
Ej: si se ingresa 33 se debe imprimir:
Multiplos de “33” menores que 100:
33
66
99
 */

#include <iostream>
using namespace std;

int main()
{
    int A;
    int j=1;
    int multiplo=1;
    std::cout << "Ingrese un numero: ";
    cin>>A;
    cout <<"Multiplos de "<<A<<" menores que 100: "<<endl;
    while(multiplo<100){
        multiplo=j*A;
        j++;
        if(multiplo>100){
            break;
        }
        else{
        cout <<multiplo<<endl;
        }
    }

    return 0;
}
