/*Problema 11. Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17.
 */
#include <iostream>

using namespace std;
int main(){
    int N,primo=1,suma_primo=0;
    cout<<"Ingrese un numero: "; cin>>N;
    while(primo<N){//1<10
        int divisores=0;
        for(int i=2;i<=primo;i++){
                    if(primo%i==0){divisores++;
                    }
                }
                divisores++;

                if(divisores==2){
                    suma_primo+=primo;
                }
            primo++;
    }
            cout<<suma_primo<<endl;

    return 0;
}
