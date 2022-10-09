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
    cout<<txt<<endl;
    cout<<principal::txt<<endl;
}