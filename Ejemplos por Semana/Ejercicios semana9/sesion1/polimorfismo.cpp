#include<iostream>
#include<string>

using namespace std;

class Estudiante
{
    protected:
        string nombre;
        string universidad;
    public:
        string getNombre();
        string getUniversidad();
        void setNombre(string n);
        void setUniversidad(string u);

        void mostrarEstudiante();
        void agregarEstudiante();
};

class  EstudianteUES : public Estudiante{
    public:
        string facultad;
    public:
    void mostrarEstudiante();
    void agregarEstudiante();
};

void Estudiante::mostrarEstudiante()
{
    cout<<"Nombre Estudiante: "<<nombre<<endl;
    cout<<"Universidad Estudiante: "<<universidad<<endl;
}

void EstudianteUES::mostrarEstudiante()
{
    cout<<"Nombre Estudiante: "<<nombre<<endl;
    cout<<"Universidad Estudiante: "<<universidad<<endl;
    cout<<"Facultad: "<<facultad<<endl;
}
void Estudiante::agregarEstudiante()
{
    cout<<"Ingresa el nombre del estudiante: ";
    getline(cin, nombre);
    cout<<"Ingresa el nombre de la universidad: ";
    getline(cin, universidad);
}

void Estudiante::setNombre(string n)
{
    nombre = n;
}

void Estudiante::setUniversidad(string u)
{
    universidad = u;
}

string Estudiante::getNombre(){return nombre;}
string Estudiante::getUniversidad(){return universidad;}

int main()
{
    string nombre, universidad, facultad;
    EstudianteUES estudiante;
    
    cout<<"Ingresa la Facultad del estudiante: ";
    getline(cin, facultad);
    estudiante.facultad = facultad;

    cout<<"Ingresa el nombre del estudiante: ";
    getline(cin, nombre);
    estudiante.setNombre(nombre);

    cout<<"Ingresa el nombre de la universidad: ";
    getline(cin, universidad);
    estudiante.setUniversidad(universidad);

    cout<<"*************** Estudiante UES*********************\n";
    estudiante.mostrarEstudiante();
  
    cout<<"*************** Estudiante *********************\n";
    Estudiante estudiante2;
    estudiante2.agregarEstudiante();
    estudiante2.mostrarEstudiante();
    return 0;
}