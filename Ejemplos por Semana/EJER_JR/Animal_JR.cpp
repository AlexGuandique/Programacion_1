#include<iostream>
using namespace std;

class Animal
{
private://atributos
   string nombre;
   int Edad;
   string habita;
   string color;
   string Habitad;
public://metodos
    Animal(string,int,string,string,string);//contructor parametrizado 
    Animal();//contructor por defecto
    void agregarAnimal();
    void MostrarAnimal();
    void setnombre();
    void setHabitad();
    void setEdad();
    void sethabita();
    void setcolor();
    string getnombre();
    int getEdad();
    string gethabita();
    string getHabitad();
    string getcolor();
};

Animal::Animal(string N,int E,string H,string C,string L)//contructor para inicializar
{
    nombre = N;
    Edad = E;
    habita = H;
    color = C;
    Habitad = L;
}

Animal::Animal()
{
    nombre = "Nombre Animal";
    color = "Color Animal";
    Edad = 0;
    Habitad = "Habitad Animal";
}

void Animal::agregarAnimal()
{
    cout<<"Nombre del animal: ";
    getline(cin,nombre);
    cout<<"Edad del animal: ";
    cin>>Edad;
    cout<<"Habitad del animal: ";
    getline(cin,Habitad);
    cout<<"Color del animal: ";
    getline(cin,color);
   
}

void Animal::MostrarAnimal()
{
    cout<<"el nombre del anilmal es: "<<this->nombre<<endl;
    cout<<"La edad del animal es: "<<this->Edad<<endl;
    cout<<"Habitad de procedencia: "<<this->Habitad<<endl;
    cout<<"Color del animal: "<<this->color<<endl;
} 

void Animal::setnombre(){
    cout<<"Ingrese el nombre del animal: ";
    getline(cin,nombre);
}

void Animal::setcolor()
{
    cout<<"Ingrese el color del animal: ";
    getline(cin,color);
}

void Animal::setEdad(){
    cout<<"Ingrese la edad del Animal: ";
    cin>>Edad;
}

void Animal::setHabitad(){
    
    cout<<"Habitad del animal: "<<endl;
    cin>>Habitad;
}

string Animal::getnombre()
{
    return nombre;
}

/*string Animal::gethabita()
{
    return habita;  
}*/

int Animal::getEdad(){
    return Edad;
} 

string Animal::getcolor(){return color;}
string Animal::getHabitad(){
    return Habitad;       
}
int main()
{

    //string nombre,color,habitad;
    //creamos uno obj
    Animal A1;
    cout<<"<-----------------Creando animal--------------------->"<<endl;
    A1.setnombre();
    A1.setcolor();
    A1.setEdad();
    //A1.sethabita();
    A1.setHabitad();
    A1.MostrarAnimal();

    system("pause");
    
    //estudiante.setNombre(nombre);
}