#include<iostream>
#include<string.h>

using namespace std; 

class Libro//clase padre
{
   friend class Literatura;//clase amiga
private:
    string Nombre;
    string contenido;
    int Numero_p;

public:
    Libro(string,string,int);//para el contructor
};

Libro::Libro(string N,string C,int NP)//contructor 
{ 
    Nombre = N;
    contenido = C;
    Numero_p = NP;
}
 

class Literatura//
{
private:  
   string contenido;
   string Aprendizaje;
public: 

    Literatura();
     Literatura(string,string);
    void imprimir()
    {
        //creo un obj de clase documento

        Libro LB = Libro("Literatura española ","permite aprender cosas new",24);
        cout <<"Titulo: " << LB.Nombre<<endl; 
        cout <<"Contenido: " << LB.contenido<<endl;
        cout <<"Numero de documento: " << LB.Numero_p<<endl;
        cout <<"contenido: " << contenido <<endl;
        cout <<"Enseñanza: " << Aprendizaje<<endl;
    }
};
Literatura::Literatura(string C,string E)
{
    contenido = C; 
    Aprendizaje = E;
}

int main(){
    //creamos un obj 
    Literatura LIT;
    Literatura("LAS LISTA DE LITERATURA ESPAÑOLA","LEER");
    LIT.imprimir();

    system("pause");
}


