#include <iostream>
#include <cstdlib> //Libreria para incluir system("pause");
 
using namespace std;
 
int main() {
    for (int i=0; i<=10; i++) { // i = 0 hasta 10
        cout << "i = " << i << endl;
        if (i == 5) {
            // Llamada al comando de pausa
            cout << "Llamar al comando de pausa\n";
            system("pause");
            cout << "programa de pausa terminado. Reanudando ...\n";
        }
    }
    system("pause");
}//fin de main