#include <iostream>
#include <map>
using namespace std;

int main() {
   //map<key, value> map_name;
   map<int, string> m;

    // Insert elements into the map
    m[1] = "one";
    m.emplace(2,"two");
    m.insert({3, "three"});
    
    for(auto it: m){
        cout<< it.first << " " << it.second << endl;
    }
    cout << m[7];

    auto it = m.find(2);
    // cout << *(it).second;
    cout << it->second << endl;

    auto lb = m.lower_bound(2);
    cout << lb->first <<endl;
    auto ub = m.upper_bound(3);
    cout << ub->first <<endl;
    //erase, swap, size, empty
}