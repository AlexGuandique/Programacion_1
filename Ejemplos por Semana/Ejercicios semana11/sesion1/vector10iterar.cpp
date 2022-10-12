#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  // declara el iterador
  vector<int>::iterator iter;

  // Utilizar iterador con for loop
  for (iter = num.begin(); iter != num.end(); ++iter) {
    cout << *iter << "  ";
  }
  cout<<"\n";
}