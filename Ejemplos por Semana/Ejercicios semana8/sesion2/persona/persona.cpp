#include<iostream>
#include<string>

using namespace std;

struct persona
{
    /* data */
    string nombre;
    string direccion;
    string fecha_nacimiento;
    string genero;
    int edad;
};

persona datosPersona();

//Clase Base
class Persona
{
private:
    /* data */
    string nombre;
    string direccion;
    string fecha_nacimiento;
    string genero;
    int edad;

public:
    Persona(persona) ; // Constructor parametrizado
    Persona(); 
    void mostrarPersona();
    persona datosPersona();
    //friend class Estudiante;
};

Persona::Persona(persona person)
{
    nombre = person.nombre;
    direccion = person.direccion;
    fecha_nacimiento = person.fecha_nacimiento;
    genero = person.genero;
    edad = person.edad;
}

Persona::Persona()
{
    nombre = "Sin nombre";
    direccion = "Sin direccion";
    fecha_nacimiento = "Sin edad";
    genero = "Sin genero";
    edad = 0;
}

void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Fecha Nacimiento: "<<fecha_nacimiento<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Edad: "<<edad<<endl;
}

persona Persona::datosPersona()
{
    persona person;
    cout<<"************** Ingresar Persona *****************"<<endl;
    cout<<"Nombre: "<<endl;
    getline(cin, person.nombre);
    cout<<"Direccion: "<<endl;
    getline(cin, person.direccion);
    cout<<"Fecha Nacimiento: "<<endl;
    getline(cin, person.fecha_nacimiento);
    cout<<"Genero: "<<endl;
    getline(cin, person.genero);
    cout<<"Edad: "<<endl;
    cin>>person.edad;
    cin.ignore();
    cout<<"************************************************"<<endl;
    return person;
}

class Estudiante : public Persona
{
private:
    /* data */
    string due;
    string carrera;
public:
    Estudiante(string d, string c);
    Estudiante();
    void mostrarEstudiante();
    void datosEstudiante();
};

Estudiante::Estudiante(string d, string c)
{
    due = d;
    carrera = c;
}

Estudiante::Estudiante()
{
    due = "Sin DUE";
    carrera = "Sin Carrera";
}

void Estudiante::mostrarEstudiante()
{
    cout<<"************** Estudiante **************"<<endl;
    mostrarPersona();
    cout<<"Due: "<<due<<endl;
    cout<<"Carrera: "<<carrera<<endl;
    cout<<"****************************************"<<endl;
}
void Estudiante::datosEstudiante()
{
    datosPersona();
    cout<<"Due: "<<due<<endl;
    cin>>due;
    cout<<"Carrera: "<<carrera<<endl;
    cin>>carrera;
}


