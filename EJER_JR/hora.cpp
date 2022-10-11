//SOBRECARGA DE CONTRUUCTOR

#include<iostream>

using namespace std;

class Tiempo
{
private://atributos 
    int hora,minuto,segundos;
public://metodos 
    Tiempo(int,int,int);//CONTRUCTOR1
    Tiempo(int);//CONTRUCTOR2
    void MostrarTiempo();
   
};

Tiempo::Tiempo(int H,int M,int S)
{
    hora = H;
    minuto = M;
    segundos = S;
} 

Tiempo::Tiempo(int TiempoSegundos)
{
    hora = TiempoSegundos / 3600;//tiempo que hay en hora
    TiempoSegundos %= 360;
    minuto = TiempoSegundos / 60;
    segundos = TiempoSegundos % 60;
}

void Tiempo::MostrarTiempo(){
    cout<<"hora: "<<hora<<":"<<minuto<<":"<<segundos<<endl;
}

int main()
{
    Tiempo horaActual(16,5,30); 
    horaActual.MostrarTiempo(); 
    Tiempo HaceUnaHora(55410);
    HaceUnaHora.MostrarTiempo();
   
   
    
}
