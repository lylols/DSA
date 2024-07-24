#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << ' ' << v[1] << endl;

    //Vector of pairs
    vector<pair<int,int>> vec;
    vec.push_back(make_pair(3,4));
    vec.emplace_back(5,6);
    cout << vec[0].first << ' ' << vec[0].second << endl;
    cout << vec[1].first << ' ' << vec[1].second << endl;

    //Vectors with default values
    vector <int> v1(5,10); // Vector of size 5 with all elements 10
    cout << "Elements in v1: ";
    for (int i : v1) {
        cout << i << " ";
    }
    cout<< endl;

    vector<int> v2(5); // Vector of size 5 with default values (0 for int)
    cout << "Elements in v2: ";
    for (int i : v2) {
        cout << i << " ";
    }
    cout << endl;

    //Copying a vector to another vcetor
    vector <int> v3(v1);
     cout << "Elements in v3: ";
     for (int i : v3) {
        cout << i << " " <<endl;
    }

    //Using ITERATORS
    vector<int> :: iterator it = v.begin();
    it++;
    cout << "2nd element in v using iterator: " << *(it) << endl;
    // 2 as added by v.emplace_back(2);

}