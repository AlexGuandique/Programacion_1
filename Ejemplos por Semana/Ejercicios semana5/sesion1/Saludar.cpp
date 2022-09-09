#include<iostream>

using namespace std;

//Definir la clase
class Saludar
{
    // función que muestra un mensaje de bienvenida para el usuario
    public:
        void mostrarMensaje() 
        {
            cout << "Hola Mundo desde una Clase en C++!" <<endl;
        }// fin de la función mostrarMensaje
};  // fin de la clase Saludar

// la función main empieza la ejecución del programa
int main()
{
   Saludar saludo;      // crea un objeto 
   saludo.mostrarMensaje();    // llama a la función mostrarMensaje del objeto
}