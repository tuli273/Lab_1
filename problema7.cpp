/*Problema 7. Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 1^1 + 2^2 + 2^2 + 3^3 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.
 */
#include <iostream>
using namespace std;

int main(){
    int n; //numero
    int s=0; // suma digitos
    int j=0; // exponente
    cout<<"Ingrese un numero entero:";
    cin >>n;
    while(n>0){
        int acum=1;
        j=n%10;
        for(int i=1;i<=j;i++){
            acum=j*acum;
        }
        s=s+acum;
        n=n/10;
    }
    std::cout <<"El resultado de la suma es: "<< s << std::endl;
    return 0;
}
