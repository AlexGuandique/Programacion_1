#include <iostream>
using namespace std;

void cuboPorReferencia( int *); // prototipo

int main(){

    int numero = 5;
    cout << "El valor original de numero es " << numero<<endl;
    cout << "La direccion de memoria de numero es " << &numero;
    cuboPorReferencia( &numero );// pasa la dirección de numero a cuboPorReferencia
    cout << "\nEl nuevo valor de numero es " << numero << endl;
    cout << numero;
}
// calcula el cubo de *nPtr; modifica la variable numero en main
void cuboPorReferencia( int *nPtr )
{ 
    cout << "\nEl valor de nPtr es: " << nPtr;
    *nPtr = *nPtr * *nPtr * *nPtr; // eleva *nPtr al cubo
} 