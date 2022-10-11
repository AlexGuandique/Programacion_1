// dos clase documento e- impresora
#include<iostream>
#include<string.h>

using namespace std;

class Documento//clase padre
{
   friend class Impresora;//clase amiga
private:
    string titulo;
    string contenido;
    int numero_documento;

public:
    Documento(string,string,int);//para el contructor
};

Documento::Documento(string T,string C,int Doc)//contructor 
{ 
    titulo = T;
    contenido = C;
    numero_documento = Doc;
}

class Impresora//clase derivada
{
public:
    void imprimir()
    {
        //creo un obj de clase documento

       Documento word = Documento("clase amiga ","permite acceder a lo privado",24);
        cout <<"Titulo: " << word.titulo<<endl; 
        cout <<"Contenido: " << word.contenido<<endl;
        cout <<"Numero de documento: " << word.numero_documento<<endl;
    }
};

int main(){
    //creamos un obj 
    Impresora IM; 
    IM.imprimir();///llamamos a nuestra funcion

    system("pause");
}
