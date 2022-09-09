/*Programa C++ para mostrar los elementos de dos matriz
 dimensional pasándola a una función*/
#include <iostream>
using namespace std;

// define una function 
// pasamos un array 2d como parametro
void display(int n[][2]) {
    cout << "Displaying Values: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
        }
    }
}

int main() {

    // inicializa el  array 2d 
    int num[3][2] = {
        {3, 4}, //[0,0], [0,1]
        {9, 5}, //[1,0], [1,1]
        {7, 1}  //[2,0], [2,1]
    };

    // llama la function
    // pasa un array 2d  como argumento
    display(num);
}