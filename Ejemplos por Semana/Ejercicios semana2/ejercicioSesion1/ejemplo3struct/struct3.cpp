#include<iostream>
using namespace std;

//Crear la estructura
struct alumno
{
    unsigned int id; //entero sin signo
    unsigned int edad;
    string nombre;
    string carrera;
    int year;
};

int main()
{
    //nombreEstructura variable
    alumno a2 = {1, 28, "Pablo", "Ing. Sistemas", 2};

    alumno a1;
    a1.carrera = "Lic Ingles";
    a1.nombre = "Robert";
    a1.year = 3;
    a1.id = 2;
    a1.edad = 19;


    cout<<"Nombre: ";
    cout<<a1.nombre<<endl;
    cout<<"Carrera: ";
    cout<<a1.carrera<<endl;
    cout<<"Id: ";
    cout<<a1.id<<endl;
    cout<<"Edad: ";
    cout<<a1.edad<<endl;
    cout<<"Year: ";
    cout<<a1.year<<endl;

    cout<<"Nombre: ";
    cout<<a2.nombre<<endl;
    cout<<"Carrera: ";
    cout<<a2.carrera<<endl;
    cout<<"Id: ";
    cout<<a2.id<<endl;
    cout<<"Edad: ";
    cout<<a2.edad<<endl;
    cout<<"Year: ";
    cout<<a2.year<<endl;
}