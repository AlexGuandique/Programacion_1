#include<iostream>
#include<string>


using namespace std;


int main()
{
    int edad;
    string mayorEdad;

    cout<<"Tu edad: ";
    cin>>edad;

    mayorEdad = edad >=18 ? "Mayor edad" : "Menor edad";

    cout<<mayorEdad;
    return 0;
}