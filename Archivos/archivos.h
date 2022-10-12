#include<iostream>
#include<fstream> //Biblioteca Para el manejo de archivos

using namespace std;

bool archivo_existe(string nombreArchivo)
{
	ifstream archivo(nombreArchivo.c_str());
	return archivo.good();
}

ofstream crearArchivo()
{
    char name[] = "datos.txt";
    ofstream archivo; //Objeto de la clase ofstream
    if(archivo_existe(name))
    {
        cout << "El archivo \""<<name<<"\" ya existe\n";
    }
    else
    {
        char name[] = "datos.txt";
        archivo.open(name, ios::out);
        cout<<"El archivo \""<<name<<"\" fue creado con exito";
    }
    return archivo;
}