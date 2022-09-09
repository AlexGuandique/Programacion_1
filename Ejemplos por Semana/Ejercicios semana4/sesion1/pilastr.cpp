#include<iostream>
#include<string>
#include<stack> //libreria para las stacks (pilas)

using namespace std;

int main()
{
    stack<string> strPila;

    strPila.push("M");
    strPila.push("A");
    strPila.push("C");

    cout<<"size stack: "<<strPila.size()<<endl;

    cout<<strPila.top()<<endl;
    strPila.pop();
    cout<<strPila.top()<<endl;
    strPila.pop();
    cout<<strPila.top()<<endl;
    strPila.pop();


}