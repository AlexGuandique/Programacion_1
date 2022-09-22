#include<iostream>
#include<string>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{
    LibroCalificaciones libro1;
    
    libro1.mostrarMensaje();
    libro1.establecerNombreCurso("Progra1");
    libro1.mostrarMensaje();
    cout << "Nombre del Curso: "<<libro1.obtenerNombreCurso()<<endl;
}