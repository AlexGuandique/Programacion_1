#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  cout << "Vector inicial: ";

  for (const int& i : num) {
    cout << i << "  ";
  }

 // Eliminar el ultimo elemento
    num.pop_back();
  	num.pop_back();
  cout << "\nVector final: ";

  for (const int& i : num) {
    cout << i << "  ";
  }
}