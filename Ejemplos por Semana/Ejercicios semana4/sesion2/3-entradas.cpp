#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    string nombre;
    string apellido;
    
    int x;
    int y;
    int z;

    cout << "Ingresa tu nombre: ";
    getline(cin, nombre);
    cout << "Tu nombre es: " << nombre<<endl;

    cout << "\nIngresa tu nombre: ";
    cin >> nombre >> apellido;
    cout << "Tu nombre es: " << nombre << apellido;

    cout<<"Ingresa los valores de los enteros para X, Y, Z: "<<endl;
    cin >> x >> y >> z;
    cout << x << setw(5) << y << setw(5) << z;
}