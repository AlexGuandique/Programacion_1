class Rectangulo
{
    private: //Datos miembro privados.
        double izquierdo, derecho;
        double superior, inferior;
        double area, perimetro;
    public:
        //Constructor Parametrizado
        Rectangulo(double izq, double der, double sup, double inf) // constructor
        {
            izquierdo = izq; 
            derecho = der;
            superior = sup;
            inferior = inf;
        }
        //constructor por defecto
        Rectangulo(){
            izquierdo = 0; 
            derecho = 0;
            superior = 0;
            inferior = 0;
        }
        // definiciones de otros métodos miembro
        //area
        double areaRectangulo()
        {
            area = inferior*derecho; //base*altura
            return area;
        }
        //perimetro
        double perimetroRectangulo()
        {
            perimetro = izquierdo+derecho+superior+inferior;
            return perimetro;
        }
        //leer y fijar (funciones establecer y obtener)
        
        double fijarIzqDer(double l){izquierdo = l, derecho = l;}
        double fijarSupInf(double l){superior = l, inferior = l;}
        void leerIzqDer();
        void leerSupInf();
        void mostrarLados();

};