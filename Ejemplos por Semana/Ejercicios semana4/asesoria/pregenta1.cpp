#include<iostream>
using namespace std;

int main()
{
    int numero = 7;
    int *numeroPtr = &numero;

    if(&numero == numeroPtr){
        cout << "Verdadero"<<endl;
    } 
    else 
    {
        cout << "Falso"<<endl;
    }
}