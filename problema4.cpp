/*Problema 4. Escriba un programa que encuentre el valor aproximado del número de euler en base
a la siguiente suma infinita:
e =1/0!+1/1!+1/2!+1/3!+1/4!+1/5!+ ... (2)
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 e = 1
0! + 1
1! + 1
2! = 2,5
Nota: el formato de salida debe ser: e es aproximadamente: 2.5
 */
#include <iostream>
using namespace std;

int main()
{
    int A;
    float factorial_total=1.0;
    float sum=0.0;
    cout <<"Ingrese un numero:";
    cin>>A;
    A=A-1;
    int i=A;
    while(i>0){
        while(A>=1){
        factorial_total*=A;
        A=A-1;
    }
    A=i-1;
    i=i-1;
    sum=sum+(1/factorial_total);
    factorial_total=1.0;
    }
    cout<<"e es aproximadamente "<<sum+1.0<<endl;
    return 0;
}
