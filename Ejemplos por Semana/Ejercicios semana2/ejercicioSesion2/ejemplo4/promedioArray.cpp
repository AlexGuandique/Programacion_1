#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, promedio;

    cout << "Introduzca el numero de datos: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "¡Error! número debe estar en el rango de (1 a 100)." << endl;
        cout << "Introduzca el numero nuevamente: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Introduzca el numero: ";
        cin >> num[i];
        sum += num[i];
    }

    promedio = sum / n;
    cout << "Promedio = " << promedio;
}