/* Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los números del
1 al 50 y otra con los números del 50 al 1.
Ej: las primeras lineas a imprimir serían:
1 50
2 49
3 48
 */

#include <iostream>
using namespace std;

int main()
{
    int num=1;
    int max=50;
    int j=0;
    for(int i=0;i<50;i++){
        if (i<=j){
            cout<<num;
            cout<<" ";
            num++;
            if (i<=j){
                cout<<max;
                cout<<endl;
                max--;
            }
            else{
                break;
            }
            j++;

        }
        else {
            break;
        }
    }

    return 0;
}
