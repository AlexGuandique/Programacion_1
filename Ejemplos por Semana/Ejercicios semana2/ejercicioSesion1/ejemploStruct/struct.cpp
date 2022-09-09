#include<iostream>
using namespace std;

//Definir la estructura.
struct empleado
{
    unsigned int id; //unsigned: indica entero sin signo
    int edad;
    string nombre;
    float salario;
        
};

int main()
{
    
    /*Una vez que se ha definido una variable, 
    se pueden crear variables de ese tipo:*/

    //nombreEstructura miVar;
    empleado e1;

    e1.id = 4047;
    e1.nombre = "Marcos";
    e1.salario = 1500;
    e1.edad = 36;

    empleado e2 = {4044, 26, "Marcos", 1499 };

    cout<<"Id: "<<e1.id<<endl; 
    cout<<"nombre: "<<e1.nombre<<endl;
    cout<<"salario: "<<e1.salario<<endl; 
    cout<<"edad: "<<e1.edad<<endl;
    cout<<"\n";
    cout<<"Id: "<<e2.id<<endl; 
    cout<<"nombre: "<<e2.nombre<<endl;
    cout<<"salario: "<<e2.salario<<endl; 
    cout<<"edad: "<<e2.edad<<endl;



}