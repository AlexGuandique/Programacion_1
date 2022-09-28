#include<iostream>
#include<string>

using namespace std;

int main()
{
    string nombre = "Marta";
    string *nombrePtr;

    nombrePtr = &nombre;

    cout << &nombre<<endl;
    cout << nombre<<endl;

    cout << *nombrePtr <<endl;
    *nombrePtr = "Juana";
    
    cout << *nombrePtr <<endl;
    cout << nombre<<endl;
}