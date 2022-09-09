#include<iostream>
#include<string>

using namespace std;

void mostrar(int d[]); //declaracion de la funcion

int main()
{
    int digit[9] = {1,2,3,4,5,6,7,8,9};
    mostrar(digit);
}

void mostrar(int d[]){
    for(int i=0; i < 9; i++){
        cout<<d[i]<<"\t";
    }
}