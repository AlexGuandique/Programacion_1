#include<iostream>
#include <cstdlib>
using namespace std;

void mayor(int n1, int n2, int n3){
    int mayor = 0;

    if (n1>n2 && n1>n3){
        mayor = n1;
    } 
    else if (n2>n1 && n2>n3){
        mayor = n2;
    } 
    else{
        mayor = n3;
    }
    cout << "El mayor es: "<<mayor<<endl;
}

void menor(int n1, int n2, int n3){
    int menor = 0;

    if (n1<n2 && n1<n3){
        menor = n1;
    } 
    else if (n2<n1 && n2<n3){
        menor = n2;
    } 
    else{
        menor = n3;
    }
    cout << "El menor es: "<<menor<<endl;
}

int main()
{
    int n1, n2, n3 = 0;

    cout << "Ingrese 3 numeros enteros diferentes: ";
    cin >>n1>>n2>>n3;

    cout << "La suma es: "<<n1+n2+n3<<endl;
    cout << "El promedio es: "<<(n1+n2+n3)/3<<endl;
    cout << "El producto es: "<<n1*n2*n3<<endl;
    
    menor(n1, n2, n3);
    mayor(n1, n2, n3); 

    system("pause"); 
}