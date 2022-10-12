#include<iostream>
#include<string>
#include<vector>
using namespace std;



int main()
{
    vector<int> num {1, 2, 3, 4, 5};

    cout << "Initial Vector: ";

    for (const int& i : num) {
        cout << i << "  ";
    }
    
    // Agregue los enteros 6 y 7 al vector
    num.push_back(6);
    num.push_back(7);
    num.insert(num.end(), 0);

    cout << "\nActualizar Vector: ";

    for (const int& i : num) {
        cout << i << "  ";
    }
}