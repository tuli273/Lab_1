#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    cout<<"Ingrese el numero A:";
    cin>>A;
    cout<<"Ingrese el numero B:";
    cin>>B;
    if (A>B){
        cout<<"El menor es "<<B;
    }
    else if(B>A){
        cout<<"El menor es "<<A;
    }
    else {
        cout<<"El numero "<<A<<" Y el numero " <<B<<" son iguales";
    }



    return 0;
}
