#include<iostream>
#include<string>
#include <iomanip>

using namespace std;


struct pc{
   string discoduro;
   string procesador;
   double ram;
   double cap_drive;
   bool laptop;
} pc_escritorio;

void mostrar_struct(pc);
void inicializar_struct(pc);


int main()
{
    //struct pc pc_escritorio;
    inicializar_struct(pc_escritorio);
    
}

void inicializar_struct(pc struc_pc){
    struc_pc.discoduro = "Mecanico";
    struc_pc.procesador = "Intel"; 
    struc_pc.ram = 4;
    struc_pc.cap_drive = 500;
    struc_pc.laptop = false;

    mostrar_struct(struc_pc);
}

void mostrar_struct(pc struc_pc){
    cout <<"****Caracteristicas Pc****" <<endl;
    cout<< "Tipo disco duro: "s<< struc_pc.discoduro <<endl;
    cout<< "Tipo procesador:"<< setw(7) << struc_pc.procesador <<endl; 
    cout<< "Capacidad Ram:"<< setw(7) << struc_pc.ram <<endl;
    cout<< "Capacidad DD:"<< setw(7) << struc_pc.cap_drive <<endl;
    cout<< "Es Laptop:"<< setw(7) << struc_pc.laptop <<endl;
}