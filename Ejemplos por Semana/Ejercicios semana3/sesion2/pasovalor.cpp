#include <iostream>
using namespace std;

int cuboPorValor( int ); // prototipo

int main(){

    int numero = 5;
    cout << "El valor original de numero es " << numero;
    numero = cuboPorValor( numero ); // pasa el numero por valor a cuboPorValor
    cout << "\nEl nuevo valor de numero es " << numero << endl;
    cout << numero;
}
// calcula y devuelve el cubo del argumento entero
int cuboPorValor( int n ){ return n * n * n; } 