/*Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N1
hasta N^5.
Ej: si se ingresa 3 se debe imprimir:
3^1=3
3^2=9
3^3=27
3^4=81
3^5=243
 */

#include <iostream>
using namespace std;

int main()
{
    int A;
    int acum=1;
    int j=1;
    cout << "Ingrese un numero positivo: ";
    cin >>A;
    if (A<=0){
        cout << "El numero ingresado es menor que 0";
    }
    else {
        for(int i=1;i<=5;i++){
            acum=acum*A;
            cout<<A<<"^"<<j<<"="<<acum<<endl;
            j++;
        }
    }
    return 0;
}
