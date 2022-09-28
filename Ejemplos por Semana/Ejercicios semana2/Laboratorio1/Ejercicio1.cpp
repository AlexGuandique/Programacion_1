/*Crear una Estructura de una Persona, utiliza tus datos personales 
para crear un registro de esa estructura*/

#include<iostream>
using namespace std;

struct Persona
{
    string name;
    int age;
    string dui;
    string tel;

};

int main()
{
    Persona per1;

    per1 = {"Alexander Guandique", 28, "04809526-5", "7425-7825"};

    cout<<"Nombre: "<<per1.name<<endl;
    cout<<"Edad: "<<per1.age<<endl;
    cout<<"Dui: "<<per1.dui<<endl;
    cout<<"Tel: "<<per1.tel<<endl;   
}