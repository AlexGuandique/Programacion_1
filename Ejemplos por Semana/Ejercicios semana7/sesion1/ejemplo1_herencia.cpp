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

// Clases Derivadas
class Perro : protected Animal {
   public:
        void ladrar() {
            cout << "!Puedo ladrar! Woof woof!!" << endl;
        }
        void cazar()
        {
            cout << "!Puedo cazar! Woof woof!!" << endl;
        }
};

class Cazador : public Perro {
   public:
    
        
        
};

// Clase Derivada
class Gato : public Animal {
    public:
        void maullar(){
            cout << "!Puedo Maullar! Miau Miau!!"<<endl;;
        }
};

// Clase derivada
class Pajaro : public Animal{
    public:
        void cantar(){
            cout << "!Puedo Cantar!"<<endl;;
        }
};
// Clase derivada
class Vaca : public Animal
{
    public:
        void muje(){
            cout << "Puedo Mujir MUUUUUUUU"<<endl;
        }
};

int main() {

    cout <<"\n*****************Perro******************\n";
    // Crear un objeto de la clase perro
    Perro perro1;

    // Llamando funciones miembro de la clase base
    //perro1.mostrarMB();

    Cazador perroCazador;
    perroCazador.cazar();
    
    // Llamando funciones miembro de la clase derivada
    perro1.ladrar();

    cout <<"\n****************Gato*******************\n";

    Gato catObj;//instancia de la clase
    // Llamando funciones miembro de la clase base
    catObj.comer();
    catObj.dormir();
    // Llamando funciones miembro de la clase derivada
    catObj.maullar();
    cout <<"\n*****************Pajaro******************\n";
    Pajaro canario;//instancia de la clase
    // Llamando funciones miembro de la clase base
    canario.comer();
    canario.dormir();
    // Llamando funciones miembro de la clase derivada
    canario.cantar();
    cout <<"\n*****************Vaca******************\n";
    Vaca cowObj; //instancia de la clase
      // Llamando funciones miembro de la clase base
    cowObj.comer();
    cowObj.dormir();
   // Llamando funciones miembro de la clase derivada
    cowObj.muje();
}
