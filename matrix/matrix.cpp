#include <bits/stdc++.h>
using namespace std;

int main (){
    int a [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    //to iterate over rows
    for (int i=0; i<3; i++)
    {
        //to iterate over columns
        for(int j=0; j<3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    } //cout << endl;
}