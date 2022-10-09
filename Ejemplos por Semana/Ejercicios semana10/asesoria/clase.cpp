#include<iostream>
#include<string>

using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:    
    Person(string n = "Sin nombre", int edad = 0)
    {
        name = n;
        age = edad;
    }
    void mostrarPersona(){
        cout << "Nombre: " << name <<endl;
        cout << "Edad: " << age <<endl;
    }
    void setname(string n){
        name = n;
    }
    void setage(int edad){
        age = edad;
    }
};

int main()
{
    Person p1;
    p1.mostrarPersona();

    Person p2("Alex", 27);
    p2.mostrarPersona();

    Person p3;
    p3.setname("Vilma");
    p3.setage(20);
    p3.mostrarPersona();

}

