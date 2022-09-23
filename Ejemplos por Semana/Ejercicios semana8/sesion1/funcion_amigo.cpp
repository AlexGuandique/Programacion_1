// Programa C++ para demostrar el funcionamiento de la función friend
#include <iostream>
using namespace std;
//Definicion de la clase Distancia
class Distancia {
    private:
        int metros;//0
        // funcion amigo
        friend int addDistancia(Distancia);

    public:
        Distancia() : metros(0) {}
        //Distancia(){metros = 0;}
}; //Fin de la clase Distancia

// definición de la función amigo
int addDistancia(Distancia dist) { //d
    //acceso a miembros privados desde la función de amigo
    dist.metros += 5;
    return dist.metros; 
}

int main() {
    Distancia obj_dist; 
    cout << "Distancia: " << addDistancia(obj_dist);
}
