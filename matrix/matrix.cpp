#include <bits/stdc++.h>
using namespace std;

int main (){
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    //to iterate over rows
    for (int i=0; i<3; i++)
    {
        //to iterate over columns
        for(int j=0; j<3; j++)
        {
            cout <<"\t"<< a[i][j];
        }
        cout << "\n" << endl;
    } //cout << endl;

    //Printing diagonal elements of a matrix :
    cout << "Diagonl elements :"<< endl;
    for (int i=0; i<3; i++)
    {
        //to iterate over columns
        for(int j=0; j<3; j++)
        {
            if (i==j)
            {
                cout <<"\t" << a[i][j] << " ";
            }
            
        }
        
    } 
    cout<< endl;
    //Printing secondary diagonal elements of a matrix :
    cout << "Secondary Diagonl elements :"<< endl;
    int k=2;
    for (int i=0; i<3; i++)
    {
       cout << "\t" <<a[i][k];
       k--;
    } 
}