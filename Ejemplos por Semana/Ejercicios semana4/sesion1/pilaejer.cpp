#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    vector<string> alumnos = {"Vilma", "Yoselinne", "Naily", "Nataly", "Jimmy"};
    stack<string> alumnosPila;
   
    //Agregar 
    for(int i = 0; i < alumnos.size(); i++)
    {
        cout<<"Agregando a la Pila a: "<<alumnos[i]<<endl;
        alumnosPila.push(alumnos[i]);

    }
    cout<<"size of stack: "<<alumnosPila.size()<<endl;
    cout<<"empty stack: "<<alumnosPila.empty()<<endl;
    //Eliminar 
    for(int i = 0; i < alumnos.size(); i++)
    {
        cout<<"Eliminando de la Pila a: "<<alumnosPila.top()<<endl;
        alumnosPila.pop();
    }
    cout<<"empty stack: "<<alumnosPila.size()<<endl;
}