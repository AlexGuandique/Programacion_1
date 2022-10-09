//Tpipos de datos

#include<iostream>
#include<string>

using namespace std;

int main()
{
    //Numericos enteros
     short num;
     int numint;
     long numlong;
     char numchar = -128;

     num = 32767;
    numint = -2147483648;
    numlong = -2147483670;
     cout << "Valor short: " << num <<endl;   
     cout << "Valor int: " << numint <<endl;   
      cout << "Valor long: " << numlong <<endl; 
        cout << "Valor char: " << numchar <<endl; 

    char x[] = "ñññÑ";
    cout << x;
}

