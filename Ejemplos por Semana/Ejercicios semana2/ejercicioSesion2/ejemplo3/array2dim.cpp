#include<iostream>
using namespace std;

const int N = 2;
const int M = 4;

int main()
{
    double discos[N] [M];
    int fila, col;
    //agregar datos al arreglo
    for (fila = 0; fila < N; fila++)
    {
        for (col = 0; col < M; col++)
        {
            cout <<"Ingresa el elemento "<<"["<<fila<<","<<col<<"]: ";
            cin >> discos[fila][col];
        }
    }
    // Visualizar la tabla
    for (fila = 0; fila < N; fila++)
    {
        cout << "Precio fila " << fila << " : ";
        for (col = 0; col < M; col++)
        {
            cout << discos[fila][col] << " ";
        }
        cout << endl;
    }
}