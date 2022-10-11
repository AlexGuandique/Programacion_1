#include<iostream>
#include<string>

using namespace std;

class Persona
{
private://atributo
     int edad;
     string nombre;
    
public://metodos 
    void leer();
    void correr();
    Persona(int,string);
};
//contructor para inicializar los atributos
Persona::Persona(int E ,string N)
{
    edad = E;
    nombre = N;
}

void Persona::leer(){
    cout<<"Soy "<<(*this).nombre<<" y estoy leyendo un libro "<<"tengo "<<(*this).edad<<" anio"<<endl;
}

void Persona::correr(){cout<<"soy "<<(*this).nombre<<" y estoy corriendo"<<endl; }

int main()
{
   //CREAMOS EL OBJ PERSONA

   Persona P1(18,"JOSUE");
   P1.leer(); 
   P1.correr(); 

   return 0;
}