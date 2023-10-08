//reverse without usimg amy extra space
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    int a[n] = {1,2,3,4,5};
    //no of elements present in an array

    int l= 0;
    int r= n-1;

    while (l<r){
        //swap a[l] and a[r]
        int temp = a[r];
        a[r] = a[l];
        a[l] = temp; 
        l++;
        r--;
    }
    for (int i=0; i<n; i++){
        cout << a[i] << ' ' ;
    } 
}