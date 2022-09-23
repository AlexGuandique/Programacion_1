#include<iostream>
#include<string>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{
    LibroCalificaciones libroObj("LibroCal");
    cout << libroObj.obtenerNombreCurso() <<endl;
}