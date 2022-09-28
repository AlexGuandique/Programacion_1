#include<iostream>
#include<queue> //libreria para las colas

using namespace std;

/* ----------------------------------------------------------------------------------------------------
 * COLA - QUEUE
 * queue<int> unaCola; declara miCola como tipo queue (recordar agregar libreria <queue> al inicio)
 * unaCola.empty() revisar si esta vacia
 * unaCola.size() retorna tamaÃ±o de la cola
 * unaCola.front() acceder al siguiente elemento
 * unaCola.back() acceder al ultimo elemento
 * unaCola.push(elementod insertar el ultimo elemento
 * unaCola.pop() Elimina el siguiente elemento
 * ------------------------------------------------------
 */


int main()
{
    queue<int> unaCola;
	unaCola.push(3);
	unaCola.push(5);
	unaCola.push(1);
	cout<<"unaCola: El elemento al frente = "<< unaCola.front()<<endl;
	cout<<"unaCola: El elemento de atras = "<< unaCola.back()<<endl;
	cout<<"unaCola: tamanio = "<< unaCola.size()<<endl;
	cout<<"La siguiente funcion unaCola.pop() elimina el elemento "<< unaCola.front()<<endl;
	unaCola.pop();
	cout<<"unaCola: El elemento al frente = "<< unaCola.front()<<endl;
	cout<<"unaCola: El elemento de atras = "<< unaCola.back()<<endl;
	cout<<"unaCola: tamanio = "<< unaCola.size()<<endl;
}