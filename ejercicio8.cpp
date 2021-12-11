/* Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el número
cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El promedio es: 2
 */

#include <iostream>
using namespace std;
int main()
{
    int N;
    double prom,j;
    cout<<"Ingrese un numero N: ";
    cin>>N;
    if(N==0){
        cout<<"El promedio es: "<<0;
    }
    else{
    while (N!=0){
        prom=prom+N;
        j++;
        cout<<"Ingrese un numero N: ";
        cin>>N;
    }
    prom=prom/j;
    cout<<"El promedio es: "<<prom<<endl;
    }
    return 0;
}
