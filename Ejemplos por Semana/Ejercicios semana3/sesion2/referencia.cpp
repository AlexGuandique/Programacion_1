#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "Ex";
    string& r1 = s; //variable de referencia  
    cout << "El valor de s = "<<s << '\n';
    const string& r2 = s;
    //Example
    r1 += "ample";           // modifica s
// r2 + = "!"; // error: no se puede modificar mediante referencia a const
    cout << "El valor de r1 = "<<r1 << '\n'; // imprime s, que ahora contiene "Ejemplo"
    cout << "El valor de r2 = "<<r2 << '\n';
    cout << "El valor de s = "<<s << '\n'; 
}

