#include<iostream>

using namespace std;

class Persona //clase base
{
private:
    int edad;
    string nombre;
    string ID;
    string Profecion;
public:
    Persona(int,string,string,string);
    Persona();
    void imprimir() const;
};

Persona::Persona(int E,string name,string I,string P)
{
    edad = E;
    nombre = name;
    ID = I;
    Profecion = P;
}

void Persona::imprimir() const
{
    cout<<"Profecion: "<<this->Profecion<<endl;
    cout<<"Edad: "<<this->edad<<endl;
    cout<<"nombre: "<<this->nombre<<endl;
    cout<<"identificacion: "<<this->ID<<endl;
}


int main()
{
    //creamos un objeto
    Persona IN(18,"Jose Alexande ","Al230201","Ingeniero");
    IN.imprimir();
}