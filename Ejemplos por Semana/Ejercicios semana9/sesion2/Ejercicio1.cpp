//¿Qué está mal en la siguiente definición de la clase?

#include<iostream>
using namespace std;

class Buffer
{
private:
    char* datos;
    int cursor ;
    
    Buffer(int n)
    {
        datos = new char[n];
    };
public: 
    int Long(){
        return cursor;
    }
};

int main()
{
    
}