#include <stdio.h>
#include <queue>
#include <stack>
using namespace std;


/*
 * PILA - STACK
 * stack<int> miPila; declara miPila como tipo stack (recordar agregar libreria <stack> al inicio)
 * miPila.empty() revisar si esta vacia
 * miPila.size() retorna tamanio de la pila
 * miPila.top() acceder al siguiente elemento
 * miPila.push(elemento) insertar el ultimo elemento
 * miPila.pop Elimina el siguiente elemento
 * ----------------------------------------------------------------------------------------------------
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
	stack<int> miPila;
	miPila.push(3);
	miPila.push(5);
	miPila.push(1);
	printf("MiPila: El elemento superior = %d\n",miPila.top());
	printf("MiPila: tamanio = %d\n",miPila.size());
	printf("La siguiente funcion MiPila.pop() elimina el elemento %d\n",miPila.top());
	miPila.pop();
	printf("MiPila: El elemento superior = %d\n",miPila.top());
	printf("MiPila: tamanio = %d\n",miPila.size());
	printf("--------------------------------------------\n");
	int n;
	queue<int> unaCola;
	unaCola.push(3);
	unaCola.push(5);
	unaCola.push(1);
	printf("unaCola: El elemento al frente = %d\n",unaCola.front());
	printf("unaCola: El elemento de atras = %d\n",unaCola.back());
	printf("unaCola: tamanio = %d\n",unaCola.size());
	printf("La siguiente funcion unaCola.pop() elimina el elemento %d\n",unaCola.front());
	unaCola.pop();
	printf("unaCola: El elemento al frente = %d\n",unaCola.front());
	printf("unaCola: El elemento de atras = %d\n",unaCola.back());
	printf("unaCola: tamanio = %d\n",unaCola.size());
}