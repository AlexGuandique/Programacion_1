#include<iostream>
#include<string>

using namespace std;
//declarando una clase llamada Person
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


int main()
{
    Person person1;
    person1.mostrarpersona();

    Person person2("Santos Colima", "Ochoa Romero", 18, "RO22024");
    person2.mostrarpersona();

    Person person3 = person1;
    person3.mostrarpersona();

    Person* persona4 = new Person("Alex", "Flores", 25, "GF220002");
    persona4->mostrarpersona();





}