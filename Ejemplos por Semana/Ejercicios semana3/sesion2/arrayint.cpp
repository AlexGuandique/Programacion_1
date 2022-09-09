#include<iostream>
#include <array> //array
#include<string> 
#include<iomanip> // setw
using namespace std;

int main()
{
    array<int,5>  vector = {1,2,3,4,5};
    int array[] = {6,7,8,9};
    cout<< "indice" << setw(10)<<"Valor"<<endl;
    for(int i = 0; i < vector.size(); i++)
    {    
        cout<< i << setw(15)<<vector[i]<<endl;
    }
}