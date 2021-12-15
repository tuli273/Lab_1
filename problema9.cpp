/*Problema 9. Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
todos los números enteros entre 1 y el número ingresado.
Ej: Si se recibe 4 el programa debe imprimir 12.
Nota: la salida del programa debe ser: El minimo comun multiplo es: 12.
 */
#include <iostream>
using namespace std;
int main(){
             int num_n,a,A,B;
             cout << "Ingrese un numero N: ";
             cin >> num_n;
             a=0;
             A=num_n;
             while(a==0){
                  A+=1;
                  B=1;
                  for (;B<=num_n;B++){
                      if (A%B!=0) break;
                      else if (B==num_n) a=1;
                  }
             }
             cout << "El MCM es: " << A << endl;

    return 0;
}
