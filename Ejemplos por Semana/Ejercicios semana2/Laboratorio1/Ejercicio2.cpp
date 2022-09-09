/*Crea una estructura para un estudiante, crea 5 registros
solicita al usuario que ingrese los valores para los reegitros*/

#include<iostream>
using namespace std;

struct estudiante{
    string due;
    string carrera;
    int ingreso;
    int edad;
    string nombre;
};

void imprimir(estudiante e1);

int main()
{
    estudiante e1;

    cout<<"Due: ";
    cin>>e1.due;
    cout<<"carrera: ";
    cin>>e1.carrera;
    cout<<"Año de ingreso: ";
    cin>>e1.ingreso;
    cout<<"Edad: ";
    cin>>e1.edad;
    cout<<"Nombre: ";
    cin>>e1.nombre;

    imprimir(e1);
}

void imprimir(estudiante e1, int i){
    cout<<"\n*********Estudiante "<<i<<"*********";
    cout<<"Due: "<<e1.due<<endl;
    cout<<"carrera: "<<e1.carrera<<endl;
    cout<<"Año de ingreso"<<e1.ingreso<<endl;
    cout<<"Edad: "<<e1.edad<<endl;
    cout<<"Nombre: "<<e1.nombre<<endl;
}


