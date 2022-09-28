#include<iostream>
using namespace std;

//Ejemplo 1: Cadena C ++ para leer una palabra
int main()
{
    char cadena[100];

    cout << "Ingresa una cadena: ";
    cin.getline(cadena, sizeof(cadena));
    cout << "Cadena Ingresada: " << cadena << endl;

    cout << "\nIngresa otra cadena: ";
    cin >> cadena;
    cout << "Cadena Ingresada: "<<cadena<<endl;
}
