#include<iostream>
#include<string>


using namespace std;

class Polecia
{
    protected:
        string nombre;
        //string edad;
        string ID;
    public:
       
        string getNombre();
        //string getEdad();
        string getID();
        void setNombre(string N);
        //void setEdad(string E);
        void setID(string I);
        void mostrarPolecia();
        void AgregararPolecia();
};

class  Polecia_nacional : public Polecia{
    public:
        string Rango;
        string Aria_T;
    public:
    void mostrarPolecia();
    void AgregararPolecia();
};

void Polecia::mostrarPolecia()
{
    cout<<"Nombre del polecia: "<<nombre<<endl;
    //cout<<"Edad del polecia: "<<edad<<endl;
    cout<<"Identificcion del Polecia"<<ID<<endl;
}

void Polecia_nacional::mostrarPolecia()
{
    cout<<"Nombre Polecia: "<<nombre<<endl;
    //cout<<"edad del polecia: "<<edad<<endl;
    cout<<"Identificacion del Polecia: "<<ID<<endl;
    cout<<"Rango Del polecia: "<<Rango<<endl;
    cout<<"Aria de trabajo: "<<Aria_T<<endl;
}

void Polecia::AgregararPolecia()
{
    cout<<"Ingresa el nombre del Polecia: "<<endl;
    getline(cin, nombre);
    cout<<"Ingresa la edad: ";
    //cin>>edad;
    cout<<"Ingrese la identificacion del polecia: "<<endl;
    getline(cin,ID);
}

class  Polecia_Transito : public Polecia{
    public:
        string Rango;
        string Aria_T;
    public:
    void mostrarPolecia();
    void AgregararPolecia();
};

void Polecia_Transito::mostrarPolecia()
{
   cout<<"Nombre : "<<nombre<<endl;
    //cout<<"Edad:"<<edad<<endl;
    cout<<"Identoficacion"<<ID<<endl;
    cout<<"aria de trabajo: "<<Aria_T<<endl;
    cout<<"Rango: "<<Rango<<endl;
}
//clas Polecia_Cam
void Polecia::setNombre(string N)
{
    nombre = N;
}
/*void Polecia::setEdad(string E)
{
    edad = E;
}*/
void Polecia::setID(string I)
{
    ID = I;
}

string Polecia::getNombre(){
    return nombre;
}
/*string Polecia::getEdad(){
    return edad;
}*/
string Polecia::getID(){
    return ID;
}

int main() 
{
    string Rango,Aria_T,nombre,ID/*edad*/;
    cout<<"<--------------------Polecia Nacional------------------>"<<endl;
    Polecia_nacional P1;//OBJETO

    cout<<"Ingresa el rango del polecia: ";
    getline(cin, Rango);
    P1.Rango = Rango;

    cout<<"Ingresa el Aria de trabajo: ";
    getline(cin, Aria_T);
    P1.Aria_T = Aria_T;

    cout<<"Ingresa el nombre del Polecia: ";
    getline(cin, nombre);
    P1.setNombre(nombre);

    /*cout<<"Ingresa la edad: ";
    getline(cin,edad);
    P1.setID(edad);*/

    cout<<"Ingresa la identificacion: ";
    getline(cin,ID);
    P1.setID(ID);

    cout<<"--------------PNC-------------------"<<endl;
    P1.mostrarPolecia();


    cout<<"<--------------------Poleciaa transito------------------>"<<endl;
    Polecia_Transito P2;//OBJETO

    cout<<"Ingresa el rango del polecia: ";
    getline(cin, Rango);
    P2.Rango = Rango;

    cout<<"Ingresa el Aria de trabajo: ";
    getline(cin, Aria_T);
    P2.Aria_T = Aria_T;

    cout<<"Ingresa el nombre del Polecia: ";
    getline(cin, nombre);
    P2.setNombre(nombre);

   /* cout<<"Ingresa la edad: ";
    getline(cin,edad);
    P2.setID(edad);*/

    cout<<"Ingresa la identificacion: ";
    getline(cin,ID);
    P2.setID(ID);

    cout<<"--------------Polecia de transit-------------------"<<endl;
    P2.mostrarPolecia();

    
}
    