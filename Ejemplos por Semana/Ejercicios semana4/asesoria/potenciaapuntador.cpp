#include<iostream>
using namespace std;

int cubo(int *);

int main()
{
    int numero = 5;   
    cout << cubo(&numero) <<endl;
}

int cubo(int *puntero){
    return *puntero * *puntero * *puntero;

}
