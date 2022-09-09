#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a = 7;  // se asigna un 7 a la variable a
    int *aPtr = &a; // aPtr se inicializa con la dirección de la variable int a
    cout << "La direccion de a es: " << &a
    << "\nEl valor de aPtr es: " << aPtr;
    cout << "\n\nEl valor de a es: " << a
    << "\nEl valor de *aPtr es: " << *aPtr << endl;

}