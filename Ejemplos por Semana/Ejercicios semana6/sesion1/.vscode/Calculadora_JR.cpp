#include<iostream>
#include<cmath>

using namespace std;

class Calculadora
{
private:
   float raiz;
   float exponencial;   
   float log_base10;
   float potencia;
   int OPC,numero;
   int pot;
public:
    Calculadora()//contructor por defecto
    {
       raiz = 0;
       exponencial = 2.71828182845905;
       log_base10 = 0;
       potencia = 0;
    }
   int MostrarOpcCalculadora()//funcion miembro que muestra las opciones 
   {
      cout<<"----Operaciones Que Puedes Realizar-----"<<endl;
      cout<<"---OPC #1 Raiz Cuadrada----"<<endl;
      cout<<"---OPC #2 Funcion Exponencial e^----"<<endl;
      cout<<"---OPC #3 Log base 10----"<<endl;
      cout<<"---OPC #4 Potencia----"<<endl;
      cout<<"---Elige una Opcion---"<<endl;
      cin>>OPC;
   }
   float PedidaDateCalculadora()//pide los datos ingresados segun la opc
   { 
       if (OPC == 1)
       {
          cout<<"Ingrese el Numero al que le quiere sacar la raiz\n";
          cin>>numero;
      
       }
       if (OPC == 2)
       {
           cout<<"Ingrese el numero al que quiere elevar la exponencial e^\n";
           cin>>numero;
         
       }
        if (OPC == 3)
       {
           cout<<"Ingrese el numero al que le quiere sacar Log base 10\n";
           cin>>numero;
           
       }
        if (OPC == 4)
       {
           cout<<"Ingrese el numero que quiere elevar y a que potencia\n";
           cin>>numero; 
           cin>>pot;
          
       }
   }
   float ProcesoCalculadora()//funcion que realiza el proceso
   {
      if (OPC == 1)
       {
          raiz = sqrt(numero);
       }
       if (OPC == 2)
       {
           exponencial = exp(numero);
       }
        if (OPC == 3)
       {
           log_base10 = log10(numero);
       }
        if (OPC == 4)
       {
           potencia = pow(numero,pot);
       }
   }
   void SalidaCalculadora()//funcion que realiza la salida
   {
      if (OPC == 1)
       {
          cout<<"La Raiz Cuadrada es = "<<raiz;
       }
       if (OPC == 2)
       {
           cout<<"El Exponencial e^ = "<<exponencial;
       }
        if (OPC == 3)
       {
          cout<<"El Log base 10 = "<<log_base10;
       }
        if (OPC == 4)
       {
           cout<<"la potencia = "<<potencia;
       }
   }
};

int main()
{
    Calculadora calculador;
    calculador.MostrarOpcCalculadora(); 
    calculador.PedidaDateCalculadora();
    calculador.ProcesoCalculadora();
    calculador.SalidaCalculadora();
}