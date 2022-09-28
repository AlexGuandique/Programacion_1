//Programa C++ para mostrar notas de 5 alumnos
#include <iostream>
using namespace std;

// declaramos la funcion
// la funcion toma como parametro un array de una dimension (vector)
void display(double m[5]) {
    cout << "Visualizacion de Notas: " << endl;

    // display array elements    
    for (int i = 0; i < 5; ++i) {
        cout << "Estudiante " << i + 1 << ": " << m[i] << endl;
    }
}

int main() {

    // declarar e inicializar el arreglo
    double notas[5] = {8.8, 7.6, 9.5, 6.1, 6.9};
    
    // llamar a la funcion display
    // pasar arreglo como argumento
    display(notas);
}