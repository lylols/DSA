#include <bits/stdc++.h>
using namespace std;

void arrayy(int arr[], int n) {
    arr[1] += 100;
    cout << "value in fxn :" << arr[1] << endl;
}

int main () {
    //taking input in array
    int n= 3;
    int arr[n];
    for(int i= 0; i<n; i= i+1) {
        cin >> arr[i];
    }
    arrayy(arr,n);
    cout <<" Value in int fxn :" << arr[1] << endl;
    return 0;
}
//CONCLUSION : Array always gets passed by reference 