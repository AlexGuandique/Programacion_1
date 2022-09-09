#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int row = 4; //filas
    int col = 3; //columnas
    
    /*int array2[row][3] = 
    {
        {1,1,1},
        {2,2,2},
        {3,3,3},
        {4,4,4}
    }*/

    int array2[row][col] = {{89,75,100},{40,50,67},{79,89,99},{70,80,90}};
    
    vector<string> letras = {"xandra", "yoseline", "zuleima", "alba"};

    //cout<< array2[2][0]<<endl;
    for(int filas = 0; filas < row; filas++){   //0<4 (0,1,2,3)
        for(int column = 0; column < col; column++){
            cout << letras[filas]<< column+1 << "=" << array2[filas][column]<<" ";
        }
        cout << endl;
    }    

}


