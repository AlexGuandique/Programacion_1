#include<iostream>
#include<string>

using namespace std;

int main()
{
    int x = 7, y = 8, z = 2;
    string nombre = "Juan";
    string apelllido = "Perez";
    cout << x << "+" << y <<"="<< x+y<<endl;
    cout << x << "-" << y <<"="<< x-y<<endl;
    cout << x << "*" << z <<"="<< x*z<<endl;
    cout << y << "/" << z <<"="<< y/z<<endl;
    cout << x << "%" << z <<"="<< x%z<<endl;
    cout << nombre+" "+apelllido;
}