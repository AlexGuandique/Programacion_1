#include"Animal.cpp"

class Reptil : public Animal
{
private:
    /* data */
    string clasificacion; //"Escamosos","Tortugas","Tuátaras","Cocodrilos"
public:
    Reptil();
    void mostrarAnimal();
    string getClasificacion();
    void setClasificacion();

    using Animal::Animal;
        Reptil(string n, string c, string h, int e, string cl);
};

Reptil::Reptil(string n, string c, string h, int e, string cl)
{
    nombre = n;
    color = c;
    habitad = h;
    esperanzaVida = e;
    clasificacion = cl;
}

Reptil::Reptil()
{
    clasificacion = "Ingresar Clasificacion";
}


string Reptil::getClasificacion(){return clasificacion;}
void Reptil::setClasificacion()
{
    cout<<"Clasificacion: ";
    getline(cin, clasificacion);
}

void Reptil::mostrarAnimal()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Habitad: "<<habitad<<endl;
    cout<<"Esperanza de Vida:"<<esperanzaVida<<endl;
    cout<<"Clasificacion: "<<clasificacion<<endl;
}