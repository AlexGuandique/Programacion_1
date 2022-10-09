#include <iostream>
using namespace std;

const int NUM = 8; //Constante NUM con valor de 8

int main()
{
    int nums[NUM];
    int total = 0;
    for (int i = 0; i < NUM; i++)
    {
        cout << "Por favor, introduzca un numero entero: ";
        cin >> nums[i];
        total += nums[i];
    }
    cout << "\nLa suma de los numeros es: " << total << endl;
}