//Factorial de un numero
#include<iostream>

using namespace std;

unsigned long factorial( unsigned long); // prototipo de función

int main()
{
    unsigned long numero;
    cout<< "********** Factorial de un numero **********\n";
    cout << "Ingresa un numero: ";
    cin >> numero;
    cout << "El factorial de "<< numero << " es: " << factorial(numero);
}
// definición recursiva de la función factorial
unsigned long factorial( unsigned long numero ) 
{
    if(numero <= 1){ // evalúa el caso base
        return 1; // casos base: 0! = 1 y 1! = 1
    }
    else
    {
        return numero * factorial( numero - 1 ); // paso recursivo
    } // fin de la función factorial
}
