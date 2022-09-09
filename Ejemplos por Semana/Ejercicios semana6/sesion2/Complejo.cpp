#include<iostream>
#include<string>
#include "Complejo.h"

using namespace std;

void Complejo::mostrarDatos()
{
    cout << "x = " << x <<endl;
    cout << "y = " << y <<endl;
}

Complejo::Complejo(double r = 0.0, double i = 1.0) //constructor parametrizado
{
    x = r;
    y = i;
}

int main()
{
    Complejo z1; // z1.x == 0.0, z1.y == 1.0
    Complejo z2(-7,9);
    Complejo* pz = new Complejo(-2, 3); // pz -> x == -2, pz -> y == 3
    //leer y fijar (funciones establecer y obtener)
    z1.mostrarDatos();
    z2.mostrarDatos();
    pz->mostrarDatos();
}