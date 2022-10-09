#include<iostream>
#include<string>
#include <cstdlib> // Libreria para incluir system ("pause");

using namespace std;

namespace namespace1{
    double x = 7.7;
    int hello(){
        cout<<"Hola mundo, me gusta programar en Python"<<endl;
        return 0;
    }
    string f2(){
        return "Hola mundo, me gusta programar en C#";
    }
    void f(){
        cout<< "Hola mundo, me gusta programar en Java";
    }
}

namespace namespace2{
    double x = 8;
    void hello(){
        cout<<"Hola mundo, me gusta programar en C++"<<endl;
    }
}

int main()
{
    //funciones
    cout<<endl;
    namespace1::hello();
    cout<<endl;
    namespace2::hello();
    cout<<endl;
    //variables
    cout<<namespace1::x<<endl;
    cout<<namespace2::x<<endl;
    cout<<namespace1::f2();
    namespace1::f;
    system("pause");
    return 0;
}

