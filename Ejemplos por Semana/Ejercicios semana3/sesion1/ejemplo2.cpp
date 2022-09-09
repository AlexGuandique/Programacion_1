#include <iostream>
using namespace std;

//Cadena de C ++ para leer una línea de texto
int main()
{
    char str[100];
    cout << "Ingresa una cadena: ";
    cin.get(str, 100);
    cout << "La cadena ingresada: " << str << endl;
}