#include <iostream>
#include <stack>
using namespace std;

int main () {
    //Initializing a stack
    stack <int> s;

    //Pushing elements
    s.push(11);
    s.push(22);
    s.emplace(33);
    s.emplace(44);

    //Accessing the elements
    cout << "Top element: " << s.top() << endl;

    // Pop an element
    s.pop();

    cout << "size: " << s.size() << endl; 

    cout<< s.empty() << endl;
    cout << "Is the stack empty? " << (s.empty() ? "Yes" : "No") << endl;

}