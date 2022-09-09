#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<int> x = {2,4,6,7,0,7,8,9,9,7,8,9};

    /*for(int i = 1; i <= 100; i++){
        cout << i << " ";
    }
    cout <<"\n";
    for(int i = 100; i >= 0; i--){
        cout << i << " ";
    }*/
    for(int i = 0; i < x.size(); i++){
        if(i == 3){
            continue;
        }
        cout <<"x["<<i<<"] = "<< x[i]<<endl;
    }
    cout<<"\n";
    for(int i = x.size()-1 ; i >=0 ; i--){
        cout <<"x["<<i<<"] = "<< x[i]<<endl;
    }
}   