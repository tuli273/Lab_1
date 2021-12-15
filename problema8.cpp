/*Problema 8. Escriba un programa que reciba un número n e imprima el enésimo número primo.
Ej: Si recibe 4 el programa debe imprimir 7.
Nota: la salida del programa debe ser: El primo numero 4 es: 7.
 */

#include <iostream>

using namespace std;
int main(){
int contador2=0,N;
                   cout << "Ingrese un numero: "; cin >> N;



                   for(int B=1;B<=1000;B++){
                       int contador=0;
                       for(int A=1;A<=B;A++){
                           if(B%A==0){
                             // contador para saber cuando el numero es primo
                             contador += 1;

                           }
                       }
                   if (contador==2){
                      // para contar la cantidad de numeros primos de 0 a 1000 de uno en uno
                      contador2++;

                   if (contador2==N){
                      // cuando la cantidad de primos es igual a N
                      cout <<"El enesimo numero primo es: "<< B<< endl;
                  }

                  }

                   }

    return 0;
}
