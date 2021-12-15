/*Problema 10. Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.
 */
#include <iostream>

using namespace std;
int main(){
             int N,a,b,c;
             cout << "Ingrese un numero: ";
             cin>> N;
             a=N;
             b=2;
             c=0;
             for(;a>1;b++){
                 while(a%b==0){
                     a=a/b;
                     c=b;
                 }
             }
                 cout <<"El mayor factor primo de "<<N<<" es: "<<c<<endl;


    return 0;
}
