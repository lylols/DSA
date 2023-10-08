#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5][5], b[5][5], sum[5][5], m,i,j;

    cout << "Enter size of matrix (max 5) :";
    cin >> m;
    cout << "\n Enter elements of the matrices => \n";
    cout << " Matrix A :" << endl;
    for(i=0; i<m; i++) 
    {
        for (j=0; j<m; j++) 
        {
            cout << " \n a["<<i<<"]["<<j<<"] = ";
            cin >> a[i][j];
        }
    }

    cout << " Matrix B :" << endl;
    for(i=0; i<m; i++) 
    {
        for (j=0; j<m; j++) 
        {
            cout << " \n b["<<i<<"]["<<j<<"] = ";
            cin >> b[i][j];
        }
    }

    cout << " a+b =>"<< endl;
    for(i=0; i<m; i++) 
    {
        for (j=0; j<m; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i=0; i<m; i++) 
    {
        for (j=0; j<m; j++) 
        {
            cout << "\t" << sum[i][j];
        }
        printf("\n\n");
    }
    return 0;
}