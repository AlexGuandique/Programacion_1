#include<iostream>
#include<string>

using namespace std;

class Distancia{
    private:
        int metros;
    
    public:
    Distancia(int _metros = 0){
        metros = _metros;
    }
    int getDistancia(){
        return metros;
    }
    void setDistancia(int _metros){
        metros = _metros;
    }
};

int main()
{
    cout<<"\n****************Desde main****************\n";
    Distancia distaObj(7);
    cout << "Distancia: " <<distaObj.getDistancia() <<endl;
    distaObj.setDistancia(77);
    cout << "Distancia: " <<distaObj.getDistancia() <<endl;
}