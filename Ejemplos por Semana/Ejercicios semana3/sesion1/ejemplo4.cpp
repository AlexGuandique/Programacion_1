#include <iostream>
using namespace std;

void display(char *); //Declaracion de la funcion display
void display(string); //Declaracion de la funcion display

int main()
{
    string str1;
    char str[100];
    
    cout << "Ingresa una cadena: ";
    getline(cin, str1);

    cout << "Ingresa otra cadena: ";
    cin.get(str, 100, '\n');

    display(str1);
    display(str);
}

void display(char s[])
{
    cout << "La matriz de caracteres introducida es: " << s << endl;
}

void display(string s)
{
    cout << "La cadena introducida es: " << s << endl;
}