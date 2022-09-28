#include <iostream>
#include<string>

using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "Desde la clase Base" << endl;
    }
};

class Derived : public Base {
   public:
    void print() override {
        cout << "Desde la clase derivada" << endl;
    }
};

int main() {
    Base base;
    Derived derived1;
    Base* base1 = &derived1;

    // Llama a la funcion de la clase Base
    base.print();
    derived1.print();
    base1->print();

    
}


