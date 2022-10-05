#include<iostream>
using namespace std;

int main()
{
    int i = 0;


    string cad = "fin";

    while (cad != "fin"){
        cout << "Ingresa una cadena (Escribe 'fin' para salir): " <<endl;
        getline(cin, cad);
        cout << cad;
    }
}