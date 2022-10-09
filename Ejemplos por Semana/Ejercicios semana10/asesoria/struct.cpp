#include<iostream>
using namespace std;

struct perro
{
    string nombre = "";
    int edad = 0;
    double peso = 0.0;
    double altura = 0.0;
};

void mostrar();

int main()
{
  for (int i = 1; i<=3; i++)
  {
      mostrar();
  }
}

void mostrar()
    {
        perro perro1;
        cout << "Ingresa el nombre del perro: ";
        getline(cin,perro1.nombre);
        perro1.altura = 50;
        perro1.edad = 1;
        perro1.peso = 30;

        cout << "Nombre: " << perro1.nombre <<endl;
        cout << "Edad:" <<perro1.edad <<endl;
        cout << "Peso: " <<perro1.peso <<endl;
        cout << "Altura: "<< perro1.altura <<endl;

        std::cout << "Mi Graduación";
    }
