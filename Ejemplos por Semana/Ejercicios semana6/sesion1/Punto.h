//archivo Punto.h
class Punto
{
    private: //Datos miembro
    int x, y; 

    // coordenadas x, y
    public:
    Punto(int x_, int y_) // constructor 
    {
        x = x_;
        y = y_;
    }
    Punto() { 
            x = 0;
            y = 0;
        } // constructor sin argumentos
    //Optener
    int leerX() const; // devuelve el valor de x
    int leerY() const; // devuelve el valor de y
    //Establecer
    void fijarX(int valorX); // establece el valor de x
    void fijarY(int valorY); // establece el valor de y
};