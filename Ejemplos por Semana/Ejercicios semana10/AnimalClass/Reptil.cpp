#include"Animal.cpp"

class Reptil : public Animal
{
protected:
    /* data */
    string tipoReptil; //"Escamosos","Tortugas","Tuátaras","Cocodrilos","Serpientes" 
public:
    Reptil();
    void mostrarAnimal();
    string getTipoReptil();
    void setTipoReptil();

    using Animal::Animal;
        Reptil(string n, string c, string h, int e, string cl);
};

Reptil::Reptil(string n, string c, string h, int e, string cl)
{
    nombre = n;
    color = c;
    habitad = h;
    esperanzaVida = e;
    tipoReptil = cl;
}

Reptil::Reptil()
{
    tipoReptil = "Ingresar Tipo de Reptil";
}


string Reptil::getTipoReptil(){return tipoReptil;}
void Reptil::setTipoReptil()
{
    cout<<"Tipo Reptil: ";
    getline(cin, tipoReptil);
}

void Reptil::mostrarAnimal()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Habitad: "<<habitad<<endl;
    cout<<"Esperanza de Vida:"<<esperanzaVida<<endl;
    cout<<"Clasificacion: "<<tipoReptil<<endl;
}