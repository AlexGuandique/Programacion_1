#include <iostream>
using namespace std;

int main() {
    int test[3][2] = {  
                        {2, -5},
                        {4, 0},
                        {9, 1}
                     };

    //Acceder a las filas de la matriz
    for (int i = 0; i < 3; ++i) {
        // Acceder a las columnas de la matriz
        for (int j = 0; j < 2; ++j) {
            cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
        }
        cout<<"\n";
    }
    return 0;
}