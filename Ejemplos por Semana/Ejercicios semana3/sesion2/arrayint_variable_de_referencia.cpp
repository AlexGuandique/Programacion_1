#include<iostream>
#include <array> //array
#include<string> 
#include<iomanip> // setw
using namespace std;

int main()
{
    array<int, 5>  vector = {1,2,3,4,7};

    cout<<"Valor"<<endl;
    for(const int &n: vector)
    {    
        cout<< n <<endl;
    }
}