#include<iostream>
#include<string>

using namespace std;

int main()
{
    /*
    enum diasMes { 
        DIAS_ENE = 31, DIAS_FEB = 28, DIAS_MAR = 31,
        DIAS_APR = 30, DIAS_MAY = 31, DIAS_JUN = 30,
        DIAS_JUL = 31, DIAS_AGO = 31, DIAS_SEP = 30,
        DIAS_OCT = 31, DIAS_NOV = 30, DIAS_DIC = 31 };

    enum rosaVientos {NORTE, SUR, ESTE, OESTE};
    //enum rosaVientos {NORTE = 0, SUR = 1, ESTE = 2, OESTE = 3};

    enum luna {AM, PM};
    enum dia {LUN, MAR, MIE, JUE, VIE, SAB, DOM};
    //enum color {BLANCO, AZUL, VERDE, ROJO};

    //dia a, b, c;
    //color c1, c2;

     enum color {BLANCO, AZUL, VERDE, ROJO};
    color rotulador = ROJO;

    cout << "El color es: " << rotulador <<endl;
*/
   

    enum diasMes { 
        DIAS_ENE = 31, DIAS_FEB = 28, DIAS_MAR = 31,
        DIAS_APR = 30, DIAS_MAY = 31, DIAS_JUN = 30,
        DIAS_JUL = 31, DIAS_AGO = 31, DIAS_SEP = 30,
        DIAS_OCT = 31, DIAS_NOV = 30, DIAS_DIC = 31 
        } dias, z;

    //diasMes dias;
    dias = DIAS_SEP;
    cout << "SEPTIEMBRE tiene " << dias << " dias";
    z = DIAS_DIC;
    cout << "  DICIEMBRE tiene " << z << " dias";
}
