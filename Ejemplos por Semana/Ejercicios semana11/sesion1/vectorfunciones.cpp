#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<int> n{1,7,2,5};
    cout << "size = " << n.size()<<endl;
    cout <<"primer elemento: " << n.front() <<endl;
    cout <<"ultimo elemento: " << n.back() <<endl;
    for (const int& i : n){
        cout << "valor: " <<i<<endl;
    }
    for(int i = 0; i<n.size(); i++){ 
        cout << "valor: " << n.at(i)<<endl;
    }

    n.clear();
    cout << "size = " << n.size()<<endl;
    cout << "Esta vacio: "<<n.empty()<<endl;
    n.push_back(7);
    n.push_back(2);
 
    cout << "size = " << n.size()<<endl;
    cout << "Capacidad: "<<n.capacity()<<endl;
}