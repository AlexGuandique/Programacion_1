#include<iostream>
#include<string>

using namespace std;
//declarando una clase llamada Person
class  Person {
    //Datos Miembro
    private:
    string nombre;
    int edad;

    public:
    //Funciones miembro
    // constructor predeterminado para iniciar variables
    Person() {
        nombre = "Paul Gray";
        edad = 27;
        cout << "***** Creando una Persona *****" << endl;
        cout << "Nombre = " << nombre << endl;
        cout << "Edad = " << edad << endl;
    }
};



int main()
{
    Person persona1;
    Person persona2;
 
}