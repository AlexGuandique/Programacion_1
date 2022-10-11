#include<iostream>

using namespace std;

class Rectangulo
{
private://atributos
    float largo,ancho;
public://metodos 
    Rectangulo(float,float);
   void perimetro();
    void aria();
};

Rectangulo::Rectangulo(float L,float A)
{
    largo = L;
    ancho = A;
} 

void Rectangulo::perimetro() 
{
    float Perimetro;

    Perimetro = (2*ancho) + (2* largo);
    cout<<"perimetro = "<<Perimetro<<endl;
}

void Rectangulo::aria()
{
    float Aria = ancho * largo;
    cout<<"Aria = "<<Aria<<endl;
}



int main()
{
    //creamos un obj
    Rectangulo oper1(20,30);
    oper1.aria();
    oper1.perimetro();
    

}