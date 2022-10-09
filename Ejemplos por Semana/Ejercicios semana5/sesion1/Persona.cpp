#include<iostream>
#include<string>

using namespace std;

void unafuncion();

//Definir la clase Persona
class Persona
{
    public:
        //Definir datos miembro
        string name = "Default";
        int edad = 0;
        //Definir funciones Miembro
        void mostrarPersona()
        {
            cout << "\n*************Mostrar Persona *************\n";
            cout << "Nombre: " << name << endl;
            cout << "Edad: " << edad << endl;
        }
};

int main()
{
    //Crear un objeto instancia de la clase Persona
    Persona persona1;
  
    cout << "Escribe el nombre de la persona: "<<endl;
    getline(cin, persona1.name);
    cout << "Escribe la edad de la persona: "<<endl;
    cin >> persona1.edad;

    persona1.mostrarPersona();
    
   
}

