#include<iostream>
#include<string>
#include <iomanip>

using namespace std;


struct {
   string discoduro;
   string procesador;
   double ram;
   double cap_drive;
   bool laptop;
} pc_escritorio;


int main()
{
    cout << "Ingresa el tipo de DD: ";
    cin >> pc_escritorio.discoduro;
    cout << "Ingresa el tipo de procesador: ";
    cin >> pc_escritorio.procesador; 
    pc_escritorio.ram = 4;
    pc_escritorio.cap_drive = 500;
    pc_escritorio.laptop = false;
    


    cout <<"****Caracteristicas Pc****" <<endl;
    cout<< "Tipo disco duro: "s<< pc_escritorio.discoduro <<endl;
    cout<< "Tipo procesador:"<< setw(7) << pc_escritorio.procesador <<endl; 
    cout<< "Capacidad Ram:"<< setw(7) << pc_escritorio.ram <<endl;
    cout<< "Capacidad DD:"<< setw(7) << pc_escritorio.cap_drive <<endl;
    cout<< "Es Laptop:"<< setw(7) << pc_escritorio.laptop <<endl;   
}


    
