#include <iostream>
using namespace std;

int main()
{
    string nombre;
    char apellido[80];
    cout << "Introduzca su nombre: ";
    getline(cin, nombre);
    cout << "Introduzca su apellido: ";
    cin.getline(apellido, sizeof(apellido));
    cout <<"Hola "+nombre+" "<<apellido<<" como esta usted?"<<endl;
}