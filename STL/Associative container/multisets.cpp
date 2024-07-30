#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset <int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);

    ms.erase(2); //all 2 erased

    int cnt = ms.count(1); //counts all occurences

    ms.erase(ms.find(1)); //single 1 erased a it erased address

}