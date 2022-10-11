#include<iostream>

using namespace std;

class Trabajador
{
public:
    string Nombre;
    string Profecion;
    int Edad;
    float Salario;
    int Dui;
public:
    string getNombre();
    int getEdad();
    float getSalario();
    int getDui();
    string getProfecion();
    void setNombre(string N);
    void setProfecion(string P);
    void setEdad(int E);
    void setSalario(float S);
    void setDui(int D);
    void visualizar();
    void agregar();
   
};

    


void Trabajador::visualizar()
{
    cout<<"Nombre del Trabajador: \n"<<this->Nombre;//this puntero
    cout<<"Profecion: \n"<<this->Profecion;
    cout<<"Numero de dui del trabajador: \n"<<this->Dui;
    cout<<"Edad del trabajador: \n"<<this->Edad;
    cout<<"Salario del Trabajador: \n"<<this->Salario;
    
}

class  Profesor: public Trabajador//CLASE DERIVADA 
{
    public:
       string Direcion;
    public:
       void visualizar();
       void agregar();
   

};


void Profesor::visualizar()
{
    //clas visualizar agregamos los datos que queremos poner en pantalla 
    cout<<"Nombre del Trabajador: \n"<<this->Nombre;//this puntero
    cout<<"Profecion: \n"<<this->Profecion;
    cout<<"Numero de dui del trabajador: \n"<<this->Dui;
    cout<<"Edad del trabajador: \n"<<this->Edad;
    cout<<"Salario del Trabajador: \n"<<this->Salario;
    cout<<"Direccion de trabajo: \n"<<this->Direcion;   
}
void Trabajador::agregar()
{
    //agregamos los nuevos datos 
    cout<<"Nombre del Trabajador: \n";//this puntero
    getline(cin,Nombre);
    cout<<"Profecion: \n";
    getline(cin,Profecion);
    cout<<"Numero de dui del trabajador: \n";
    cin>>Dui;
    cout<<"Edad del trabajador: \n";
    cin>>Edad;
    cout<<"cuanto Salario tiene el Trabajador: \n";
    cin>>Salario;
    //cout<<"Direccion de trabajo: \n"<<this->Direcion;   
}


void Trabajador::setNombre(string N)
{
    Nombre = N;
}

void Trabajador::setProfecion(string P){
    Profecion = P;
}

void Trabajador::setEdad(int E){
    Edad = E;
}

void Trabajador::setSalario(float S){
    Salario = S;
}

void Trabajador::setDui(int D){
    Dui = D;
}

float Trabajador::getSalario() 
{
    return Salario;
}

string Trabajador::getNombre() 
{
    return Nombre;
}
string Trabajador::getProfecion()
{
    return Profecion;
}

int Trabajador::getEdad(){
    return Edad ;
}

int Trabajador::getDui(){
    return Dui;
}

int main(){
    string Nombre,Profecion,Direccion;
    int Edad;
    float Dui;
    //creamos un objeto
    Profesor T1;
    cout<<"Ingrese el nombre del trabajador: \n"<<endl;
    getline(cin,Nombre);
    T1.Nombre;
    cout<<"Ingrese la profecion del trabajador: \n"<<endl;
    getline(cin,Profecion);
    T1.Profecion;
    cout<<"Ingrese la edad: \n"<<endl;
    cin>>Edad;
    T1.Edad;
    cout<<"Ingrese el numero de dui: \n"<<endl;
    cin>>Dui;
    T1.Dui;
    cout<<"Ingrese la direccion del trabajador: \n"<<endl;
    getline(cin,Direccion);
    T1.Direcion;
   
     T1.visualizar();
    

}