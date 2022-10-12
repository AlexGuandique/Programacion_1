#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  cout << "Elemento en indice 0: " << num.at(0) << endl;
  cout << "Elemento en indice 2: " << num.at(2) << endl;
  cout << "Elemento en indice 4: " << num.at(4);

}


