#include<iostream>
#include<string>
#include "Punto.h"
using namespace std;

int Punto::leerX() const
{
    return x;
}
int Punto::leerY() const
{
    return y;
}
void Punto::fijarX(int valorX)
{
    x = valorX;
}
void Punto::fijarY(int valorY)
{
    y = valorY;
}

int main()
{
    Punto p1(2, 1); // objeto creado de forma estática
    Punto* p2 = new Punto(2, 1); // objeto creado dinámicamente
    cout << "p1(2, 1):"<<endl;
    cout << "x = " << p1.leerX() <<endl;
    cout << "y = " << p1.leerY() <<endl;

    cout << "p1(7, 0):"<<endl;
    p1.fijarX(7);
    p1.fijarY(0);
    cout << "x = " << p1.leerX() <<endl;
    cout << "y = " << p1.leerY() <<endl;
}