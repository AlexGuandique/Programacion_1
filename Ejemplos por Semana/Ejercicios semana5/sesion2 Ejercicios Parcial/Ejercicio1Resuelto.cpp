#include<iostream>
using namespace std;

int main()
{
    int notas[5][3][3];
    string nombre[5] = {"Vilma", "Yoseline", "Nataly", "Jimmy", "Naily"};
    string materia[3] = {"Programacion 1", "Manejo de Sofware", "Introduccion a la informatica"};
    
    for (int i=0; i<5; i++)
    {
        for (int j =0; j<3;j++)
        {
            for (int k=0; k<3;k++)
            {
                cout << "Alumno: "<<nombre[i]<<endl;
                cout << "Materia: "<<materia[j]<<endl;
                cout << "Nota"<<k+1<<": ";
                cin >> notas[i][j][k];
            }
        }
    }
    cout << "\n*********************Mostrar Arreglo *****************************\n";
    for (int i=0; i<1; i++)
    {
        for (int j =0; j<3;j++)
        {
            for (int k=0; k<3;k++)
            {
                cout << "Alumno: "<<nombre[0]<<endl;
                cout << "Materia: "<<materia[0]<<endl;
                cout << "Nota"<<k+1<<": ";
                cout << notas[i][j][k]<<endl;
            }
        }
    }
}