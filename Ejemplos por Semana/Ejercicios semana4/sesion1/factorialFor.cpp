//Factorial de un numero
#include<iostream>

using namespace std;

int main()
{
    unsigned int numero;
    int factorial = 1;
    cout<< "********** Factorial de un numero **********\n";
    cout << "Ingresa un numero: ";
    cin >> numero;

    if(numero == 0){
        cout <<"El factorial de "<<numero<< " es: "<<factorial;
    } 
    else
    {
        for(int i = numero; i >= 1; i--){
            factorial *= i;  
        }
        cout<<"El factorial de "<<numero<<" es: "<<factorial<<endl;
    }
}