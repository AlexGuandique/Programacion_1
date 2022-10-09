#include <iostream>
using namespace std;

int cuadradoPorValor( int ); 

void cuadradoPorReferencia(const int & ); 

int main()
{
    int x = 2; 
    int z = 4; 

    // demuestra cuadradoPorValor
    cout << "x = " << x << " antes de cuadradoPorValor\n";
    cout << "Valor devuelto por cuadradoPorValor: " 
    << cuadradoPorValor(x) << endl;
    cout << "x = " << x << " despues de cuadradoPorValor\n" << endl;

    // demuestra cuadradoPorReferencia
    cout << "z = " << z << " antes de cuadradoPorReferencia" << endl;
    cuadradoPorReferencia(z);
    cout << "z = " << z << " despues de cuadradoPorReferencia" << endl;
} 

int cuadradoPorValor( int numero )
{
    return numero *= numero;    
} 

void cuadradoPorReferencia(const int &refNumero)
{   
    //refNumero *= refNumero; 
    cout << "refNumero = " << refNumero << " despues de cuadradoPorReferencia" << endl;
} 