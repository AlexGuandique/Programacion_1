#include<iostream>
#include<string>

using namespace std;

//declarando una clase llamada Person
class  Person {
<<<<<<< HEAD
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
=======
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
>>>>>>> 857759aee14e83b22ca774c25c9a1bdd2f16961d
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
<<<<<<< HEAD
  Person person1;
  person1.mostrarPerson();

  Person person2("Josue","Romero",19);
  person2.mostrarPerson();
=======
  Person persona1;
  persona1.mostrarPersona();

  Person persona2("Alex", "Guandique", 29);
  persona2.mostrarPersona();

  Person persona3 = persona2;
  persona3.mostrarPersona();

  Person* persona4 = new Person("Karlos", "Aguilar", 25);
  persona4->mostrarPersona();
>>>>>>> 857759aee14e83b22ca774c25c9a1bdd2f16961d
}