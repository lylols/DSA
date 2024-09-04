//Select minimum and swap
#include<bits/stdc++.h>
using namespace std;

void selection(int arr[], int n){
    for( int i=0; i<=n-2; i++){ //last ind is n-1 ans swapping happens till n-2
        int min =i;
        for( int j=i; j<=n-1; j++){
            if(arr[j]< arr[min]){
                min =j;
            }
        }
        int temp = arr[min];
        arr[min]= arr[i];
        arr[i]= temp;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }
    selection(arr, n);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

//Tc: It sort of runs each time for one less ie first 
//time till n-1 then n-2 bcz last is already sorted
//so n(n+1)/2 but we ignore constants and smaller values so just n^2

