#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> x = {2,4,6,7,0,7,8,9,9,7,8,9};
    int i = 1;
    int j = x.size()-1;
    string cadena;
    while(i <= 100){
        cout<<i<<" ";
        if(i == 10){
            break; //salir del ciclo
        }
        i++;
    }/*
    cout<<"\n";
    while(j >= 0){
        cout <<"x["<<j<<"] = "<< x[j]<<endl;
        j--;
    }*/

    /*while(cadena != "salir"){
        cout << "Ingresa una cadena: ";
        getline(cin, cadena);
        cout<< cadena <<endl;
    }*/
}