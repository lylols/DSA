#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5] = {1,44,53,2,5};
    int b[5];

    int j=0; //for traversingnon array b

    //to traverse on array a
    for(int i=4; i>=0; i--){
        b[j] = a[i];
        j= j+1;
    }

    for(int i=0; i<5; i++){
        cout << b[i] << " ";
    }
}