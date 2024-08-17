#include<bits/stdc++.h>
using namespace std;
bool prints(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    if (ind==n){
        //Condition true
        if (s==sum){
            for(auto it : ds) cout << it<< " ";
            cout << endl;
            return true;
        }
        //condition not satisfied
        else return false;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
    if(prints( ind+1, ds, s, sum, arr, n )== true){
        return true;
    };

    ds.pop_back();
    s -= arr[ind];

    //not pick cond
    if(prints(ind+1, ds, s, sum, arr, n ) == true) return true;
    return false;
}

int main(){
    int arr[] = {1,2,1};
    int n =3;
    int sum=2;
    vector <int> ds;
    prints(0, ds, 0, sum, arr, n );
    return 0;
}