/*Problema 6. Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.
 */
#include <iostream>

using namespace std;
int main(){
      int a,b,c;
    cout << "Ingrese el primero numero: ";
    cin >> a; //5
    cout << "Ingrese el segundo numero: ";
    cin >> b; //3
    cout << "Ingrese el tercer numero: ";
    cin >> c; //10
    int d=0, e=0;
    for(int cont=a;cont<c;cont++){ //5;5<10;6
    if(cont%a==0){
                     cout << cont <<"+";
                     d=d+cont;
                 }
                 else if(cont%b==0){

                 }
}
        for(int cont=b;cont<c;cont++){//3;3<10
                     if(cont%a==0){

                     }
                     else if(cont%b==0){
                         if(cont==c-1){
                            cout<<cont;
                            e=e+cont;
                         }
                         else {
                        cout<<cont<<"+";
                        e=e+cont;
                     }
                     }
                 }
             cout << " = "<<d+e<<endl;



return 0;
}
