#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    stack<int> mipila;
    int x;
    mipila.push(7);
    mipila.push(77);
    x = mipila.top();
    cout<<"valor a eliminar: "<<mipila.top()<<endl;
    mipila.pop();
    cout<<"top pila: "<<mipila.top()<<endl;
    cout<<x;
    
}