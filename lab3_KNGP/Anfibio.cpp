#include"Animal.cpp"

class Anfibio : public Animal
{
private:
    /* datos */
    string clasificacion; //"Rana","Triton","Salamandra", "Sapo"
    string tamano; //"4 cm","6 cm","8 cm","5 cm", "3 cm"
    string caracteristicas; //"Sangre fria","Vertebrados","Depredadores de insectos","Piel permeable", "Son ectotermos"
public:
    Anfibio();
    void mostrarAnimal();
    string getClasificacion();
    void setClasificacion();
    string gettamano();
    void settamano();
    string getcaracteristicas();
    void setcaracteristicas();

    using Animal::Animal;
        Anfibio(string n, string c, string h, int e, string cl, string tam, string car);
};

Anfibio::Anfibio(string n, string c, string h, int e, string cl, string tam, string car)
{
    nombre = n;
    color = c;
    habitad = h;
    esperanzaVida = e;
    clasificacion = cl;
    tamano = tam;
    caracteristicas = car;
}

Anfibio::Anfibio()
{
    clasificacion = "Ingresar Clasificacion";
    tamano = "Ingresar tamano";
    caracteristicas = "Ingresar caracteristicas";
}


string Anfibio::getClasificacion(){return clasificacion;}
string Anfibio::gettamano(){return tamano;}
string Anfibio::getcaracteristicas(){return caracteristicas;}

void Anfibio::setClasificacion()
{
    cout<<"Clasificacion: ";
    getline(cin, clasificacion);
}

void Anfibio::settamano()
{
    cout<<"Tamano: ";
    getline(cin, tamano);
}

void Anfibio::setcaracteristicas()
{
    cout<<"Caracteristicas: ";
    getline(cin, caracteristicas);
}

void Anfibio::mostrarAnimal()
{
    cout<<"------->Anfibio<-------"<<endl;
    cout<<"__"<<nombre<<"__"<<endl;         
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Habitad: "<<habitad<<endl;
    cout<<"Esperanza de Vida:"<<esperanzaVida<<endl;
    cout<<"Clasificacion: "<<clasificacion<<endl;
    cout<<"Tamano: "<<tamano<<endl;
    cout<<"Caracteristicas: "<<caracteristicas<<endl;

}