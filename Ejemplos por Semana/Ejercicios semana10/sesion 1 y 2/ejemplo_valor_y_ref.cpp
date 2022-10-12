#include<iostream>
#include<string>


using namespace std;

string nombreValor(string);
string nombreReferencia(string &);

int main()
{   
    string nombre = "Naruto";
    cout<<"Antes de nombre por valor: "<<nombre<<endl;
    cout<<"En la funcion: "<<nombreValor(nombre)<<endl;
    cout<<"Despues de nombre por valor: "<<nombre<<endl;

    cout<<"********** Referencia *************\n";
    cout<<"Antes de nombre por referencia: "<<nombre<<endl;
    cout<<"En la funcion por referencia: "<<nombreReferencia(nombre)<<endl;
    cout<<"Despues de nombre por referencia: "<<nombre<<endl;
    return 0;
}

string nombreValor(string name)
{
    name = "Hitachi";
    return name;
}
string nombreReferencia(string &name)
{
    name = "Hitachi";
    return name;
}