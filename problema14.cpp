/*Problema 14. La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
7
Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Nota: la salida del programa debe ser:
La serie mas larga es con la semilla: j, teniendo m terminos.
Otra nota: se le dará una bonificación si imprime la serie.
 */
#include <iostream>
using namespace std;
int main(){
    int N,i=1;
    cout<<"Ingresa un numero mayor que 0: ";
    cin>>N;
    if (N<=0) {
        cout<<"El numero es menor que 0";
    }
    else if (N==1 or N==2) {
    cout<<"Para la semilla "<<N<<": "<<N<<",";
    while(N!=1){
        i++;
        if (N%2==0){
            if (N/2==1){
            N=N/2;
            cout << N<<endl;
            }
            else{
                N=N/2;
                cout << N<<",";
            }
        }
        else{
            N=(3*N)+1;
            cout <<N<<",";
        }
    }
    cout<<"La serie tiene "<<i<<" terminos";
    }
    else {
   int numero_serie,auxiliar;
   int tamanoSM=0;

   for(int i=N-1;i!=1;i-=1){

       int tamanoS=0;
       auxiliar=i;

       while(auxiliar!=1){

               if(auxiliar%2==0){
                    tamanoS+=1;
                    auxiliar=auxiliar/2;
               }
               else{
                    tamanoS+=1;
                    auxiliar=(3*auxiliar)+1;
               }
       }

        if(tamanoS>tamanoSM){
               numero_serie=i;

               tamanoSM=tamanoS;
        }
   }

   cout<<"la serie mas larga es con la semilla: ";
   cout<<numero_serie;
   cout<<" teniendo "<<tamanoSM+1<<" terminos ";


   //escribir serie

   cout<<"serie: "<<numero_serie<<", ";

   while(numero_serie!=1){
           if(numero_serie%2==0){
                numero_serie=numero_serie/2;
                cout<<numero_serie<<", ";
           }
           else{
                numero_serie=(3*numero_serie)+1;
                cout<<numero_serie<<", ";
           }
   }

   cout<<" "<<endl;
    }

   return 0;
}
