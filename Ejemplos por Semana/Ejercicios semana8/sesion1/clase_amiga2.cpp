// Agregar miembros de dos clases diferentes mediante funciones de amigo

#include <iostream>
using namespace std;

// declaración de avance
class ClassB;

class ClassA {
    private:
        int numA;
    public:
        // constructor para inicializar numA a 12
        explicit ClassA() : numA(12) {}
    
         // declaración de función amigo
        friend int add(ClassA, ClassB);
};

class ClassB {
    private:
        int numB;
    public:
        // constructor para inicializar numB a 1
        explicit ClassB() : numB(1) {}
        // declaración de función amigo
        friend int add(ClassA, ClassB);
};

// acceder a miembros de ambas clases
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Suma: " << add(objectA, objectB);
}