#include<iostream>
using namespace std;

int sumar(int numero1, int numero2);

int main()
{
    int x = 7;
    int y = 1;

    cout <<" La funcion retorna: " << sumar(x, y) <<endl;

}

int sumar(int numero1, int numero2){
    //codigo de la funcion
    return numero1 + numero2;
}
