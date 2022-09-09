#include<iostream>
#include<string>
using namespace std;

int main()
{
    string nombre = "Yoselin Aracely Joya Ortéz";
    string *nombrePtr;

    nombrePtr = &nombre;
   

    cout << "Direccion de memoria de nombre: " << &nombre<<endl;
    cout << "Direccion de memoria de nombrePtr: " << &nombrePtr<<endl;
    cout << "Direccion de memoria a la que apunta nombrePtr: " << nombrePtr <<endl;
    cout << "Valor al que apunta nombrePtr: " << *nombrePtr <<endl;
}