#include<iostream>
#include<string>
using namespace std;

int main()
{
    string cadena = "Cadena string"; 
    char cad[] = "Cadena char";

    cout << "string: " << cadena<<endl;
    cout << "char: " << cad <<endl; 

    string nombre;
    string apellido;
    
    int edad;
    cout << "Ingresa tu nombre: ";
    cin >> nombre >> apellido >> edad;
    cout << nombre <<endl;
    cout << apellido <<endl;
    cout <<edad<<endl;

    string nombre_completo;
    cout << "Nombre completo: " << endl;
    //cin >> nombre_completo; no almacena la linea completa
    getline(cin, nombre_completo);
    cout << nombre_completo <<endl;

}