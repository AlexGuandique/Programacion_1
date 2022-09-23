#include<iostream>
#include<string>

using namespace std;

class Carro{
    private:
        string marca, modelo;
        int year_matricula;
        double potencia;
    public:
        Carro(string mar= "Sin Marca", string model = "Sin Modelo", int year = 0, double pot = 0){
            marca = mar;
            modelo = model;
            year_matricula = year;
            potencia = pot;
        }
        void acelerar(){
            cout <<"Acelerando...."<<endl;
        }

        void frenar(){
            cout <<"Frenando...."<<endl;
        }
        void girar(){
           cout <<"Girando...."<<endl; 
        }

        //mostrar los datos

};