//Calculadora del índice de masa corporal
#include<iostream>
#include <cstdlib>

using namespace std;

void rango_de_peso(float imc){
    cout << "IMC = " << imc;

    if(imc < 18.5){
        cout << " Bajo Peso"<<endl; 
    }   
    else if (imc >= 18.5 && imc <= 24.9){
        cout << " Normal"<<endl;
    } 
    else if (imc >= 25 && imc <= 29.9){
        cout << " Sobrepeso"<<endl;
    } 
    else if (imc >= 30){
        cout << " Obeso"<<endl;
    } 

    cout << "\n********Valores de IMC **********"<<endl;
    cout << "Bajo Peso: menos de 18.5\n"; 
    cout << "Normal: entre 18.5 y 24.9\n";
    cout << "Sobrepeso: entre 25 y 29.9\n";
    cout << "Obeso: 30 o mas\n";
}


int main(){
    float altura = 0; //altura en Metros
    float peso = 0; //peso en Kilogramos
    float imc = 0; //índice de masa corporal

    cout << "Escriba su altura en Pulgadas: "<<endl;
    cin >> altura; 

    cout << "Escriba su peso en Libras: "<<endl;
    cin >> peso;

    imc = (peso*703)/(altura*altura);

    rango_de_peso(imc);

    system("pause");
}