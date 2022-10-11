
#include"Animal.cpp"


using namespace std;

class Mamifero : public Animal
{
private:
    string Forma_movilizarce; //terrestres,aerios,aguferos
public:
    Mamifero(); 
    void mostrarAnimal();
    string getForma_movilizarce();
    void setForma_movilizarce();

    using Animal::Animal;
        Mamifero(string n, string c, string h, int e, string F);
   
};

Mamifero::Mamifero(string n, string c, string h, int e, string F)
{
    nombre = n;
    color = c;
    habitad = h;
    esperanzaVida = e;
    Forma_movilizarce = F;
}
string Mamifero::getForma_movilizarce(){return Forma_movilizarce;}
void Mamifero::setForma_movilizarce(){
    cout<<"Forma de Movilizarce: ";
    getline(cin,Forma_movilizarce);
}
Mamifero::Mamifero(){Forma_movilizarce = "Como se moviliza";};

void Mamifero::mostrarAnimal(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Habitad: "<<habitad<<endl;
    cout<<"Esperanza de Vida:"<<esperanzaVida<<endl;
    cout<<"Forma de movilizarce: "<<Forma_movilizarce<<endl;
}