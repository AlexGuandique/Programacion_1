#include<iostream>

using namespace std;

class Prueba
{
private:
      int x;

public:
   Prueba(int x); //contructor preterminado
    void imprime() const;
};

Prueba::Prueba(int a)//contructor 
{
    x = a;
}

void Prueba::imprime() const
{
    cout<<"          x = " << x
        <<"\n this -> x = " << this -> x
        <<"\n (*this).x = " << (*this).x <<endl;
}//fin de la funcion imprime


int main(){
    //creamos un obt
    Prueba objPrueba(12);
    objPrueba.imprime();

    Prueba objPrueba2(190);
    objPrueba2.imprime();

}