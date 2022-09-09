#include<iostream>
using namespace std;

void cochera(); 

//Definir la clase Room
class Room 
{
    public:
        //Datos miembro de la clase Room
        double largo = 0, ancho = 0 , alto = 0;
        //Funciones miembro de la clase Room
        double calcularArea(){   
            return largo * ancho;
        }

        double calcularVolume(){   
            return largo * ancho * alto;
        }
};

int main()
{

    Room habitacion; //Crear el objeto de la clase Room

    //Asignando valores a los miembros de datos
    habitacion.largo = 4;
    habitacion.ancho = 5;
    habitacion.alto = 2.5;

    cout << habitacion.calcularArea() <<" m^2 (metros cuadrados)"<<endl;
    cout << habitacion.calcularVolume() <<" m^3 (metros cubicos)"<<endl;
    cout << "\n*************** Cochera ***************"<<endl;
    cochera();
}

void cochera()
{
    Room room1;
    //Asignando valores a los miembros de datos

    cout << room1.calcularArea() <<" m^2 (metros cuadrados)"<<endl;
    cout << room1.calcularVolume() <<" m^3 (metros cubicos)"<<endl;
}



