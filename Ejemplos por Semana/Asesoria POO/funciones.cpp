#include<iostream>

using namespace std;

int edad(int age);
double altura(double alt);
string nombre(string nom);
string apellido(string ape);

int main()
{
    cout << "Nombre: " << nombre("Vilma")<<endl;
    cout << "Apellido: " << apellido("Reyes")<<endl;
    cout << "edad: " << edad(20)<<endl;
    cout << "altura: " << altura(1.68) <<" mts"<<endl;
}

void nombre(string nom, string ape)
{
    cout << "Nombre: " << nom << endl;
    cout << "Apellido: " << ape << endl;
}
int edad(int age){
    return age;
}
double altura(double alt)
{
    return alt;
}
string nombre(string nom){
    return nom;
}
string apellido(string ape){
    return ape;
}