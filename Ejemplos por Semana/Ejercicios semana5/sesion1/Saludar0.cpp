#include<iostream>
#include<string>

using namespace std;

void saludo();

//Definir la clase HolaMundo
class HolaMundo
{   
    public:
       //Dato miembro
        string nombre = "Alexander";
        //Funcion miembro saludar
        void mostrarMensaje()
        {
            cout <<"Que tal: "<< nombre <<" Hola Mundo! desde una Clase en C++"<<endl;
        }
};

class Llamar{
    public:
        void createObjet(){
            cout << "\n************Desde la Clase Llamar ************"<<endl;
            HolaMundo is_object;
            cout << is_object.nombre<<endl;
            is_object.nombre = "Nataly";
            is_object.mostrarMensaje();
        }
};

int main()
{
    //Cear objeto de la clase HolaMundo
    cout << "\n************Desde main ************"<<endl;
    HolaMundo mensaje;
    cout << mensaje.nombre <<endl;
    mensaje.nombre = "Yoseline";
    //Llamar a la funcion miembro mostrarMensaje
    mensaje.mostrarMensaje();
    saludo();
    Llamar llamada;
    llamada.createObjet();
}

void saludo()
{

    cout << "\n************Desde la funcion ************"<<endl;
    HolaMundo s;
    cout<< s.nombre<<endl;
    s.nombre = "Jimmy";
    cout<< s.nombre<<endl;
    s.mostrarMensaje();
    cout<< s.nombre<<endl;
}

