#include<iostream>
#include <cmath>
using namespace std;


int main()
{
    double radio, area = 0;
    cout<<"Ingresa el radio de la circunferencia: ";
    cin>>radio;
    area = M_PI*pow(radio, 2);
    cout<<"Area = "<<area<<endl;
}