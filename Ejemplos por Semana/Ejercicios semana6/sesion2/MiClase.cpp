#include<iostream>
#include<string>
#include "MiClase.h"

using namespace std;

class MyClase
{
    private:
        string lenguaje; 
    public:
        MyClase(string l);
        string leerLenguaje();
};

MyClase::MyClase(string l = "C++")
{
    lenguaje = l;
}
string MyClase::leerLenguaje()
{
    return lenguaje;
}

int main()
{
    MyClase miObj;
    cout << miObj.leerLenguaje()<<endl;
    
    MyClase miObj2("Python");
    cout << miObj2.leerLenguaje()<<endl;
}