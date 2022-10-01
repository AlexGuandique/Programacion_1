#include<iostream>
#include"clases.cpp"

using namespace std;

int main()
{  
    Persona persona1;
    //persona1.agregarPersona();
    persona1.visualizar();

    Persona persona2("Erick", 20);
    //persona2.visualizar();
    //persona2.agregarPersona();
    persona2.visualizar();
    Estudiante estudiante1("Kevin", 18, "GP20006");
    estudiante1.visualizar();

    Profesor profesor1("Guandique", 29, 700.77);
    profesor1.visualizar();
    return 0;
}