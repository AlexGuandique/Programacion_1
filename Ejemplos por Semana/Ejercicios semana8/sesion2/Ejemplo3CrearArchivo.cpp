#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    int cuenta;
    char nombre[20];
    char apellido[20];
    double saldo;

    int n, i = 1; //i controla el ciclo while, n numero de clientes

    ofstream cliente;
    cliente.open("cliente.txt", ios::out);
    
    if(!cliente)
    {
        cerr << "No se puede abrir el archivo"<<endl;
        exit(1);
    }
    else{

        cout <<"Digite el numero de clientes a ingresar: ";
        cin >> n;

        while (i<=n)
        {
            /* code */
            cliente << endl;
            cout << endl;
            cout <<"\nDigite su numero de cuenta: ";
            cin >>cuenta;
            cout <<"\nDigite su nombre: ";
            cin >> nombre;
            cout <<"\nDigite su apellido: ";
            cin >> apellido;
            cout <<"\nDigite su saldo: ";
            cin >> saldo;

            cliente <<cuenta<<" "<<nombre<<" "<<apellido<<" "<<saldo;
            i++;
        }
        cliente.close();
        cout << "Se termino de agregar datos ar archivo";
        system("pause");
    }
}



