// stack::empty
#include <iostream>      
#include <stack>          
using namespace std;

int main ()
{
  stack<int> mystack;
  int sum = 0;

  for (int i=1;i<=100;i++) mystack.push(i);
  while (!mystack.empty()) // mientras la pila no este vacia 
  {
    sum += mystack.top(); //agrega la cima a la suma
    mystack.pop();//elimina la cima de la pila
  }

  cout << "total: " << sum << '\n';

  return 0;
}