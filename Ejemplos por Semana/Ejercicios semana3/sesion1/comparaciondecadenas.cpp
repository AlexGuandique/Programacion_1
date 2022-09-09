#include<iostream>
using namespace std;

int main()
{
    string c1 = "Universo Jamaicano";
    string c2 = "Universo Visual";

    if (c1 < c2)
    {
        cout << c1 << ", es alfabeticamente menor que " << c2 << endl;
    }
    else if (c1 > c2)
    {
        cout << c1 << ", es alfabeticamente mayor que " << c2 << endl;
    }    
    cout << "Entrada de cadenas, termina con FIN" << endl;
    // bucle condicional, termina con una cadena clave
    while (c1 != "FIN")
    {
        cin >> c1;
        cout << "Cadena leida: " << c1 << endl;
    }
}   