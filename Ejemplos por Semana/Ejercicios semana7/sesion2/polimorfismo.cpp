#include<iostream>
#include<string>

using namespace std;

class Poligono
{   // superclase (clase base, clase padre)
    public:
        //funciones miembro (Metodos de clase) virtuales
        virtual double perimetro();
        virtual double area();
        virtual bool puntoInterior();
        virtual void visualizar();
};
// la clase Rectángulo debe definir las funciones virtuales que use de
//la clase polígono
class Rectangulo : public Poligono
{
    private:
        double Alto, Bajo, Izquierdo, Derecho;
    public:
        double perimetro();
        double area();
        bool puntoInterior();
        void visualizar();
        void setRectangulo();
};
//la clase Triángulo debe definir las funciones virtuales que use de
//la clase polígono
class Triangulo : public Poligono
{
    double uno, dos, tres;
    public:
        double area();
        bool puntoInterior();
        void setTriangulo();
};

int main()
{
    Triangulo trianguloObj;
    trianguloObj.area(); 
    Rectangulo rectanguloObj;
    rectanguloObj.area(); 
    Poligono poligonoObj;
    poligonoObj.area();
}