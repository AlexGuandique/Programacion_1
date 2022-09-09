#include <iostream>
using namespace std;

int main() {
    int numeros[2][3];

    cout << "Escriba 6 numeros: " << endl;

    // Llenar la matriz con numeros ingresados por el usuario
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout <<"Ingrese el numero"<<"["<<i<<","<<j<<"]: ";
            cin >> numeros[i][j];
        }
    }

    cout << "Los numeros son: " << endl;

    //  Escribienso los elementos del array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "numeros[" << i << "][" << j << "]: " << numeros[i][j] << endl;
        }
    }
    return 0;
}