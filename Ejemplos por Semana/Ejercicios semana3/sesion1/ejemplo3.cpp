#include <iostream>
#include<string>
using namespace std;

int main()
{
    // Declarando un string object
    string str;
    char a[100];
    cout << "Ingresa una cadena: ";
    getline(cin, str);
    cout << "Ingresa otra cadena: ";
    cin.get(a, 100);
    cout << "Tu Cadena con str: " << str << endl;
    cout << "Tu Cadena con char: " << a << endl;
}