#include <iostream>
#include <string>

using namespace std;

class Pared{
private:
    double ancho, alto;
public:
    Pared(double ancho_, double alto_){
        ancho = ancho_;
        alto = alto_;
    }
    Pared(){
        ancho = 0;
        alto = 0;

        
    }
    //Optener
    int leerAncho() const; // devuelve el valor de x
    int leerAlto() const; // devuelve el valor de y
    //Establecer
    void fijarAncho(int valorAncho); // establece el valor de x
    void fijarAlto(int valorAlto); // establece el valor de y
};

int Pared::leerAncho() const
{
    return ancho;
}
int Pared::leerAlto() const
{
    return alto;
}

int main(){
    Pared mipared(5,10);
    cout<<"Ancho: "<<mipared.leerAncho()<<endl;
    cout<<"Alto: "<<mipared.leerAlto()<<endl;

    Pared p;
    cout<<"Ancho: "<<p.leerAncho()<<endl;
    cout<<"Alto: "<<p.leerAlto()<<endl;
}