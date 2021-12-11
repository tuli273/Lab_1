/*Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente
suma infinita:
π = 4(1 −1/3+1/5−1/7+1/9...) (1)
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 π = 4(1 − 1
3 + 1
5 ) = 3,46667, por lo que se debe imprimir:
pi es aproximadamente: 3.46667
 */
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Ingrese numero de elementos de aproximacion: " ;
    cin >> N;

    float result;

    for(int i=1; i<N+1; i++){
        if(i%2==0){
            result -= (4.0/((i*2.0)-1.0));
        }
        else{
            result += (4.0/((i*2.0)-1.0));
        }
    }
    cout << "pi es aproximadamente: " << result <<endl;

    return 0;
}

