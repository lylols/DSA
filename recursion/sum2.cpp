#include<bits/stdc++.h>
using namespace std;
void prints(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    if (ind==n){
        if (s==sum){
            for(auto it : ds) cout << it<< " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
    prints( ind+1, ds, s, sum, arr, n );

    ds.pop_back();
    s -= arr[ind];

    //not pick condition
    prints(ind+1, ds, s, sum, arr, n );
}

int main(){
    int arr[] = {1,2,1};
    int n =3;
    int sum=2;
    vector <int> ds;
    prints(0, ds, 0, sum, arr, n );
    return 0;
}