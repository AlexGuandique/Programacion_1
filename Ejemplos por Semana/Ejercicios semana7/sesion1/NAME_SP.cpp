#include<iostream>
#include<string.h>

using namespace std;

namespace Santos 
{
    int edad = 18;
    string josue(){
        
        return "SANTOS JOSUE ROMERO OCHOA";
    }
} // namespace name
namespace Erick
{
    int edad = 20*4;
    string josue(){
        
        return "ERICK JOSUE RIVERA VELAZQUES";
    }
} // namespace name 

namespace Marvin
{
    int edad = 18;
    string josue(){
        
        return "MARVIN JOSUE CORDOBA AGUILER";
    }
} //namespace name

int main(){
    cout<<Erick::josue();
    cout<<" TIENE :"<<Erick::edad<<"\n";
    cout<<Marvin::josue()<<endl;
    cout<<" TIENE :"<<Marvin::edad<<"\n";
     cout<<Santos::josue()<<endl;
     cout<<" TIENE :"<<Santos::edad<<"\n";
}


