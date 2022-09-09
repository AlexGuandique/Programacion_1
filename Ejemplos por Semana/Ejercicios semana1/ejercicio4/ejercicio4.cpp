#include<iostream>

using namespace std;

int main()
{
    int n1, n2 = 0;
    cout<<"Ingresa dos numeros enteros: ";
    cin>>n1>>n2;

    if(n1==n2)
    {
        cout<<"Estos numeros son iguales: "<<n1<<"="<<n2;
    } 
    else{
        cout<<"El mas grande es: "<<max(n1, n2)<<endl;
    }

}