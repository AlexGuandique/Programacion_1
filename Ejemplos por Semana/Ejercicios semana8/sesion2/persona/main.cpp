#include<iostream>
#include<string>
#include"persona.cpp"
#include"estudiante.cpp"
using namespace std;



int main()
{
    Persona personDefault;
    personDefault.mostrarPersona();

    //Persona personParam(datosPersona());
    //personParam.mostrarPersona();

    Estudiante estudiante1;
    estudiante1.mostrarEstudiante();

    Estudiante estudiante2("gf12011", "Sistemas");
    estudiante1.mostrarEstudiante();
}


