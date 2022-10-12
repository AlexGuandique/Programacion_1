#include<iostream>
#include<string>

using namespace std;

int main()
{
    enum color {BLANCO, AZUL, VERDE, ROJO};
    color rotulador = ROJO;

    int x;
    
    cout << "\n El color actual es :" << rotulador << endl;
    cout << "Introduzca un valor: "; cin >> x;
    rotulador = (color)x;

    if (rotulador == ROJO)
    {
        cout << "El rotulador es rojo" << endl;
    }
    else if (rotulador == VERDE)
    {
        cout << "El rotulador es verde" << endl;
    }
    else if (rotulador == AZUL)
    {
         cout << "El rotulador es azul" << endl;
    }
    else if (rotulador == BLANCO)
    {
        cout << "El rotulador es blanco" << endl;
    }
    else
    {
        cout << "El color es indefinido" << endl;
    }

    


}
