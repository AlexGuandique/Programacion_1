#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  // declara iterador
  vector<int>::iterator iter;

  // inicializa el iterador con el primer elemento
  iter = num.begin();

  // imprime el numero de elemento del vector
  cout << "num[0] = " << *iter << endl;

  // Iterador apunta al 3er elemento
  iter = num.begin() + 2;
  cout << "num[2] = " << *iter<<endl;

  // iterador apunta al último elemento
  iter = num.end() - 1;
  cout << "num[4] = " << *iter;
}