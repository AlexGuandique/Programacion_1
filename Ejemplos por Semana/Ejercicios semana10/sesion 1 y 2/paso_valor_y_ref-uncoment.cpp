#include <iostream>
using namespace std;

//prototipos de las funciones 
int cuadradoPorValor(int); 
void cuadradoPorReferencia(int &); 

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

void cuadradoPorReferencia(int &refNumero)
{
    refNumero *= refNumero; 
} 

