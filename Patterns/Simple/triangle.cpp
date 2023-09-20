#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,i;
    cin >> n;
    //This is outernloop which loops for rows
    for(i=0; i<n; i++){
        //This inner loop loops for clms
        for (int j =i; j<n; j++){
            cout << "*";
        }
        // As soon as N stars are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }

}