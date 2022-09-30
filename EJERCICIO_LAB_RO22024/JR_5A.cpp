#include<iostream>
#include<string>

using namespace std;

class Persona
{
    public:
        string nombre;
        string edad;
    public:
       string getNombre();
       string getEdad();
       void setNombre(string N);
       void setEdad(string E);
       void Visualizar();
       void agregarPersona();
    
};

class  Estudiante: public Persona{
    public://atributos 
        string ID;
    public:
    void Visualizar();
    void agregarPersona();
};

void Persona::Visualizar()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"edad: "<<edad<<endl;
}
void Estudiante::Visualizar()
{
    cout<<"Nombre Estudiante: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"ID: "<<ID<<endl;
}
void Persona::agregarPersona()
{
    cout<<"Ingresa el nombre del estudiante: ";
    getline(cin, nombre);
    cout<<"Ingresa la edad: ";
    getline(cin, edad);
}
void Persona::setNombre(string N)
{
    nombre = N;
}
void Persona::setEdad(string E){
    edad = E;
}
string Persona::getNombre()
{
    return nombre;
}
string Persona::getEdad(){
    return edad;
}

class Profesor: public Persona
{
    public:
       string salario;
    public:
    void Visualizar();
    void agregarPersona();
};
void Profesor::Visualizar()
{
   cout<<"Nombre Estudiante: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Salario: "<<salario<<endl;
}

int main()
{
    string nombre, edad, ID,salario;
    Estudiante estudiante;

    cout<<"Ingresa el ID del estudiante: ";
    getline(cin, ID);
    estudiante.ID = ID;

    cout<<"Ingresa el nombre del estudiante: ";
    getline(cin, nombre);
    estudiante.setNombre(nombre);

    cout<<"Ingresa la edad: ";
    getline(cin,edad);
    estudiante.setEdad(edad);

    cout<<"*************** Estudiante*********************\n";
   
    estudiante.Visualizar();  

    cout<<"------------------------------------------"<<endl;
    Profesor Prof;

    cout<<"Ingresa el salario del profesor: ";
    getline(cin, salario);
    Prof.salario = salario;

    cout<<"Ingresa el nombre del profesor: ";
    getline(cin, nombre);
    Prof.setNombre(nombre);

    cout<<"Ingresa la edad: ";
    getline(cin,edad);
    Prof.setEdad(edad);

    cout<<"***************Profesor*********************\n";
   
    Prof.Visualizar();  

    return 0;
}
