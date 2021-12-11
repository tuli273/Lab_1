/*Ejercicio 30. Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B es mayor o menor
que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa le dirá
el número de intentos que tardo el usuario en adivinar el número.
Nota: para generar el número aleatorio use la función rand() de la librería <cstdlib>, recuerde
convertirlo al rango (0,100).
 */

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
   srand(time(NULL));
   int N,valor,i=0;
   valor = rand() % 101;
   cout<<valor<<endl;
   while(1){
       i++;
       cout<<"Ingrese un numero:";
       cin>>N;
       if (N>valor){
           cout<<"N es mayor que el numero"<<endl;
       }
       else if (N<valor){
           cout<<"N es menor que el numero"<<endl;
       }
       else{
           break;
       }
   }
   cout<<"El número es: "<<valor<<endl;
   cout<<"El número que tuvo para adivinar fue: "<<i<<endl;
}
