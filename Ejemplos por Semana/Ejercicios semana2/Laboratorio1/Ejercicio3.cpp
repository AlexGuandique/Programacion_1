#include<iostream>
using namespace std;

const int n = 5;

struct Person{
    string name;
    int age;
};


int main()
{
    Person p[n];
    
    cout<<"*********Ingresar personas*********"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Persona: "<<i+1<<endl;
        cout<<"Nombre: ";
        cin>>p[i].name;
        cout<<"Edad: ";
        cin>>p[i].age;
    }

    //Mostrar personas
    cout<<"*********Mostrar personas*********"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Mostrar Persona: "<<i+1<<endl;
        cout<<"Nombre == "<<p[i].name<<endl;
        cout<<"Edad == "<<p[i].age<<endl;
    }
    
}
