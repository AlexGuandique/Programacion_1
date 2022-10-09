#include<iostream>
#include<string>

using namespace std;

void funcion(){
    cout<<"Desde funcion";
}

void funcion(){
    cout<<"Hola mundo";
}

int main()
{
    funcion();//mostraria un error por las funciones duplicadas
}