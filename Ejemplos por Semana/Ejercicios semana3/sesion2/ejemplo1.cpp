#include<iostream>
#include<string>

using namespace std;

int main()
{
    int y = 5;  // declara la variable y
    int *yPtr = nullptr;// declara la variable apuntador yPtr
    
    yPtr = &y;

    cout << *yPtr << endl;
    cout << y << endl;
    cout << yPtr << endl;
    *yPtr = 9;
    
    cout << *yPtr << endl;
    cout << y << endl;
    cout << yPtr << endl;
}