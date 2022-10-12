#include<iostream>
#include<string>
#include<fstream> //Biblioteca Para el manejo de archivos
#include"archivos.h"

struct combo
{
    string p_principal;
    string postre;
    double precio;
};


using namespace std;

int main()
{
    ofstream archivo;
    archivo = crearArchivo();
    return 0;
}