#include<iostream>
#include<string>

using namespace std;

//Definicion de la clase carro 
class Carro
{
    friend void crearCarro(Carro objCarro);
    //Datos miembro
    private:
        string marca;
        string modelo;
        int year;
        double potencia;
    //Funciones miembro 
    public:
        Carro()//constructor por defecto
        {
            marca = "Sin Marca";
            modelo = "Desconocido";
            year = 0;
            potencia = 0.0;
        }
        Carro(string mar, string model, int y, double poten )//constructor parametrizado
        {
            marca = mar;
            modelo = model;
            year = y;
            potencia = poten;
        }
        void acelerar() 
        {
            cout<<"Acelerando....."<<endl;
        }
        void frenar() 
        {
            cout<<"Frenar....."<<endl;
        }
        void girar() 
        {
            cout<<"Girar....."<<endl;
        }
};

int main()
{
    string marca;
    string modelo;
    int year;
    double potencia;

    Carro objCarro;//intancia de la clase
    crearCarro(objCarro);
    Carro objCarro2("Toyota","Corrolla" , 2000 , 200);
    crearCarro(objCarro2);
    objCarro2.acelerar();
    objCarro2.girar();
    objCarro2.frenar();
    return 0;
}

void crearCarro(Carro objCarro)
{
    cout<<"************ Carro *************"<<endl;
    cout<<"Marca: "<<objCarro.marca<<endl;
    cout<<"Modelo: "<<objCarro.modelo<<endl;
    cout<<"Year: "<<objCarro.year<<endl;
    cout<<"Potencia: "<<objCarro.potencia<<endl;
}

