#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq = {1,2,3,4};

    //Inserting elements
    dq.push_front(0);
    dq.push_back(4);
    auto it = dq.begin();
    advance(it,3);
    dq.insert(it,3);

    cout << "After insertion: ";
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;

    // Deleting elements
    dq.pop_front();
    dq.pop_back();
    it = dq.begin();
    advance(it,3);
    dq.erase(it);

    cout << "After deletion: ";
    for (int i : dq) {
        cout << i << " ";
    }
    cout << endl;

    //Accessing elements
    cout << "First: " << dq.front() << endl;
    cout << "Last: " << dq.back() << endl;
    cout << "2nd Index: " << dq[2] ;

    return 0;
}