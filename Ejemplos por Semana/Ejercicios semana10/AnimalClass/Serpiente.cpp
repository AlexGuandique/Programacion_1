#include"Animal.cpp"
#include"Reptil.cpp"

class Serpiente : public Animal, Reptil
{
private:
    /* datos */
    bool veneno;
    string tipoDiente; //aglifos, opistoglifos, protoroglifos, solenoglifos
public:
    /*Metodos*/
    void mudarPiel();
    string regularTemp();
    void agregarSerpiente();
    void mostrarSerpiente();
};

void Serpiente::mudarPiel(){ cout<<"Estoy mudando de Piel"<<endl;};
string Serpiente::regularTemp(){return "Regulando mi temperatura ...\n";};

void Serpiente::agregarSerpiente()
{
   
}