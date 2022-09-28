#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    vector<string> alumnos = {"Vilma", "Yoselinne", "Naily", "Nataly", "Jimmy"};
    queue<string> alumnosCola;
    
    //Agregar 
    for(int i = 0; i < alumnos.size(); i++)
    {
        cout<<"Agregando a la cola a: "<<alumnos[i]<<endl;
        alumnosCola.push(alumnos[i]);
    }
    cout<<"size of queue: "<<alumnosCola.size()<<endl;
    cout<<"empty queue: "<<alumnosCola.empty()<<endl;
    //Eliminar 
    for(int i = 0; i < alumnos.size(); i++)
    {
        cout<<"Eliminando de la cola a: "<<alumnosCola.front()<<endl;
        alumnosCola.pop();
        //cout<<"Eliminando de la cola a: "<<alumnosCola.front()<<endl;
    }
    cout<<"empty queue: "<<alumnosCola.empty()<<endl;
}