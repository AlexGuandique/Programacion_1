#include <iostream>
#include <string>
#include <cstdlib> //Para poder incluir system("pause");
using namespace std;

int main() {
  string saludo = "Hola como estas ";
  string nombre = "";

  cout << "Ingresa tu nombre: ";
  cin >> nombre;
  cout << saludo + nombre<<endl;
  
  system("pause");
}