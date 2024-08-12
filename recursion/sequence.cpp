#include<bits/stdtr1c++.h>
using namespace std;

void printf(int ind, vector <int> &ds, int arr[], int n){
    if (ind==n){
        for (auto it : ds){
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    //Pick the particular index into subsequence
    ds.push_back(arr[ind]);
    printf(ind+1, ds, arr,n);

    //Don't pick case or remove
    ds.pop_back();
    printf(ind+1, ds, arr,n);
}

int main(){
    int arr[]= {3,1,2};
    int n = 3;
    vector <int> ds;
    printf(0, ds,arr,n);

    return 0;
}