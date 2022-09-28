// C++ program to demonstrate the working of friend class

#include <iostream>
using namespace std;

// declaración de avance
class ClassB;

class ClassA {
    private:
        int numA;
        // declaración de clase de amigo
        friend class ClassB;

    public:
        // constructor para inicializar numA a 12
        ClassA() : numA(12) {}
        /*ClassA(){
            numA = 12;
        }*/
};

class ClassB {
    private:
        int numB;
    public:
        // constructor para inicializar numB a 1
        ClassB() : numB(1) {}
    
    // función de miembro para agregar numA
    // de ClaseA y numB de ClaseB
    int add() {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main() {
    ClassB objectB;
    cout << "Suma: " << objectB.add();
}