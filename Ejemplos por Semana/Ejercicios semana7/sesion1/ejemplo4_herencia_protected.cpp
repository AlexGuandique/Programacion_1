// C++ programa para demostrar el funcionamiento de la herencia protegida

#include <iostream>
using namespace std;

class Base {
   private:
    int pvt = 1;

   protected:
    int prot = 2;

   public:
    int pub = 3;

    // función para acceder a un miembro privado
    int getPVT() {
        return pvt;
    }
};

class ProtectedDerived : protected Base {
   public:
    // función para acceder a un miembro protegido desde Base
    int getProt() {
        return prot;
    }
    // función para acceder a un miembro público desde la Base
    int getPub() {
        return pub;
    }
};

int main() {
    ProtectedDerived object1;
    cout << "No se puede acceder a privado." << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;

    /*
    // Error: member "Base::getPVT()" is inaccessible
    cout << "Private = " << object1.getPVT();

    // Error: member "Base::pub" is inaccessible
    cout << "Public = " << object1.pub;
    */
}