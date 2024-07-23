#include <iostream>
#include <utility>
using namespace std;

int main() {
    //single pair
    pair<int,string> p1(0,"example");
    cout << p1.first << ' ' << p1.second << endl;
    
    //nested pair
    pair<int,pair<string, double>> p2(1, pair<string, double> ("pi",3.14));
    cout << p2.first << ' '<< p2.second.first <<' '<< p2.second.second << endl;
    //Array of pairs
    pair<int,string> arr[] = {{1,"one"},{2,"two"},{3,"three"}};
    for (int i=0; i<3; i++){
        cout << arr[i].first <<' '<< arr[i].second << endl;
    }

    return 0;
}