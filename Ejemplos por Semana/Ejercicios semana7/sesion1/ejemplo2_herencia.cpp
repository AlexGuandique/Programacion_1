// C++ programa para demostrar la proteccion de miembros

#include <iostream>
#include <string>

using namespace std;

// clase base
class Animal {

   private:
    string color;

   protected:
    string type;

   public:
    void comer() {
        cout << "Yo puedo comer!" << endl;
    }

    void dormir() {
        cout << "Puedo dormir!" << endl;
    }
    // Establecer
    void setColor(string clr) {
        color = clr;
    }
    // Optener
    string getColor() {
        return color;
    }
};

// clase derivada
class Perro : public Animal {

   public:
    void setType(string tp) {
        type = tp;
    }

    void displayInfo(string c) {
        cout << "Yo soy un " << type << endl;
        cout << "Mi color es: " << c << endl;
    }
    
    void ladrar() {
        cout << "Puedo ladrar! Woof woof!!" << endl;
    }
};

int main() {
    // Crear un objeto de la clase perro
    Perro perro1;

    // Llamando a los miembros de la clase base
    perro1.comer();
    perro1.dormir();
    perro1.setColor("Negro"); //Establece el color de el animal
 
    // Llamando a los mienbros de la clase derivada
    perro1.ladrar();
    perro1.setType("Pitbull");

    // Uso de getColor() de perro1 como argumento
    // getColor() devuelve datos de tipo cadena
    perro1.displayInfo(perro1.getColor());
    
}         


