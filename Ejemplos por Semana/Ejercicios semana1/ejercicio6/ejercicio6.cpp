#include<iostream>
#include <cmath>
using namespace std;

void mayor(int n1, int n2, int n3, int n4, int n5)
{
    int x, y, z = 0;

    x = max(n1, n2);
    y = max(n3,n4);
    z = max(x, y);

    if(z > n5)
    {
        cout<<"El mayor es: "<<z<<endl;
    }
    else
    {
        cout<<"El mayor es: "<<n5<<endl;
    }

}

void menor(int n1, int n2, int n3, int n4, int n5)
{
    int x, y, z = 0;

    x = min(n1, n2);
    y = min(n3,n4);
    z = min(x, y);

    if(z < n5)
    {
        cout<<"El menor es: "<<z<<endl;
    }
    else
    {
        cout<<"El menor es: "<<n5<<endl;
    }

}

int main()
{
    int n1, n2, n3, n4, n5 = 0;
    cout<<"Ingresa 5 numeros enteros: ";
    cin>>n1>>n2>>n3>>n4>>n5;  
    mayor(n1, n2, n3, n4, n5);
    menor(n1, n2, n3, n4, n5);
}