#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<int> num {1, 2, 3};

    // da valor de basura
    cout << "Valor basura: " << num[4]<<endl;

    // arroja una excepción
    cout << num.at(4);
}