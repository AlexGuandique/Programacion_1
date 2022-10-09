#include<iostream>
using namespace std;

void persona(string nom, string ape, int age, double alt);

int main()
{
    persona("Vilma", "Reyes", 20, 1.68);
}

void persona(string nom, string ape, int age, double alt)
{
    cout << "Nombre: " << nom<<endl;
    cout << "Apellido: " << ape<<endl;
    cout << "edad: " << age<<endl;
    cout << "altura: " << alt <<" mts"<<endl;
}


