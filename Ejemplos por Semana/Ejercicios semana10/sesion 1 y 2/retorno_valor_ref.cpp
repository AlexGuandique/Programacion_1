#include <iostream>
using namespace std;

// Variable global 
int num;

// prototipo de funcion
int& test();
int n();
int main()
{
  
    test() = 5; //num = 5;
    cout << num<<endl;
    n();
    cout << num <<endl;
}

int& test()
{
    return num;
}
int n()
{
    num = num+1;
    return num;
}