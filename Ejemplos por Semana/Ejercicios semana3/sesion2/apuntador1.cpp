#include <iostream>
using namespace std;

int main()
{
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // Imprimir direccion de var1
    cout << "Direccion de var1: "<< &var1 << endl;
    // Imprimir direccion de var2
    cout << "Direccion de var2: " << &var2 << endl;
    // Imprimir direccion de var3
    cout << "Direccion de var3: " << &var3 << endl;
}

//yPtr = &y; // asigna la dirección de y a yPtr