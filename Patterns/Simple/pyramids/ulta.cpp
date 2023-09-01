
#include<iostream>
using namespace std;

int main () {
    int n,i,j,k;
    cin >> n;
    //This is outernloop which loops for rows
    for(i=1; i<=n; i++){
        //This inner loop loops for clms
        for (int j =0; j<i; j++){
            cout <<" ";
        }
        //for printing stars
        for(k=1;k<=2*n-2*i+1;k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}