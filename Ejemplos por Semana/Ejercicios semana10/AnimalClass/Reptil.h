#include<string>
#include"Animal.h"
class Reptil : public Animal
{
private:
    /* data */
    string clasificacion; //"Escamosos","Tortugas","Tuátaras","Cocodrilos"
public:
    Reptil();
    
    string getClasificacion();
    void setClasificacion();
    using Animal;
        Reptil(string n, string c, string h, int e);
};

Reptil::Reptil(string n, string c, string h, int e)
{
}

Reptil::Reptil()
{
}

string Reptil::getClasificacion(){return clasificacion;}
void setClasificacion()
{
    cout<<"Clasificacion: ";
    getline(cin, clasificacion);
}