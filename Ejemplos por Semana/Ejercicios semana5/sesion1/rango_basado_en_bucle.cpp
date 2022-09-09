#include<iostream>
#include<string>

using namespace std;

int main()
{
    string letras[] = {"A", "B", "C", "D", "E", "F", "G", "H"};

    for (string letra : letras)
    {
        cout << letra << "\t";
    }
    cout << endl;

    int numeros[]  = {1, 2, 3, 4, 5, 6, 7, 8};

    for(int numero : numeros)
    {
        cout << numero << "\t";
    }
    cout << endl;

    double nums[]  = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};

    for(double num : nums)
    {
        cout << num << "\t";
    }
}