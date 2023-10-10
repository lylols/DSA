// pairs having the same sum
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[7] = {2,4,1,3,5,0,6};
    int count =0;

    //pick the first element of the pair
    for(int i=0; i<7; i++)
    {
        for(int j= i+1;j<7; j++)
        {
            if(a[i] + a[j] == 5)
            {
                count++;
            }
        }

    }
    cout << "the count is :" << count << endl;
    return 0;
}







