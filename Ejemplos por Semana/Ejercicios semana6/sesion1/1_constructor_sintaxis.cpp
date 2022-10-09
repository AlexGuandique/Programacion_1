#include<iostream>
#include<string>

using namespace std;
//declarando una clase llamada Person
<<<<<<< HEAD
class  Person 
{
    private:
    string nombre;
    int edad;
    string apelllido;
    string carnet;


    public:
    // creando un constructor

      Person()
  {
    nombre = "kevin Nathanael";


    
    edad = 19;
    apelllido = "Granados Perez";
    carnet = "GP22006";
  }

        Person(string nom, string apel, int age, string car)
  {
    nombre = nom;
    edad = age;
    apelllido = apel;
    carnet = car;
  }

  Person(Person &obj)
  {
    nombre = obj.nombre;
    edad = obj.edad;
    apelllido = obj.apelllido;
    carnet = obj.carnet;

  }
    void mostrarpersona()
    {
    cout << "*****Creando una persona*****"<<endl;
    cout<<"El nombre  de la persona  es : " << nombre << endl;
    cout << "Los apellidos de la persona son: " << apelllido << endl;
    cout << "El carnet de la persona es :" << carnet<<endl;
    cout << "La edad de la persona es :" << edad << "\n"<< endl;
    
  }

    };

=======
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
>>>>>>> 857759aee14e83b22ca774c25c9a1bdd2f16961d

int main()    
{
<<<<<<< HEAD
    Person person1;
    person1.mostrarpersona();

    Person person2("Santos Colima", "Ochoa Romero", 18, "RO22024");
    person2.mostrarpersona();

    Person person3 = person1;
    person3.mostrarpersona();

    Person* persona4 = new Person("Alex", "Flores", 25, "GF220002");
    persona4->mostrarpersona();





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