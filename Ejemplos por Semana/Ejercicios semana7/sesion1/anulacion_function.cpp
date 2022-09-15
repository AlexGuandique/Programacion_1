#include <iostream>
#include<string>

using namespace std;

class Base {
   public:
    void print() {
        cout << "Funcion Base" << endl;
    }
};

class Derivada : public Base {
   public:
    void print() {
        cout << "Funcion Derivada" << endl;
    }
    void a(){
        cout << "Desde la derivada"<<endl;
    }
};

int main() {
    Derivada derivadaObj1;
    derivadaObj1.print();
    derivadaObj1.a();

    Derivada::Base derivadaObj2;
    derivadaObj2.print();
    //derivadaObj2.a(); error no esta definido en la base
    
}
