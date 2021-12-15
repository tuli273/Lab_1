/*Problema 5. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1. Ej: 1, 1, 2, 3, 5, 8, ....
Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie
de Fibonacci menores a n.
Ej: si se ingresa 10, sería la suma de 2+8 =10
Nota: el formato de salida debe ser: El resultado de la suma es: 10
 */
#include <iostream>
using namespace std;

/*int main(){
  int A=1,B=1,C,numero,sumpares=0;
  cout<<"Inrgresar un numero: ";cin>>numero;

  while(B<=numero){

      C=A+B;
      A=B;
      B=C;

      if(B%2==0){
          if(B<numero){
              sumpares+=B;
          }
      }
  }
  cout<<"El resultado de la suma es: "<<sumpares<<endl;
  return 0;

 }*/
