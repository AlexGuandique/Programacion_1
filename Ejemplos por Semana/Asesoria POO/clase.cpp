#include<iostream>
#include<string>

using namespace std;

class Persona
{
    //Atributos (estado) -----> Datos miembro, Variables miembro
    private:
    string nombre;
    string apellido;
    
    //Metodos (comportamiento) ----> Funciones miembro
    public:
    Persona() //Constructor por defecto
    {
        nombre = "Sin Nombre";
        apellido = "Sin Apellido";
    }
    Persona(string nom, string ape) //Constructor Parametrizado
    {
        nombre = nom;
        apellido = ape;
    }
    void mostrarPersona()
    {
        cout << "******** Persona Obj ********"<<endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "*****************************"<<endl;
    }
};

int main()
{
    Persona person;
    person.mostrarPersona();
    
    Persona person2("Vilma", "Reyes");
    person2.mostrarPersona();
}
    
  