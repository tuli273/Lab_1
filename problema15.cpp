/**************************
Problema 15. La secuencia de números triangulares se forma al sumar su posición en el arreglo
con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
Si listamos los números triangulares y sus divisores tenemos:
1: 1
3: 1,3
6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa
que reciba un número k y calcule cual es el primer número triangular que tiene más de k divisores.
Tip: el enésimo número triangular se puede representar como n*(n+1)/2.
Nota: la salida del programa debe ser:
El numero es: 28 que tiene 6 divisores.

***************************/
#include <iostream>
using namespace std;

int main()
{
    int N,a=1,sum=1,filas=1;
    std::cout << "Ingrese un numero: "; cin>>N;
    while(sum<=N){
        cout<<a<<": ";
        for (int i=1;i<=a;i++){
            int divisores=0;
            if (a%i==0){
                if (a==i){
                    cout<<i<<endl;
                }
                else{
                cout<<i<<",";
                divisores++;
                }
            }
            else {

            }
        }
        filas++;
        sum=a+filas;
        a+=filas;

    }
    return 0;
}
