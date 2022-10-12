#include<iostream>
#include<string>
#include<vector> //Incruir encabezado o libreria para vectores de c++
using namespace std;

int main()
{
    // Inicializar vector
    vector<int> vector1 = {7,6,5,4,3,2,1};
    vector<int> vector2 {1, 2, 3, 4, 5,6};
    vector<int> *ptrVect = nullptr; //declarar puntero

    ptrVect = &vector1; //asignar direccion de memoria a puntero

    for(int v:ptrVect[0]){
        cout << "valor:" <<v++<<endl;
    }
    cout<<"**********************************"<<endl;  
    for(int i = 0; i<vector2.capacity(); i++){
        cout << "valor:" <<vector2[i]<<endl;
    }
}

