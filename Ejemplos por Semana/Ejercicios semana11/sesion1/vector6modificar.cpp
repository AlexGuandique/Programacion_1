#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  cout << "Vector inicial: ";

  for (const int& i : num) {
    cout << i << "  ";
  }

  // cambiar elementos en los índices 1 y 4
  num.at(1) = 9;
  num.at(4) = 7;

  cout << "\nVector actualizado: ";

  for (const int& i : num) {
    cout << i << "  ";
  }
}