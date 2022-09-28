#include<iostream>
#include <cstdlib>
using namespace std;

void cuadro()
{
    cout<<"*********"<<endl;
    for(int i=0; i<7; i++)
    {
        cout<<"*       *"<<endl;
    }
    cout<<"*********"<<endl;
}

void ovalo()
{
    cout<<"   ***"<<endl;;
    cout<<" *     *"<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<"*       *"<<endl;
    }
    cout<<" *     *"<<endl;
    cout<<"   ***"<<endl;;
}

void flecha()
{
    cout<<"  *\n";
    cout<<" ***\n";
    cout<<"*****\n";
    for(int i=0; i<5; i++)
    {
        cout<<"  *"<<endl;
    }
}

void rombo()
{ //7 5 3 1
    cout<<"     *\n";
    cout<<"    * *\n";
    cout<<"   *   *\n";
    cout<<"  *     *\n";
    cout<<" *       *\n";
    cout<<"  *     *\n";
    cout<<"   *   *\n";
    cout<<"    * *\n";
    cout<<"     *\n";
}

int main()
{
    cuadro();
    ovalo();
    flecha();
    rombo();
    system("pause");
}