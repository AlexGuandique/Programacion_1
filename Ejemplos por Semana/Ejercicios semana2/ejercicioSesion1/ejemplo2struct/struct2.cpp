#include <iostream>
using namespace std;

struct Person
{
    string nombre;
    int edad;
    float salario;
};

int main()
{
    Person p1;
    
    cout << "Escribe tu nombre completo: ";
    cin >> p1.nombre;
    cout << "Escribe tu edad: ";
    cin >> p1.edad;
    cout << "Escribe tu salario: ";
    cin >> p1.salario;

    cout << "\nVisualización de información." << endl;
    cout << "Nombre: " << p1.nombre << endl;
    cout <<"Edad: " << p1.edad << endl;
    cout << "Salario: " << p1.salario;
}