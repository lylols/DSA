//Adjacent swaps
#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n) {
    for( int i=n-1; i>=0; i--){ //bcz the last element gets separated 
    //as largest one fo n-1 then n-2 ...1
        for(int j=0; j<=i-1; j++){ //as swapping doesn't occur bw last and beyond last
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] =arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }
    bubble(arr, n);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

//Tc: O(n^2) 