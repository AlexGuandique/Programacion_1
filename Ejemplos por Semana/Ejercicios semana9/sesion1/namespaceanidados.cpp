#include<iostream>
#include<string>

using namespace std;

namespace principal{
    string txt = "Desde namespace principal";
    namespace secundario{
        string txt = "Desde namespace secundario";
    }
}

int main()
{
    using namespace principal::secundario;
    cout<<principal::txt;
    cout<<txt;
    
}