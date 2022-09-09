#include<iostream>
#include <string>

using namespace std;

int main()
{
    string c1 = "Angela";
    string c2 = "Paola";
    string c3 = c1 + c2; // genera una nueva cadena: AngelaPaola
    cout<<c3<<endl;

    string cd("clasica");
    cd = "Musica" + cd; // genera la cadena Musicaclasica
    cout<<cd<<endl;
}           