#include<iostream>
using namespace std;

int main()
{
    int numero = 0;
    cout<<"Ingresa un entero: ";
    cin>>numero;

    if(numero%2==0)
    {
        cout<<"El numero "<<numero<<" es par";
    }
    else
    {
        cout<<"El numero "<<numero<<" es impar";
    }
}