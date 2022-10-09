#include<iostream>
using namespace std;

class Base {
   public:
    virtual void print() {
        // code
    }
};

class Derived : public Base {
   public:
    void print() {
        // code
    }
};

int main() {
    Derived derived1;
    // puntero de tipo Base que apunta a derived1
    Base* base1 = &derived1;

    // llama a la función miembro de la clase Derived
    base1->print();
    
}

