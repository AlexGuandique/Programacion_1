#include<iostream>
#include<stack> //libreria para las pilas

using namespace std;

/*
 * PILA - STACK
 * stack<int> miPila; declara miPila como tipo stack (recordar agregar libreria <stack> al inicio)
 * miPila.empty() revisar si esta vacia
 * miPila.size() retorna tamanio de la pila
 * miPila.top() acceder al siguiente elemento
 * miPila.push(elemento) insertar el ultimo elemento
 * miPila.pop Elimina el siguiente elemento
*/

int main()
{
	stack<int> miPila;
	cout<<"Pila vacia: "<< miPila.empty()<<endl;
	miPila.push(7);
	miPila.push(8);
	miPila.push(6); 
	miPila.push(2);
    cout<<"Cima de la pila:"<<miPila.top()<<endl;
    cout<<"Size Pila: "<< miPila.size()<<endl;
    miPila.push(77);
    cout<<"Cima de la pila:"<<miPila.top()<<endl;
    cout<<"Size Pila: "<< miPila.size()<<endl;
    



}