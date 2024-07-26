#include <iostream>
#include <list>
using namespace std;

int main (){
    //initializing a list
    list<int> ls = {0,1};

    //Inserting elements
    ls.push_back(2); // Insert at the back
    ls.emplace_back(4);
    
    ls.push_front(5); //Insert at front (not in vector)
    ls.emplace_front(7);

    auto it= ls.begin();
    advance(it,3); // Move iterator to the 4th position (0-based index)
    ls.insert(it,11);

    cout << "after insertion: ";
    for (int i : ls) {
        cout << i << " ";
    }
    cout<<endl;

    //Deleting elements
    ls.pop_front();
    ls.pop_back();
    it = ls.begin();
    advance(it,3);
    ls.erase(it);
    
    cout << "after deletion: ";
    for (int i : ls) {
        cout << i << " ";
    }
    cout<< endl;
    
    list<int> myList = {1, 2, 3, 2, 4};
    // Removing all occurrences of 2
    myList.remove(2);
    for (int i : myList) {
        cout << i << " ";
    }
    return 0;
}
