/* Ejercicio 6. Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
AB, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
5∧3=125Ejercicio 6. Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
AB, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
5∧3=125 */

#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    int acum=1;
    cout<<"Ingrese el número A:"<< endl;
    cin>>A;
    cout<<"Ingrese el número B:"<< endl;
    cin>>B;
    if(B<0){
        cout<<"El numero B tiene que ser positivo"<< endl;
    }
    else{
        for (int i=1;i<=B;i++){
            acum=acum*A;
        }
        cout<<acum;
    }
    return 0;
}
