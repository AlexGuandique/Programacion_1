#include<iostream>
#include<string>
#include<fstream>
#include<iomanip> //para el setw() separaciones
using namespace std;

int main()
{
    int cuenta;
    char nombre[20];
    char apellido[20];
    double saldo;

    int n, i = 1; //i controla el ciclo while, n numero de clientes
    //El constructor de ifstream abre el archivo
    ifstream leerCliente;
    leerCliente.open("cliente.txt", ios::in);
    
    //salr del progrma si ifstream no puede abrir el archivo
    if(!leerCliente)
    {
        cerr << "No se puede abrir el archivo"<<endl;
        exit(1);
    }
    else{
        //Encabezado para mayor comprension de los datos
        cout <<setw(10)<<"Cuenta"<<setw(13)<<"Nombre"
        <<setw(13)<<"Apellido"<<setw(10)<<"Balance"<<endl;

        //mostrar cada registro en el archivo
        while (!leerCliente.eof())
        {
            //leer desde archivo y guardar en las variables
            //el programa sabe que son 4 variables por los espacios.
            leerCliente >>cuenta>>nombre>>apellido>>saldo;
            //imprimir en consola los datos leidos
            cout <<setw(10)<<cuenta<<setw(13)<<nombre
        <<setw(13)<<apellido<<setw(10)<<saldo<<endl;
        }
        leerCliente.close();
        cout << "Se termino de  leer el archivo";
        system("pause");
    }
}



