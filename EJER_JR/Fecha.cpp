#include<iostream>

using namespace std;

class Fecha
{
private://atributo
    int dia,mes,anio;
public://Metodos
     Fecha(int,int,int);//contructor1 
     Fecha(long);//contructor2
    void mostrarfecha();//
};

Fecha::Fecha(int D,int M,int A)
{
    dia = D;
    mes = M;
    anio = A;

}
Fecha::Fecha(long Fecha){
    anio = int(Fecha/10000); 
    mes = int ((Fecha-anio*1000)/100);
    dia = int(Fecha - anio * 1000 - mes * 100);
}


void Fecha::mostrarfecha(){
   cout<<"fecha: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
    //creamos un objeto
    Fecha hoy(01,2,2022);
    Fecha ayer(2022131);
    ayer.mostrarfecha();
    hoy.mostrarfecha();

    return 0;
}