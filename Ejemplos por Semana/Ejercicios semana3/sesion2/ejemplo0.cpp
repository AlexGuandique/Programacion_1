#include<iostream>
using namespace std;

int main()
{
    int y = 5;  // declara la variable y
    int *yPtr = nullptr;// declara la variable apuntador yPtr

    yPtr = &y;

    cout <<"Mostrar el valor de y con yPtr: "<< *yPtr << endl;

    cout <<"Mostrar el valor de y: "<< y << endl;

    cout <<"Mostrar direccion de memoria de y: "<< yPtr << endl;

}