#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//declaracion de la funcion
void leerArchivo(string nombreArchivo);

int main()
{
    leerArchivo("archivos.txt");
}

void leerArchivo(string nombreArchivo){
    char cad[100];
    //crear el objeto de tipo entrada
    ifstream archivoSal;
    //abre el archivo datos.txt
    archivoSal.open(nombreArchivo, ios::in);

    if(!archivoSal){
        cout<<"No se puede abrir el archivo" <<endl;
    }
    else{
        /*eof = end del archivo (while no termina mientras no sea
        el fin del archivo)*/
        while(!archivoSal.eof()){
            archivoSal.getline(cad, 100);
            cout << cad <<endl;
        }
    }
    archivoSal.close();
    system("pause");
}

