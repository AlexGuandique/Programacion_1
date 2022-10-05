#include<iostream>
using namespace std;

int main()
{
    //sentencias selectivas
    int edad;
    cout << "Tu edad: " <<endl;
    cin >> edad;

    if(edad >= 18)
    {
        //entonces
        bool boleto = true;
        cout << "Tienes: " << edad << " eres mayor de edad." << endl;
        if(boleto == true)
        {
            cout <<"Puedes pasar"<<endl;
            
            string gen = "F";
            if(gen == "M"){
                cout << "Eres hombre.";
            }
        }
        else{
            cout <<"NO Puedes pasar"<<endl;
        }
    } 
    else
    {
        cout << "Tienes: " << edad << " eres menor de edad." << endl;
    }
    cout << "fin de la ejecucion"<<endl;
}