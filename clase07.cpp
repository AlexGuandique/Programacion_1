#include<iostream>

using namespace std;


class Person{
  private:
  int edad;
  string nombre;
  public:
  void getnombre()
  {
    cout<<"Ingrese el nombre : "<<endl;
     getline(cin, nombre);
  }
   
  string setnombre()
  {
     return nombre;               
  }

  Person()
  {
    nombre = "Kevin Nathanael";
    edad = 19;
    cout << "*****Creando una persona*****"<<endl;
    cout<<"El nombre de la persona es :" << nombre << endl;
    cout << "La edad de la persona es :" << edad << endl;
  }

};

int main ()
{

  Person person1;

  person1.getnombre();
  string n;
  n = person1.setnombre();
  cout<<"Su nombre es "<<n<<endl;





}