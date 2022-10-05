#include<iostream>
using namespace std;

int main()
{
    string cad = "fin";

    do{   
        cout << "Ingresa una cadena (Escribe 'fin' para salir): " <<endl;
        getline(cin, cad);
        cout << cad;
    } while(cad != "fin");
}