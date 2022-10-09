#include<iostream>
using namespace std;

struct persona
{
    /* data */
    string nombre;
    int edad;
};


int main()
{
    persona per1;
    per1.nombre = "Alex";
    per1.edad = 28;
    cout << per1.nombre <<endl;
    cout << per1.edad <<endl;
}