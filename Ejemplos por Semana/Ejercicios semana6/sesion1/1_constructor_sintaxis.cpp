#include<iostream>
#include<string>

using namespace std;
//declarando una clase llamada Person
class  Person {
    private: 
    //Atributos (estado) -- Variables miembro, Datos miembro
    string nombre;
    string apellido;
    int edad;

    public:
    // creando un constructor
    Person() {
      // codigo
      nombre = "Fulanito";
      apellido = "Colima";
      edad = 17;  
    }
    Person(string nom, string apell, int age) {
      // codigo
      nombre = nom;
      apellido = apell;
      edad = age;  
    }
    Person(Person &obj)
    {
      nombre = obj.nombre;
      apellido = obj.apellido;
      edad = obj.edad; 

    }
    //Funcion miembro
    void mostrarPersona()
    {
      cout<<"***** Persona ******"<<endl;
      cout<<"Nombre: "<<nombre<<endl;
      cout<<"Apellido: "<<apellido<<endl;
      cout<<"Edad: "<<edad<<endl;
    }
    //void agregarPersona()
};

int main()    
{
  Person persona1;
  persona1.mostrarPersona();

  Person persona2("Alex", "Guandique", 29);
  persona2.mostrarPersona();

  Person persona3 = persona2;
  persona3.mostrarPersona();

  Person* persona4 = new Person("Karlos", "Aguilar", 25);
  persona4->mostrarPersona();
}