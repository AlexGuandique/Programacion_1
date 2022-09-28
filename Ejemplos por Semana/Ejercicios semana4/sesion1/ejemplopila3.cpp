#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> miPila;
	miPila.push(3);
	miPila.push(5);
	miPila.push(1);
	cout<<"MiPila: El elemento superior = "<<miPila.top()<<endl;
	cout<<"MiPila: tamanio = "<<miPila.size()<<endl;
	cout<<"La siguiente funcion MiPila.pop() elimina el elemento "<<miPila.top()<<endl;
	miPila.pop();
	cout<<"MiPila: El elemento superior = "<<miPila.top()<<endl;
	cout<<"MiPila: tamanio = "<<miPila.size()<<endl;
	cout<<"--------------------------------------------\n"<<endl;
	
}