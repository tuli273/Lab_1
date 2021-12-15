/*Problema 1. Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante
o ninguna de las 2 e imprima un mensaje según el caso.
Nota: el formato de salida debe ser:
no es una letra.
a es una vocal.
C es una consonante.
 */
#include <iostream>

using namespace std;

int main()
{
    char c;
    bool vocal=false;
    cout <<"Ingrese caracter: ";
    cin>>c;

    char vocales[10]={'A','E','I','O','U','a','e','i','o','u'};

    for(int i=0; i<10;i++){
        if(c==vocales[i]){
            vocal=true;
        }
    }

    if(vocal){
        cout <<c<<" es una vocal"<<endl;
    }
    else if((c>=65&&c<=90)||(c>=97&&c<=122)){
        cout <<c<<" es una consonante"<<endl;
    }
    else{
        cout <<c<<" no es una letra"<<endl;;
    }
    return 0;
}
