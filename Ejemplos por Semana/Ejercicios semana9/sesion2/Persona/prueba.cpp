#include <iostream>

using namespace std;

class Base
{
    protected:
        int valor;
    public:
        Base()
        {
            valor = 0;
        };
        Base(int v)
        {
           valor = v; 
           cout<<"Valor: "<<v<<endl;
        }
};

class Deribada : public Base{
    private:
        int num;
    using Base::Base;
        public:
            Deribada()
            {
                cout<<"Desde la clase Deribada\n";
            }
            Deribada(int n, int v)
            {
                valor = v;
                num = n;
                cout<<"Num: "<<n<<endl;
                cout<<"Valor: "<<v<<endl;
            }
};


int main()
{
    //Base objBase(7);
    Deribada objDeribada(7,9);
    return 0;
}