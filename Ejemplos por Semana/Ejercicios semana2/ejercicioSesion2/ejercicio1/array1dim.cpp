#include<iostream>
using namespace std;

const int filas = 5;
const int columnas = 3;
int main()
{
    string nombres[] = {"Vilma", "Natali", "Jimmy", "Yoselin", "Naily"};
    double notas[5][3] ={ //notas c1, c2, c3
                            {7,8,9},
                            {10,9,7},
                            {7,9.8,7.9},
                            {8,7,6.9},
                            {6,8,7.7},
                        };
    for(int i = 0; i<filas; i++)
    {
        cout<<"\nAlumno: "<<nombres[i]<<endl;
        for(int j = 0; j<columnas; j++)
        {
            cout<<"Nota"<<j+1<<": "<<notas[i][j]<<endl;

        }
        
    }

    cout<<nombres[4]<<notas[4][2];
}