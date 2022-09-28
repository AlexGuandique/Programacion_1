//Programa C++ para demostrar el uso de la función virtual

#include <iostream>
#include <string>
using namespace std;

class Animal {
   private:
    string type;

   public:
    // constructor para inicializar el tipo
    Animal() : type("Animal") {}

    // Declarar función virtual
    virtual string getType() {
        return type;
    }
};

class Perro : public Animal {
   private:
    string type;

   public:
    // constructor para inicializar el tipo
    Perro() : type("Perro") {}

    string getType()  override{
        return type;
    }
};

class Gato : public Animal {
   private:
    string type;

   public:
    // constructor para inicializar el tipo
    Gato() : type("Gato") {}

    string getType()  override{
        return type;
    }
};

void print(Animal* ani) {
    cout << "Animal: " << ani->getType() << endl;
}

int main() {
    Animal* animal1 = new Animal();
    Animal* perro1 = new Perro();
    Animal* gato1 = new Gato();

    print(animal1);
    print(perro1);
    print(gato1);

}