#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void agregarContactos();
struct contacto
{
    string nombre;
    int numero;
};

int main()
{
    agregarContactos();
}

void agregarContactos()
{
    int n;
    cout << "Cuantos contactos quiere agregar: ";
    cin >> n;
    
    contacto contactos[n];

    ofstream archivo;
    archivo.open("agenda.txt", ios::out);
    if(!archivo)
    {
        cout<<"No se puede encontrar el archivo"<<endl;
        exit(1);
    }
    else
    {
        for(int i = 0; i<n; i++)
        {
        cout << "Nombre contacto "<<i+1<<": ";
        cin >> contactos[i].nombre;
        cout << "Telefono contacto "<<i+1<<": ";
        cin >> contactos[i].numero;
        
        archivo <<"***********************"<<endl;
        archivo << "Nombre: " + contactos[i].nombre<<endl;
        archivo << "Telefono: " << contactos[i].numero<<endl;
        }

    }
}