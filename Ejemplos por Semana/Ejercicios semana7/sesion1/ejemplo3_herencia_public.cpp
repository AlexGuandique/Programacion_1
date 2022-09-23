// C++ programa para demostrar el funcionamiento de la herencia pública

#include <iostream>
using namespace std;

class Base {
   private:
    int pvt = 1;

   protected:
    int prot = 2;

   public:
    int pub = 3;

    // función para acceder al miembro privado pvt
    int getPVT() {
        return pvt;
    }
};

class PublicDerived : public Base {
   public:
    // función para acceder a un miembro protegido desde Base
    int getProt() {
        return prot;
    }
};

class PublicDerived2 : protected Base {
   public:
    // función para acceder a un miembro protegido desde Base
    int getProt() {
        return prot;
    }
    int getPub(){
        return pub;
    }
    void mostrarPub(){
        cout << "Private = " << getPVT() << endl;
    }
};

int main() {
    PublicDerived object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;

    PublicDerived2 object2;
    
    cout << "Protected = " << object2.getProt() << endl;
    cout << "Public = " << object2.getPub() << endl;
    object2.mostrarPub();
    /*
    // Error: member "Base::pvt" is inaccessible
    cout << "Private = " << object1.pvt;

    // Error: member "Base::prot" is inaccessible
    cout << "Protected = " << object1.prot;
    */
}