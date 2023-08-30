#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,i;
    cin >> n;
    //This is outernloop which loops for rows
    for(i=1; i<=n; i++){
        //This inner loop loops for clms
        for (int j =1; j<=i; j++){
            cout << i <<" ";
        }
        // As soon as N stars are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
    return 0;
}