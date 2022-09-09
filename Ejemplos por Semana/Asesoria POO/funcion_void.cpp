#include<iostream>

using namespace std;

void nombre(string nom, string ape);
void edad(int age);
void altura(double alt);

int main()
{
    nombre("Vilma", "Reyes");
    edad(20);
    altura(1.68);
}


void altura(double alt)
{
    cout << "altura: " << alt <<" mts"<<endl;
}

void nombre(string nom, string ape)
{
    cout << "Nombre: " << nom << endl;
    cout << "Apellido: " << ape << endl;
}
void edad(int age){
    cout << "edad: " << age << endl;
}

