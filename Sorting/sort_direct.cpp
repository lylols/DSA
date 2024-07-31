#include <bits/stdc++.h>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

int main() {
    //Sorting vectors
    vector<int> v= {5,3,7,4,1,5};
    sort(v.begin(),v.end());
    cout << "Sorted vector: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    //Sorting an array 
    int arr[] = {2,5,1,5,3,7};
    sort(arr,arr +6);
        cout << "Sorted array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}