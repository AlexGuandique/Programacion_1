//Bibliotecas
#include<iostream>
#include<string>

//Espacio de nombre std
using namespace std;

//Clase Base
class Persona 
{
    //Datos Miembro
    protected:
        string nombre;
        int edad;
    //Funciones Miembro
    public:
        //Constructores
        Persona();
        Persona(string name, int age);
        //Metodos
        void visualizar();
        void agregarPersona();
        //Getters
        string getNombre();
        int getEdad();
        //Setters
        void setNombre(string);
        void setEdad(int);
};

//Clase deribada Estudiante
class Estudiante : public Persona 
{
    //Datos Miembro
    private:
        string id;
    //Funciones Miembro
    using Persona::Persona;
        public:
            Estudiante();
            Estudiante(string name, int age, string i);
            void visualizar();
};

//Clase deribada Profesor
class Profesor : public Persona 
{
    //Datos Miembro
    private:
        double salario;
    //Funciones Miembro
    using Persona::Persona;
        public:
            Profesor();
            Profesor(string name, int age, double s);
            void visualizar();
};

//Getters
int Persona::getEdad(){return edad;}
string Persona::getNombre(){return nombre;}
//Setters
void Persona::setNombre(string name){ nombre = name;}
void Persona::setEdad(int age){ edad = age;}

void Persona::visualizar()
{
    cout<<"********** PERSONA ****************\n";
    cout<<"Nombre persona --> "<<nombre<<endl; 
    cout<<"Edad persona --> "<<edad<<endl;
    cout<<"***********************************\n";
} 

void Estudiante::visualizar()
{
    cout<<"********* Estudiante ****************\n";
    cout<<"Nombre estudiante --> "<<nombre<<endl; 
    cout<<"Edad estudiante --> "<<edad<<endl;
    cout<<"ID estudiante --> "<<id<<endl;
    cout<<"***********************************\n";
} 

void Profesor::visualizar()
{
    cout<<"********* Profesor ****************\n";
    cout<<"Nombre profesor --> "<<nombre<<endl; 
    cout<<"Edad profesor -->"<<edad<<endl;
    cout<<"Salario profesor -->"<<salario<<endl;
    cout<<"***********************************\n";
} 

void Persona::agregarPersona()
{
    cout<<"********* Persona ****************\n";
    cout<<"Nombre --> ";
    getline(cin, nombre);
    cout<<"Edad -->";
    cin>>edad;
    cin.ignore();
    cout<<"***********************************\n";
} 

//Definir constructores
Persona::Persona()
{
    nombre = "Sin Nombre";
    edad = 0;
}
Persona::Persona(string name, int age)
{
    nombre = name;
    edad = age;
}

Estudiante::Estudiante()
{
    id = "Sin ID";
}
Estudiante::Estudiante(string name, int age, string i)
{
    nombre = name;
    edad = age;
    id = i;
}

Profesor::Profesor()
{
    salario = 0.0;
}

Profesor::Profesor(string name, int age, double s)
{
    nombre = name;
    edad = age;
    salario = s;
}

