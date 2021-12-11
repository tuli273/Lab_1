/*Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
(igual de derecha a izquierda que de izquierda a derecha).
Ej: si se ingresa 121 se debe imprimir:
121 es un numero palindromo.
y si se ingresa 123 se debe imprimir:
123 NO es un numero palindromo.
 */

#include <iostream>
using namespace std;

int main()
{
    int n,m=0;
    std::cout << "Ingrese un numero: ";
    std::cin >> n;
    int i=n;
    while(n>0){
        m=m+(n%10);
        m=m*10;
        n=n/10;
    }

    if (m/10==i){
        cout<<i<<" es un palindromo";
    }
    else {
        cout<<i<<" No es un palindromo";
    }


    return 0;
}
