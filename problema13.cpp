/* Problema 13. Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario
se genera una espiral de números como la siguiente:
21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13
En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101.
Escriba un programa que reciba un número impar n y calcule la suma de los números en la diagonal
de una espiral de nxn.
Nota: la salida del programa debe ser:
En una espiral de 5x5, la suma es: 101.
Otra nota: se le dará una bonificación si imprime la espiral.
 */

#include <iostream>
using namespace std;
int main(){

    cout<<"Ingrese un numero impar: ";
    int N;
    int contador1=0;
    cin>>N;

    if (N%2==0){
        cout<<"El numero ingresado es par"<<endl;
    }
    else {

    int suma_principal=0;
    for(int i=3;i<=N;i+=2){

        contador1+=1;
        suma_principal+=i*i;

    }

    int suma_pares=0;

    for(int i=2;i<=contador1*2;i+=2){
        suma_pares+=i;
    }

    int suma_total=0;

    int au;
    au=suma_principal;

    for(au;au!=(suma_principal-(suma_pares*4));au-=suma_pares){
        suma_total+=au;
    }

    suma_total++;

    cout<<"En una espiral de "<<N<<"x"<<N<<", la suma es: "<<suma_total<<endl;
}
    return 0;
}
