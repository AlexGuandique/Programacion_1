#include<iostream>
#include<string>
#include<queue> //libreria para las colas
using namespace std;

int main()
{
    queue<string> strCola;

    cout <<"Cola vacia: "<< strCola.empty()<<endl;
    strCola.push("X");
    strCola.push("Y");
    strCola.push("Z");

    cout <<"Cola vacia: "<< strCola.empty()<<endl;
    cout <<"Elemento al frente: "<< strCola.front()<<endl;
    cout <<"Elemento al final: "<< strCola.back()<<endl;

    //eleiminar
    cout <<"Elemento a eliminar: "<< strCola.front()<<endl;
    strCola.pop();

    cout <<"Cola vacia: "<< strCola.empty()<<endl;
    if(strCola.empty()){
        cout<<"Cola vacia";
    }
    else{
        cout <<"Elemento al frente: "<< strCola.front()<<endl;
        cout <<"Elemento al final: "<< strCola.back()<<endl;
    }
}