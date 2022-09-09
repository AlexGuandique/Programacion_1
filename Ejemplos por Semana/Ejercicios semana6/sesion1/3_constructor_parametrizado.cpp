#include<iostream>
#include<string>

using namespace std;

//declarando una clase llamada Person
class  Person {
    private:
    //Datos miembro
    string nombre;
    int edad;


    public:
    // constructor parametrizado para iniciar variables
    Person(string name, int age) {
        nombre = name;
        edad = age;
        cout << "***** Creando una Persona *****" << endl;
        cout << "Nombre = " << nombre << endl;
        cout << "Edad = " << edad << endl;
    }
};

int main()
{
    Person persona1("Vilma", 20); //llama constructor parametrizado
}
