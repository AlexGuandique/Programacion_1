#include<iostream>

using namespace std;

class Persona
{
private://atributo
    string nombre;
    float edad;
public://metodos 
    Persona(string,float);//contructor clase 
    
    void mostrarPeersona();

   //contructor de clase padre 
    Persona::Persona(string _nombre,int _edad)
    {
        nombre = nombre;
        edad = edad;
    }
    
    void Persona::mostrarPersona()
    {
        cout<<"NOMBRE: \n"<<nombre;
        cout<<"EDAD: \n"<<edad;
    }
};

class Alumno : public Persona
{
private://atrubutos 
   string codigo_Alumno;
   float nota_final;
public://metodos 
    Alumno(string,int,string,float);//contructor de la clase alumno
    void Mostrar_Alumno();

    //definimos el contructor de alumno
    Alumno::Alumno(string _nombre,int _edad,string _codigo_Alumno,float _nota_final) : Persona(_nombre,_edad)
    {
        codigo_Alumno = codigo_Alumno;
        nota_final = nota_final;
    }

    void Alumno::Mostrar_Alumno()
    {
        mostrarPeersona();//lamamos a mostrar persona 
        cout<<"Codigo del alumno"<<codigo_Alumno<<endl;
        cout<<"nota Final:"<<nota_final<<endl;
    }
    
};

int main()
{
    //creamos un objeto de la clase hijo
    Alumno Alumno1("JOSUE ROMERO",20,"222900",10)
    alumno1.mostrarAlumno();
}




 