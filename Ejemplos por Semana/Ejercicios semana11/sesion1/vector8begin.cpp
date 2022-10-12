#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<int> num = {1, 2, 3};
    vector<int>::iterator iter;
     vector<int>::iterator iter2;

    // iter apunta a num[0]
    iter = num.begin();
    cout << *iter<<endl;
    // iter2 apunta a num[2]
    iter2 = num.end()-1;
    cout << *iter2 <<endl;
}