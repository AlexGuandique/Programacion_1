#include<iostream>
#include<stack> //Libreria para las pilas

using namespace std;

int main()
{
    stack<int> pila; //stack<tipo de dato> nombre_pila
   
    pila.push(4);
    pila.push(5);
    pila.push(5);
    pila.push(7);
    pila.push(8);
    cout << "Elementos en la pila: "<<pila.size()<<endl;
    cout<<"Se eliminara a: "<<pila.top()<<endl;
    pila.pop();
    cout<<"Se eliminara a: "<<pila.top()<<endl;
    pila.pop();
    pila.pop();
    pila.pop();
    pila.pop();
    if(pila.empty() == 1){ //si pila vacia es true (1)
        cout<<"La pila esta vacia"<<endl;
    }
    else{
        pila.pop();
    }
    cout << "Elementos en la pila: "<<pila.size()<<endl;
    cout << "Pila Empty: " << pila.empty()<<endl;
}