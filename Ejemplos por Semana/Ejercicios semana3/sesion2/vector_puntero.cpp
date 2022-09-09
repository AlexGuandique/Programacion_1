#include<iostream>
#include<string>

using namespace std;

int vector[7]= {7, -5, 21, 100, 27, 0, 9};
int *vectorPtr = nullptr;

int main()
{
    vectorPtr = &vector[0]; //puntero apunta al primer elemento del arreglo

    for(int i = 0; i < 7; i++ )
    {    
        cout <<"vector["<<i<<"]"<<"="<<vector[i]<<"\t";
        cout << "puntero = " << *vectorPtr++ << "     id:"<<vectorPtr<<endl;
    }
}