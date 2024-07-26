#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main () {
    vector <int> v ={2,4,5,6,8,11,13};

    //to erase a value
    v.erase(v.begin()+1);  
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    //to erase a range of value
    v.erase(v.begin()+2, v.begin()+4);
     for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    //inserting using begin
    vector<int>v1(2,11);
    v1.insert(v1.begin(),30);
    v1.insert(v1.begin()+1,2,13);
    for (int i : v1) {
        cout << i << " ";
    }
    cout << endl;

    //inserting a vector inside a vector
    vector<int> newv(3,4);
    v1.insert(v1.begin()+1, newv.begin(), newv.end());

    cout <<"size of vector: "<< v1.size(); //size of a vector
    cout << endl;

    newv.pop_back(); //pops the first value

    v.swap(v1); //swaps vector

    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;

}