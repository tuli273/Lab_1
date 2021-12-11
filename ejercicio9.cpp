/* Ejercicio 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.
Ej: si se ingresa 9 se debe imprimir:
9 es un cuadrado perfecto.
y si se ingresa 8 se debe imprimir:
8 NO es un cuadrado perfecto.
 */
#include <iostream>
using namespace std;

int main()
{
    int n,cuadrado_perfecto;
    cout<<"Ingrese un numero: ";
    cin>>n;
    for (int i=1;n>=i;i++){
        cuadrado_perfecto=i*i;
        if (n==cuadrado_perfecto){
            break;
        }
    }
    if (cuadrado_perfecto==n){
        cout<<n<<" es un cuadrado perfecto";
    }
    else {
         cout<<n<<" NO es un cuadrado perfecto";
    }

    return 0;
}
