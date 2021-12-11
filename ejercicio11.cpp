/* Ejercicio 22. Escriba un programa que pida una cantidad entera de segundos y la imprima en
formato horas:minutos:segundos.
Ej: si se ingresa 7777 se debe imprimir:
2:9:37
 */
#include <iostream>
using namespace std;

int main()
{
    int n,horas,minutos,segundos;
    std::cout << "Ingrese una cantidad entera de segundos: ";
    cin>>n;
    horas=n/3600;
    n=n%3600;
    minutos=n/60;
    segundos=n%60;
    cout<<horas<<":"<<minutos<<":"<<segundos;
    return 0;
}
