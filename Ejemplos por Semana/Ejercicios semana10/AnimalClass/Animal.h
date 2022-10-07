#include<iostream>
#include<string>

using namespace std;

class Animal
{
private:
    /* data */
    string nombre;
    string color;
    string habitad;
    int esperanzaVida;
public:
    //Consructores
    Animal();
    Animal(string n, string c, string h, int e);
    //Funciones miembro
    void mostrarAnimal();
    void AgregarAnimal();
     //Setters y Getters (Establecer y Optener)
    string getNombre();
    string getColor();
    string getHabitad();
    int getEsperanzaVida();
    void setNombre();
    void setColor();
    void setHabitad();
    void setEsperanzaVida();
}
;

Animal::Animal(string n, string c, string h, int e)
{
    nombre = n;
    color = c;
    habitad = h;
    esperanzaVida = e;
}

Animal::Animal()
{
    nombre = "Nombre Animal";
    color = "Color Animal";
    habitad = "Habitad Animal";
    esperanzaVida = 0;
}

void Animal::AgregarAnimal()
{
    cout<<"Nombre: ";
    getline(cin, nombre);
    cout<<"Color: ";
    getline(cin, color);
    cout<<"Habitad: ";
    getline(cin, habitad);
    cout<<"Esperanza de Vida: ";
    cin>>esperanzaVida;
}

void Animal::mostrarAnimal()
{
    cout<<"Nombre: "<<nombre;
    cout<<"Color: "<<color;
    cout<<"Habitad: "<<habitad;
    cout<<"Esperanza de Vida:"<<esperanzaVida;
}

string Animal::getNombre(){return nombre;}
string Animal::getColor(){return color;}
string Animal::getHabitad(){return habitad;}
int Animal::getEsperanzaVida(){return esperanzaVida;}

void Animal::setNombre()
{
    cout<<"Nombre: ";
    getline(cin, nombre);
}

void Animal::setColor()
{
    cout<<"Color: ";
    getline(cin, color);
}

void Animal::setHabitad()
{
    cout<<"Habitad: ";
    getline(cin, habitad);
}

void Animal::setEsperanzaVida()
{
    cout<<"Esperanza de vida: ";
    cin>>esperanzaVida;
}
