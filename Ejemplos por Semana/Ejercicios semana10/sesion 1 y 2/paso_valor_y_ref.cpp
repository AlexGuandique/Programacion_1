// Paso de argumentos por valor y por referencia.

#include <iostream>

using namespace std;

// prototipo de función (paso por valor)
int cuadradoPorValor( int ); 

// prototipo de función (paso por referencia)
void cuadradoPorReferencia( int & ); 


int main()

{
    // valor para cuadrado usando cuadradoPorValor
    int x = 2; 

    // valor para cuadrado usando cuadradoPorReferencia
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
} // fin de main


// cuadradoPorValor multiplica el número por sí mismo, almacena el
// resultado en el número y devuelve el nuevo valor del número
int cuadradoPorValor( int numero )
{
    return numero *= numero; 
    // no se modificó el argumento de la función que hizo la llamada

} // fin de la función cuadradoPorValor

/* cuadradoPorReferencia multiplica a refNumero por sí solo y 
almacena el resultado en la variable a la que refNumero hace referencia 
en la función main*/

void cuadradoPorReferencia( int &refNumero )
{

refNumero *= refNumero; // se modificó el argumento de la función que hizo la llamada

} // fin de la función cuadradoPorReferencia
