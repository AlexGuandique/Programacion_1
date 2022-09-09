#include<iostream>
using namespace std;

//Estructura
struct compra
{
    unsigned int id;
    float monto;
    string tipo_pago;
    string nombre_cliente;
};

void mostrar_compra(auto compra)
{
    cout << "\nVisualización de información." << endl;
    cout << "Id: "<<compra.id<< endl;
    cout <<"Total de la compra: "<<compra.monto<< endl;
    cout <<"Tipo de pago (efectivo o targeta)"<<compra.tipo_pago<< endl;
    cout << "Nombre del cliente: "<<compra.nombre_cliente<< endl;
}

int main()
{
    compra compra1;
    cout << "Id: ";
    cin >> compra1.id;
    cout <<"Total de la compra: ";
    cin >> compra1.monto;
    cout <<"Tipo de pago (efectivo o targeta):";
    cin >> compra1.tipo_pago;
    cout << "Nombre del cliente: ";
    cin >> compra1.nombre_cliente;
    mostrar_compra(compra1);

    compra compra2;
       cout << "Id: ";
    cin >> compra2.id;
    cout <<"Total de la compra: ";
    cin >> compra2.monto;
    cout <<"Tipo de pago (efectivo o targeta):";
    cin >> compra2.tipo_pago;
    cout << "Nombre del cliente: ";
    cin >> compra2.nombre_cliente;
    mostrar_compra(compra2);
}