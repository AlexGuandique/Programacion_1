#include<iostream>

using namespace std;

class Trabajador
{
private:
    string nombre;
    float Salario;

public:
    //creamos una funcion get y set get para optener los datos y set para fijar
    string getnombre();
    float getsalario();
    void setnombre(string N);
    void setSalario(string S);
    //creamos una funcion para visualizar y una para agregar personas
    void Visualizar();
    void Obtener();
};

