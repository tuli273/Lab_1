/*Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120*/

#include <iostream>
using namespace std;

int main()
{
    int A;
    int factorial_total=1;
    cout <<"Ingrese un numero:";
    cin>>A;
    int i=A;
    while(A>1){
        factorial_total*=A;
        A=A-1;
    }
    cout<<i<<"!"<<"="<<factorial_total;
    return 0;
}
