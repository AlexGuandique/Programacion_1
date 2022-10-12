#include<iostream>
#include<string>

using namespace std;



struct nombreStruct{
    //Miembros de la union
    int miembro1;
    bool miembro2;
    double miembro3;
}objS;

union nombreUnion{
    //Miembros de la union
    int miembro1;
    bool miembro2;
    double miembro3;
};

int main()
{
    nombreUnion objU;
    //cout << "Union: " << sizeof(objU)<<endl;
   // cout << "Struct: " << sizeof(objS)<<endl;
    //obj.miembro3 = 5.5;
    //obj.miembro2 = true;
    //cout << "Elemento de la union:" << obj.miembro1<<endl;
    //cout << "Direccion de memoria: "<< &obj.miembro1<<endl;
    //cout << "Direccion de memoria: "<< &obj.miembro2<<endl;
    //cout << "Direccion de memoria: "<< &obj.miembro3<<endl;
    objU.miembro3 = 5.88;
    //cout << objU.miembro3 <<endl;
    objU.miembro2 = false;
    //cout << objU.miembro2 <<endl;
    objU.miembro3 = 5.88;
    cout << objU.miembro1 <<endl;
   

 
    
    
   

  
}