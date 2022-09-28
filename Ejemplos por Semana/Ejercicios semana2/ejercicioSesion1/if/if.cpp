#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un entero: ";
    cin >> numero;

    // verifica si el numero es positivo
    if (numero > 0) {
        cout << "El numero es un entero: " << numero << endl;
    }
    cout <<"Codigo que se ejecuta despues de evaluar la condicion.";
    return 0;
}