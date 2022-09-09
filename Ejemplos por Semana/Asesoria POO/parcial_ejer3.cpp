#include<iostream>
using namespace std;

//+ - * / %
int sum(int num1, int num2);
int res(int num1, int num2);
int mult(int num1, int num2);
double div(double num1, double num2);
int mod(int num1, int num2);
void menu();
int app(int status);

int main()
{
    int status = 1;

    while(status == 1){
        menu();
        status = app(status);
    }
 
}

void menu()
{
    cout <<"\n******************* MENU *******************\n";
    cout << "1. Sumar"<<endl;
    cout << "2. Restar"<<endl;
    cout << "3. Multiplicar"<<endl;
    cout << "4. Dividir"<<endl;
    cout << "5. Mod"<<endl;
    cout << "6. Salir"<<endl;
}

int sum(int num1, int num2){
    return num1+num2;
}
int res(int num1, int num2)
{
    return num1-num2;
}
int mult(int num1, int num2)
{
    return num1*num2;
}
double div(double num1, double num2)
{
    return num1/num2;
}
int mod(int num1, int num2)
{
    return num1%num2;
}

int app(int status){
    int op;
    double n1, n2;
    cout << "x: ";
    cin >> n1;
    cout << "y: ";
    cin >> n2;
    cout << "Tu Opcion: ";
    cin >> op;
 
    if(op == 1){cout << "x+y = "<<sum(n1, n2)<<endl;}
    else if (op == 2){cout << "x-y = "<<res(n1, n2)<<endl;}
    else if (op == 3){cout << "x*y = "<<mult(n1, n2)<<endl;} 
    else if (op == 4){cout << "x/y = "<<div(n1, n2)<<endl;}
    else if (op == 5){ cout << "x%y = "<<mod(n1, n2)<<endl;}
    else if (op == 6){status = 0;}
    else{cout << "Opcion invalida" << endl;}
    return status;
}
