#include <iostream>
using namespace std;
//Prototipos de las funciones
int cuadradoPorValor( int ); //copia del valor original 

void cuadradoPorReferencia(const int & );  // La direccion de memoria donde esta el valor original
//**********************************
int main()
{
    int x = 2; 
    int z = 4; 

    // demuestra cuadradoPorValor
    cout << "x = " << x << " antes de cuadradoPorValor\n";
    cout << "Valor devuelto por cuadradoPorValor: ";
    cout << cuadradoPorValor(x) << endl;
    cout << "x = " << x << " despues de cuadradoPorValor\n" << endl;

    // demuestra cuadradoPorReferencia
    cout << "z = " << z << " antes de cuadradoPorReferencia" << endl;
    cuadradoPorReferencia(z);
    cout << "z = " << z << " despues de cuadradoPorReferencia" << endl;
} 

int cuadradoPorValor( int numero ) // 2 (copia)
{
    return numero *= numero;   //2*2=4 
} 

void cuadradoPorReferencia(const int &refNumero)
{   
    cout << "refNumero = " << refNumero << " despues de cuadradoPorReferencia" << endl;
} 