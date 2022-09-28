#include <iomanip> //para setprecision
#include<iostream>
using namespace std;

int main() {
    double a = 3.912348239293;
    float b = 3.912348239293f;

    // Ajuste de la precisión a 12 decimales
    cout << setprecision(13);

    // Impresión de las dos variables
    cout << "Numero de tipo Double = " << 2*a << endl;
    cout << "Numero de tipo Float = " << 2*b << endl;

    return 0;
}