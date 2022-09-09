#include<iostream>
#include <array> //array
#include<string> 
#include<iomanip> // setw
using namespace std;

int main()
{
    array<string, 5>  vector = {"c", "c++", "python", "R", "c#"};

    cout<< "indice" << setw(10)<<"Valor"<<endl;
    for(int i = 0; i < vector.size(); i++)
    {    
        cout<< i << setw(15)<<vector[i]<<endl;
    }
}