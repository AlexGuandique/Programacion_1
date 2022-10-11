#include<iostream>

using namespace std;

class Puntos
{
private://ATRIBUTOS
    int x,y;
public://METODOS
    Puntos();
    void setPuntos(int,int);//
    int getPuntosX();
    int getPuntosY();
};

Puntos::Puntos()
{
}

void Puntos::setPuntos(int _X,int _Y){
        x = _X;
        y = _Y;
} 



int Puntos::getPuntosX(){return x;}
int Puntos::getPuntosY(){return y;}

int main()
{
    //creamos un objeto

    Puntos P1;
    P1.setPuntos(3,2);
    cout<<P1.getPuntosX()<<endl;
    cout<<P1.getPuntosY()<<endl;
}
