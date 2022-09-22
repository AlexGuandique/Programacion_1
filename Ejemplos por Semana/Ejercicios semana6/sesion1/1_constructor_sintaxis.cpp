#include<iostream>
#include<string>

using namespace std;

//declarando una clase llamada Person
class  Person {
    private:
    //atribute
    string nombre;
    int edad;
    string apell;
    string carrnet;

    public:
    // creando un constructor
    Person() {//defecto
      
      nombre = "Cacaroto";
      apell = "Ortez";
      edad = 49;
      //imprime_date(edad,apell,nombre);
    }
    Person(string nom,string ape,int edad2) {//parametro
      
      nombre = nom;
      apell = ape;
      edad = edad2;
      //imprime_date(edad,apell,nombre);
    }

    void mostrarPerson()//funcion miembro Y resive los valores
    {
      cout<<"nombre Digitado:" << nombre<<endl;
      cout<<"Apellidos Digitado: "<< apell<<endl;
      cout<<"edad Digitado:" << edad<<endl;
      cout<<"\n";
    }
};

int main()
{
  Person person1;
  person1.mostrarPerson();

  Person person2("Josue","Romero",19);
  person2.mostrarPerson();
}