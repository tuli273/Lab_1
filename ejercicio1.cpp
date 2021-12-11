/* Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
Ej: si se ingresa 5 se debe imprimir:
5 es impar */
#include <iostream>
using namespace std;

int main()
{
    int A;
    std::cout << "Ingrese un número:" << std::endl;
    cin>>A;
    if (A%2==0){
        cout <<"El numero "<<A<<" es par";
    }
    else {
        cout <<"El numero "<<A<<" es impar";
    }


    return 0;
}
