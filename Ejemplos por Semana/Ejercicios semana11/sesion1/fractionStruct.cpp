/*
Programa para demostrar el uso de los
tipos Struct en C++, este tipo de datos
es util para los programadores para crear
sus propias estructuras de tipos.
*/

#include <iostream>
using namespace std;

// Definimos un nuevo tipo de estructura llamada Fraction
// como la definicion se puso antes del "main"
// los tipos Fraction se pueden usar como prototipos


struct Fraction {
// declaramos sus dos miembros
int numerator;
int denominator;
}; // Note el punto y coma al final

// funciones prototipos
void getFraction(Fraction &f);
void printFraction(const Fraction &f);

int main ()
{
    // declaramos variables de tipo Fraction
    Fraction f1, f2;
    // obtenemos dos fracciones y las desplegamos
    getFraction(f1);
    cout << "\nf1 = ";
    printFraction(f1);
    getFraction(f2);
    cout << "\nf2 = ";
    printFraction(f2);
    cout << endl;
}

// pedimos al usuario los valores del denominador y numerador
// los almacenamos en su adecuado lugar en la estrcututra; checamos si
// el valor del denominador es valido y lo ponemos en 1 si no lo es.

void getFraction(Fraction &f) {
    cout << "\nIngresa el numerador: ";
    cin >> f.numerator;
    cout << "Ingresa el denominador: ";
    cin >> f.denominator;
    while (f.denominator == 0)
    {
        cout<<"Error denominador no puede ser cero"<<endl;
        cout << "Ingresa el denominador: ";
        cin >> f.denominator;
    } 
}
// imprimimos la fraccion
void printFraction(const Fraction &f) {
    cout << f.numerator << "/" << f.denominator << "\n";
}




