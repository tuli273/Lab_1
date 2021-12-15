/*Problema 2. Se necesita un programa que permita determinar la mínima combinación de billetes
y monedas para una cantidad de dinero determinada. Los billetes en circulación son de $50.000,
$20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar
la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la
5
cantidad deseada, el sistema deberá decir lo que resta para lograrla.
Ej: si se ingresa 47810, el programa debe imprimir:
50000 : 0
20000: 2
10000 : 0
5000: 1
2000 : 1
1000: 0
500 : 1
200: 1
100 : 1
50: 0
Faltante: 10
 */
#include <iostream>

using namespace std;

int main()
{
    int dinero,n;
    cout<<"Ingrese un monto de dinero: ";
    cin>>dinero;
    n=dinero/50000;
    cout<<"50000: "<<n<<endl;
    dinero=dinero%50000;
    n=dinero/20000;
    cout<<"20000: "<<n<<endl;
    dinero=dinero%20000;
    n=dinero/10000;
    cout<<"10000: "<<n<<endl;
    dinero=dinero%10000;
    n=dinero/5000;
    cout<<"5000: "<<n<<endl;
    dinero=dinero%5000;
    n=dinero/2000;
    cout<<"2000: "<<n<<endl;
    dinero=dinero%2000;
    n=dinero/1000;
    cout<<"1000: "<<n<<endl;
    dinero=dinero%1000;
    n=dinero/500;
    cout<<"500: "<<n<<endl;
    dinero=dinero%500;
    n=dinero/200;
    cout<<"200: "<<n<<endl;
    dinero=dinero%200;
    n=dinero/100;
    cout<<"100: "<<n<<endl;
    dinero=dinero%100;
    n=dinero/50;
    cout<<"50: "<<n<<endl;
    n=dinero%50;
    if (n==0){
        cout<<"faltante: "<<0<<endl;
    }
    else {
        cout<<"faltante: "<<n<<endl;
    }
    return 0;
}
