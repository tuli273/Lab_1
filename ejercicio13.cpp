/*Ejercicio 26. Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles,
equilátero, escaleno) que se formaría, si sus lados tienen la longitud definida por los números
4
ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
Ej: si se ingresan 3, 3 y 5 se debe imprimir:
Se forma un triangulo isosceles.
y si se ingresan 3, 3 y 6 se debe imprimir:
Las longitudes ingresadas no forman un triangulo.
 */
#include <iostream>
using namespace std;
int main()
{
    int L1,L2,L3;
    cout<<"Ingrese lado1: ";
    cin >> L1;
    cout<<"Ingrese lado2: ";
    cin >> L2;
    cout<<"Ingrese lado3: ";
    cin >> L3;
    if(L1+L2<=L3 or L1+L3<=L2 or L2+L3<=L1){
        cout<<"Las longitudes ingresadas no forman un triangulo";
    }
    else {
        if (L1==L2 && L1==L3){
            cout <<"Se forma un triangulo equilatero";
        }
        else if (L1==L2 || L2==L3 || L1==L3){
            cout <<"Se forma un triangulo isosceles";
        }
        else {
            cout <<"Se forma un triangulo escaleno";
        }
        }

    return 0;
}
