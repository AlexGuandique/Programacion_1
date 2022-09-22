// Programa de C++ para demostrar la herencia
#include <iostream>
using namespace std;

// Clase Base
class Animal { 
    //Funciones miembro
    public: 
        void comer() {
            cout << "!Puedo comer!" << endl;
        }

        void dormir() {
            cout << "!Yo puedo dormir!" << endl;
        }
};

// Clase Derivada
class Perro : public Animal {
   public:
        void ladrar() {
            cout << "!Puedo ladrar! Woof woof!!" << endl;
        }
};

// Clase Derivada
class Gato : public Animal {
    public:
        void maullar(){
            cout << "!Muedo Maullar! Miau Miau!!";
        }
};

// Clase derivada
class Pajaro : public Animal{
    public:
        void cantar(){
            cout << "!Puedo Cantar!";
        }
};

int main() {

    cout <<"\n*****************Perro******************\n";
    // Crear un objeto de la clase perro
    Perro perro1;

    // Llamando miembros de la clase base
    perro1.comer();
    perro1.dormir();

    // Llamando miembros de la clase derivada
    perro1.ladrar();

    cout <<"\n****************Gato*******************\n";

    Gato catObj;
    // Llamando miembros de la clase base
    catObj.comer();
    catObj.dormir();
    // Llamando miembros de la clase derivada
    catObj.maullar();
    cout <<"\n*****************Pajaro******************\n";
    Pajaro canario;
    canario.comer();
    canario.dormir();
    canario.cantar();
}
