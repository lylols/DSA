#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> fc;
    // for(int i=1;i<=sqrt(n);i++)
    //If we use sqrt fxn will be called many times so higher TC 
    for(int i=1; i*i<=n; i++){
        if (n%i==0){
            //cout<< i<< " ";
            fc.push_back(i);
            if((n/i)!=i){
                //cout<< n/i<< " " ; //So that same no. is not repeated          
                fc.push_back(n/i);
            }
        }
    } //O(sqrt(n))
    sort(fc.begin(),fc.end()); 
    //O(no. of factors)*log(n.o.f.) ie e/factor * ech iteration

    for(auto it: fc) cout << it <<" "; //O(n.o.f)
    return 0;
}
