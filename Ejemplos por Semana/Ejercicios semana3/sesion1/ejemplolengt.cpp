#include<iostream>

using namespace std;

void display(string digits); //declarar la funcion

int main()
{
    string digits;
    digits = "0123456789";
    cout << "length str: " <<digits.length() << endl;
    display(digits);
}

void display(string digits){
    for(int i = 0; i <digits.length(); i++)
        {
            cout << digits[i] <<"\t";
        }
}
