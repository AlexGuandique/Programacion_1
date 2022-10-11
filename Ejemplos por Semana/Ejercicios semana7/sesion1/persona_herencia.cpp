#include<iostream>
#include<string>

using namespace std;

//Clase base
class Persona{
    private:
    //Datos Miembro
    string name, ID, type, age;
    public:

    void setPersona(string n, string id, string t, string a){  
        name = n, ID = id, type = t, age = a;
    }

    void displayPersona(){  
        cout << "Nombre: " << name <<endl;
        cout << "Id: " << ID <<endl;
        cout << "Tipo: " << type <<endl;
        cout << "Edad: " << age <<endl;
    }
        
};

class Alumno : public Persona{
    public:
    string due, carrera, materias;

     void displayDerived(string d, string c, string m){
        cout << "Due: " << d <<endl;
        cout << "Carrera: " << c <<endl;
        cout << "Materia: " << m <<endl;
    }
};
class Docente : public Persona{
    string salario, horas_clase;
};

int main()
{
    Alumno a1;
    a1.setPersona("Vilma", "050505-3", "Estudiante", "20");
    a1.displayPersona();

    Docente d1;
    d1.setPersona("Raul", "0508705-3", "Docente", "29");
    d1.displayPersona();
}