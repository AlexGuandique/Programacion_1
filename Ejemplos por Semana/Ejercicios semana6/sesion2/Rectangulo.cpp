#include<iostream>
#include<string>
#include "Rectangulo.h"
using namespace std;


void Rectangulo::mostrarLados()
        {
            cout << "izquierdo = " << izquierdo <<endl;
            cout << "derecho = " << derecho <<endl;
            cout << "superior = " << superior <<endl;
            cout <<"inferior = " << inferior <<endl;
        }
void Rectangulo::leerIzqDer()
{
    cout << "izquierdo = " << izquierdo <<endl;
    cout << "derecho = " << derecho <<endl;
}

void Rectangulo::leerSupInf()
{
    cout << "superior = " << superior <<endl;
    cout <<"inferior = " << inferior <<endl;
}

int main()
{
    //Objeto de rectangulo
    //area
    //perimetro
    //Utilizar: leer y fijar (funciones establecer y obtener)
    Rectangulo rect(4, 4, 10, 10);
    Rectangulo* ptrRect = new Rectangulo(25, 25, 75, 75);

    rect.mostrarLados();
    cout << "Area = " << rect.areaRectangulo()<<endl;
    ptrRect->mostrarLados();
    cout << "Area = " << ptrRect->perimetroRectangulo() << endl;
    cout <<"**********************************"<<endl;
    rect.fijarIzqDer(7);
    rect.fijarSupInf(100);
    rect.leerIzqDer();
    rect.leerSupInf();
    cout << "Area = " << rect.areaRectangulo()<<endl;
}