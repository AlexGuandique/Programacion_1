#include <iostream>
using namespace std;

// Variable global 
int num;

// prototipo de funcion
int& test();

int main()
{
    test() = 5;
    cout << num;
}

int& test()
{
    return num;
}