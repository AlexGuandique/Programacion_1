#include<iostream> // cout, cin
#include <fstream> // manejo de archivos

using namespace std;

int main()
{
    ofstream archivo; //Objeto de la clase ofstream

    archivo.open("archivos.txt", ios::out);
    
    if(!archivo)
    {
        cout<<"No se puede abrir el archivo" <<endl;
    }
    else
    {
        /*para escribir en el archivo se utiliza el objeto que se creo 
        y el operador << igual que cout*/
        archivo << "Primera linea de texto" <<endl;
        archivo << "Segunda linea de texto" <<endl;
        archivo << "Ultima linea de texto" <<endl;
        //Cerrar el archivo
        archivo.close();
        cout << "!!!Datos agregados con exito";
    }
    cout<< "\n Busque en la carpeta donde tiene este programa el archivo"<<endl;
    system("pause");
}