#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

struct Combo
{
    int num_combo;
    string p_fuerte;
    string postre;
    double precio;
};

int main()
{
    int n;
    cout<<"Cuantos combos quieres agregar este dia: ";
    cin>>n;
    cin.ignore();
    
    Combo combos[n];

    for(int i = 0; i<n; i++)
    {
        cout<<"Numero de combo: ";
        cin>>combos[i].num_combo;
        cin.ignore();
        cout<<"Plato Fuerte: ";
        getline(cin, combos[i].p_fuerte);
        cout<<"Postre: ";
        getline(cin, combos[i].postre);
        cout<<"Precio: ";
        cin>>combos[i].precio;
        cin.ignore();
    }

    ofstream archivo; 
    archivo.open("datos_menu.txt", ios::out);
    if(!archivo)
    {
        cout<<"No se encontro el archivo"<<endl;
        exit(1);
    }
    else
    {
        for(int i = 0; i<n; i++){
            archivo<<combos[i].num_combo<<endl;
            archivo<<combos[i].p_fuerte<<endl;
            archivo<<combos[i].postre<<endl;
            if(i != n-1)
                archivo<<combos[i].precio<<endl;
            else
                archivo<<combos[i].precio;
        } 
        archivo.close();
    }
    
    ifstream archivosal;
    archivosal.open("datos_menu.txt", ios::in);
    if(!archivosal)
    {
        cout<<"No se pudo abrir el archivo"<<endl;
    }
    else
    {
        char num_combo[10];
        char p_fuerte[50];
        char postre[50];
        char precio[10];

        while(!archivosal.eof())
        {
            cout<<"\n********* Mostrar COMBO *************\n";
            archivosal.getline(num_combo, 5);
            cout<<"Numero Combo: "<<num_combo<<endl;
            archivosal.getline(p_fuerte, 50);
            cout<<"Plato Fuerte: "<<p_fuerte<<endl;
            archivosal.getline(postre, 50);
            cout<<"Postre: "<<postre<<endl;
            archivosal.getline(precio, 10);
            cout<<"Precio: "<<precio<<endl;
        }
        archivosal.close();
    }
    return 0;
}