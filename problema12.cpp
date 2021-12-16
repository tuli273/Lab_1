/*Problema 12. Un número palíndromo es igual de derecha a izquierda y de izquierda a derecha,
Ej: 969. escriba un programa que calcule el número palíndromo más grande que se puede obtener
como una multiplicación de números de 3 dígitos.
Ej: una de las posibles respuestas es: 143*777=111111.
Nota: la salida del programa debe ser: 143*777=111111
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,N,e,f,d;
                cout << "Ingrese el numero de 3 digitos: " ;
                cin >>N;
                b=100;
                bool c= false;
                while (c==false){
                    for(;b<1000;b++){
                        a=b*N;
                        d=a;
                        e=0;
                        while(d>0){
                            e= e + d%10;
                            e=e*10;
                            d=d/10;
                            if(e/10==a){
                                c=true;
                                f=e/10;
                                cout<<"una de las posibles respuestas es: "<<b<<"*"<<N<<"= "<<f<<endl;
                            }
                        }
                    }
                }


       return 0;
}
