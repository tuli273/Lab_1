/* Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
tamaño, los bordes del cuadrado deben estar hechos con el carácter ‘+’ y el interior debe estar vacío.
Ej: si se ingresa 4 se debe imprimir:
++++
+  +
+  +
++++
 */

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n1, temp=1, cont=1;

    cout<<"Dame un numero: ";cin>>n1;

    while (temp<=n1){

        if (temp==1 or temp==n1){

            while(cont<=n1){

                cout<<"+";
                cont++;
            }
        }

        if(temp!=1 and temp!=n1){

            while(cont<=n1){

                if(cont==1 or cont==n1){
                    cout<<"+";
                }else{
                    cout<<" ";
                }
                cont++;
            }
        }

        temp++;
        cont=1;
        cout<<endl;
    }

    return 0;
}
