#include<iostream>
#include<string>

using namespace std;
//declarando una clase llamada Person
class  Person {
    public:
    string nombre;
    int edad;

    public:
    // constructor parametrizado para iniciar variables
    Person(string name, int age) {
        nombre = name;
        edad = age;
    }
    //copiar constructor con un objeto Person como parámetro 
    //copia los datos del parámetro OBJ
    Person(Person &obj){
        nombre = obj.nombre;
        edad = obj.edad;
    }
};

int main()
{
    Person persona1("Jimmy", 20);
    cout << "***** Creando una Persona *****" << endl;
    cout << "Nombre = " << persona1.nombre << endl;
    cout << "Edad = " << persona1.edad << endl;

    Person persona2("Vilma", 21);
    cout << "***** Creando una Persona *****" << endl;
    cout << "Nombre = " << persona2.nombre << endl;
    cout << "Edad = " << persona2.edad << endl;
    
    Person persona3 = persona2;
    cout << "***** Creando una Persona copia*****" << endl;
    cout << "Nombre = " << persona3.nombre << endl;
    cout << "Edad = " << persona3.edad << endl;
}
