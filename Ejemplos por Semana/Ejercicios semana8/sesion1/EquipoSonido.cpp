#include<iostream>
#include<string>

using namespace std;

class EquipoSonido
{
    private:
        int potencia, voltios;
        string marca;

    friend void mostrar(EquipoSonido equipo);//funcion amiga de la clase
    
    public:
        EquipoSonido() // constructor por defecto
        {
            marca = "Sin marca"; potencia = voltios = 0;
        }
        EquipoSonido(string mt)
        {
            marca = mt; potencia = voltios = 0;
        }
        EquipoSonido(string mt, int p, int v)
        {
            marca = mt;
            potencia = p;
            voltios = v;
        }
};

int main()
{
    EquipoSonido rt; // constructor por defecto
    EquipoSonido ft("Sony"); 
    EquipoSonido gt("Sanyo", 35, 220);

    mostrar(rt);
    mostrar(ft);
    mostrar(gt);
}

void mostrar(EquipoSonido equipo){
    cout <<"\n****** Equipo de Sonido *****\n";
    cout << "Marca: " << equipo.marca << endl;
    cout << "Potencia: " << equipo.potencia << endl;
    cout << "Voltios: " << equipo.voltios << endl;
}


