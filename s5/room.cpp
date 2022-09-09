#include<iostream>

using namespace std;

class Room
{
public:
    /* data */
    double x;
    double y;
    double z;

public:
    Room(){
        double x = 0.0;
        double y = 0.0;
        double z = 0.0;
    }
    double calcularArea(double x, double y)
    {
        return x * y;
    }
    double calcularVol(double x, double y, double z)
    {
        return x*y*z;
    }
    void getX()
    {
        cout<<"x: ";
        cin>>x; 
    }
    double setX()
    {
        return x;
    }
    double setY(double y)
    {
        return y;
    }
};



int main()
{
    double x, y;
    Room habitacion;

    //cout<<habitacion.y;
    /*
    habitacion.getX();
    x = habitacion.setX();
     
    cout<<"y: ";
    cin>>habitacion.y; 

    cout<<habitacion.calcularArea(x,habitacion.y)<<" u^2"<<endl;
    cout<<habitacion.calcularVol(x,5,2.5)<<" u^3"<<endl;*/
    return 0;
}