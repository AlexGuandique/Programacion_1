#include<iostream>

using namespace std; 

class Perro
{
private://atributos
    int edad; 
    string nombre;
public://metoddos
    Perro(int , string);//contructor
    ~Perro();//destructor elimina los objetos que ya no se estan utlizando
    void MostrarDate();
    void Jugar();
};

Perro::Perro(int E,string N)
{
    edad = E;
    nombre = N;
}

Perro::~Perro()//destructor
{
}

void Perro::MostrarDate()
{
    cout<<"soy el perro "<<nombre<<" tengo "<<edad<<" anios"<<endl;
}

void Perro::Jugar(){
    cout<<"soy el perro "<<nombre<<" tengo "<<edad<<" anios"<<" y estoy jugando"<<endl;
}

int main(){
    Perro perro1(3,"firulay");
    perro1.MostrarDate();
    perro1.Jugar();
    system("pause");
}
