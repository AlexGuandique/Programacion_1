//clase hora
#include<iostream>

using namespace std;

//definicion del tipo de dato aptracto hora
class Hora
{
    public:
    Hora();//contructor 
    void establecerHora(int,int,int);//establsera hora,minutos,segundos
    void imprimeMilitar();//imprimira la hora en formato militar
    void imprimeEstandar();//imprimira la hora en formato estadar

    private:
    int hora;//0 - 23
    int minuto;//0 - 59
    int segundo;//0 - 59
};
//inicializamos a 0 a cada dato miembro 
Hora::Hora()
{
    hora = 0;
    minuto = 0;
    segundo = 0;
}

//se establece un nuevo valor por hora por medio de hora militar.
//validacion de datos 
void Hora::establecerHora(int h,int m,int s)
{
    hora = (h >= 0 && h <= 24) ? h : 0;
    minuto = (m >= 0 && m <= 60) ? m : 0;
    minuto = (s >= 0 && s <= 60) ? s : 0;
}

//imprimir hora en formato militar

void Hora::imprimeMilitar()
{
    cout << (hora < 10 ? "0" : "")<< hora << ":"
         << (minuto < 10 ? "0" : "")<< minuto;
};//fin de la funcion

void Hora::imprimeEstandar()
{
    cout << ((hora == 0 || hora == 12) ? 12 : hora % 12)
         << ":" << (segundo < 10 ? "0" : "") << minuto
         <<  (hora < 12 ? "AM" : "PM");
}//fin de la funcion

//Controlador para probar las clases 
int mian()
{
    Hora h;
    cout <<"La hora militar inicial es ";
    h.imprimeMilitar();

    cout <<"\nLa hora estandar inicial es ";
    h.imprimeEstandar();

    h.establecerHora(13,27,6);

    cout<<"\n\nLa hora militar despues de estableceHora es";

    h.imprimeMilitar();
    cout <<"\n La hora estandar despues de estableceHora es ";
    
    h.imprimeEstandar();

    h.establecerHora(99,99,99);//itenta establcer valores invalidos

    cout << "\n\nDespues de intentar establacer valores invalidos: "
         <<"\nHora Militar: ";
    
    h.imprimeMilitar();

    cout << "\nHora estandar: ";
    h.imprimeEstandar();

    cout << endl;

    return 0;


}


