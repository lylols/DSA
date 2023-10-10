
#include<iostream>
using namespace std;

int main () {
    int n,i,j;
    cin >> n;
    //This is outernloop which loops for rows
    for(i=1; i<=n; i++){
        //This inner loop loops for clms
        for (int j =n-1; j>=i; j--){
            cout <<" ";
        }
        //for printing stars
        for(j=1;j<=2*i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(i= n+1; i<=2*n; i++){
        for (int j= 1; j<=i-n-1; j++){
            cout <<" ";
        }
        //for printing stars
        for(j=1;j<=4*n -(2*i-1);j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}