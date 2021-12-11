/*Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El menor es 3 */
#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    cout<<"Ingrese el numero A: ";
    cin>>A;
    cout<<"Ingrese el numero B: ";
    cin>>B;
    if (A>B){
        cout<<"El menor es "<<B;
    }
    else if(B>A){
        cout<<"El menor es "<<A;
    }
    else {
        cout<<"El numero "<<A<<" Y el numero " <<B<<" son iguales";
    }

    return 0;
}
